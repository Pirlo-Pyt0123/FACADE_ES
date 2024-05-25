// Fill out your copyright notice in the Description page of Project Settings.


#include "GENERAL_OBSTACLE.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundBase.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "FACADE_ESPawn.h"

// Sets default values
AGENERAL_OBSTACLE::AGENERAL_OBSTACLE()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh_Estructura_Espacial = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh_Estructura_Espacial"));
	RootComponent = Mesh_Estructura_Espacial;

	Colision_Estructura = CreateDefaultSubobject<UBoxComponent>(TEXT("Colision"));
	Colision_Estructura->SetupAttachment(RootComponent);

	Colision_Estructura->SetBoxExtent(FVector(50.f, 50.f, 50.f));
   
}

// Called when the game starts or when spawned
void AGENERAL_OBSTACLE::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGENERAL_OBSTACLE::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, FString::Printf(TEXT("[OBSTACULOS_ESPACIALES_P]  Vida del obstaculo : %f"), Life));

    GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, FString::Printf(TEXT("[OBSTACULOS_ESPACIALES_P]  Velocidad del obstaculo : %f"), Velocidad));

    GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, FString::Printf(TEXT("[OBSTACULOS_ESPACIALES_P]  Danio del obstaculo : %f"), Danio_Obst));


    // Verifica si la nave debe ser destruida
    if (Life <= 0)
    {
        Componente_Destruccion();
    }
    else
    {
        // Llama a la función de movimiento pasando DeltaTime directamente
        Movimiento_Ostaculos(DeltaTime);
    }

}

void AGENERAL_OBSTACLE::NotifyActorBeginOverlap(AActor* OtherActor)
{
    AFACADE_ESPawn* Nave_Protagonista = Cast<AFACADE_ESPawn>(OtherActor);

    if (Nave_Protagonista)
    {
        //Nave_Protagonista->Damage(Danio_Obst);

        Componente_Destruccion();
    }
}

void AGENERAL_OBSTACLE::Recibir_Danio(float Danio_O)
{
    Life -= Danio_O;

}

void AGENERAL_OBSTACLE::Movimiento_Ostaculos(float DeltaTime)
{
    
    FVector PosicionActual = GetActorLocation();
    float Desplazamiento = Velocidad * DeltaTime;
    FVector NuevaPosicion = PosicionActual + FVector(-Desplazamiento, 0.f, 0.f);

    SetActorLocation(NuevaPosicion);

    // Restablecer la posición del obstáculo cuando cruza un límite específico, si es necesario
    if (NuevaPosicion.X < -1000.f)  // Asumiendo que 1000 es el límite superior
    {
        Componente_Destruccion();
    }
}

void AGENERAL_OBSTACLE::Componente_Destruccion()
{
    UGameplayStatics::PlaySoundAtLocation(GetWorld(), SonidoColision, GetActorLocation());

    // Reproducir la partícula de la colisión
    UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ParticulaColision, GetActorLocation());

    // Destruir el obstáculo
    this->Destroy();
}

