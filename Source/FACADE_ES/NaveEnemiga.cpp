// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/ShapeComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "Components/BoxComponent.h"
#include "FACADE_ESPawn.h"
#include "FACADE_ESProjectile.h"




// Sets default values
ANaveEnemiga::ANaveEnemiga()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true; 


	Scena = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	RootComponent = Scena;
	
	// establece la plantilla de la nave enemiga
	malla = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	//mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	malla->SetupAttachment(RootComponent);
	RootComponent = malla;

	// establece la plantilla de la nave enemiga
	Colision_Nave = CreateDefaultSubobject<UBoxComponent>(TEXT("Colision_Nave"));
	Colision_Nave->SetupAttachment(RootComponent);





	Life = 0.f;

	Tiempo_M = 0.f;

	Distancia_D_CB = 200.f;

    // Called when the game starts or when spawned


}

// Called when the game starts or when spawned
void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Yellow, FString::Printf(TEXT("[Nave_Enemiga_P]  Vida de la nave : %f"), Life));


	//Controlando el paso de la velocidad desde el Facade 
	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Yellow, FString::Printf(TEXT("[Nave_Enemiga_P]  Velocidad de la nave : %f"), Velocity));


	//Para el disparo de la nave 
	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Yellow, FString::Printf(TEXT("[Nave_Enemiga_P]  TieDanio_Disparo : %f"), Danio_Disparo));

	//Si la vida de la nave es menor o igual a 0

	if (Life <= 0)
	{
		// Destruir la nave
		Componente_Destruccion();
	}
	else
	{
		Disparo_Nave(DeltaTime);
		// Llama a la función de movimiento pasando DeltaTime directamente
		Movimiento_Nave(DeltaTime);
	}

}

void ANaveEnemiga::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	// Si el actor que colisiona es un disparo
	AFACADE_ESPawn* Jugador = Cast<AFACADE_ESPawn>(OtherActor);

	if (Jugador)
	{
		// Destruir la nave
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Colision con el jugador"));

		//Jugador->Damage(Danio_Disparo);


		Recibir_Danio(50.f);

	}
}

void ANaveEnemiga::Componente_Destruccion()
{
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), Sonido_Nave, GetActorLocation());

	// Crear una explosion en la nave
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Explosion_Nave, GetActorLocation());

	// Destruir la nave
	this->Destroy();
}

void ANaveEnemiga::Recibir_Danio(float Danio)
{
	Life -= Danio;
}

void ANaveEnemiga::Disparo_Nave(float DeltaTime)
{
	Tiempo_Disparo += DeltaTime;
	if (Tiempo_Disparo >= Tiempo_Disparo_Generar)
	{
		Tiempo_Disparo = 0.0f;

		// Configura la dirección hacia el eje X negativo
		FVector Direction = FVector(-1.0f, 0.0f, 0.0f);  // Dirección negativa en X
		FVector SpawnLocation = GetActorLocation() + (Direction * Distancia_D_CB);  // Calcula la nueva ubicación de generación basada en la distancia configurada

		FRotator FireRotation = Direction.Rotation();  // Asegura que la rotación del proyectil coincida con la dirección

		UWorld* const World = GetWorld();
		if (World)
		{
			AFACADE_ESProjectile* Proyectil = World->SpawnActor<AFACADE_ESProjectile>(AFACADE_ESProjectile::StaticClass(), SpawnLocation, FireRotation);
			if (Proyectil)
			{
				//Proyectil->Set_Danio(Danio_Disparo);
			}
		}
	}
}

void ANaveEnemiga::Movimiento_Nave(float DeltaTime)
{

	FVector PosicionActual = GetActorLocation();

	// Dirección horizontal constante
	const FVector DireccionMovimiento = FVector(-1.0f, 0.0f, 0.0f);

	// Componente de desplazamiento horizontal basado en la velocidad
	FVector DesplazamientoHorizontal = DireccionMovimiento * Velocity * DeltaTime;

	// Componente de desplazamiento circular (zigzag)
	float Periodo = 2.0f; // Tiempo en segundos para completar una oscilación completa
	float Amplitud = 7.0f; // Amplitud de la oscilación (7 unidades como solicitado)
	float Angulo = FMath::Fmod(GetWorld()->TimeSeconds / Periodo, 1.0f) * 2.0f * PI;
	FVector DesplazamientoCircular = FVector(0.0f, FMath::Sin(Angulo) * Amplitud, 0.0f); // Solo en Y para zigzag horizontal

	// Calcular nueva posición combinando movimientos horizontal y circular
	FVector NuevaPosicion = PosicionActual + DesplazamientoHorizontal + DesplazamientoCircular;
	SetActorLocation(NuevaPosicion);

	// Restablece la posición si la nave cruza el límite en X
	if (NuevaPosicion.X < -1700.f)
	{
		SetActorLocation(FVector(1000.f, NuevaPosicion.Y, NuevaPosicion.Z));
	}
}







