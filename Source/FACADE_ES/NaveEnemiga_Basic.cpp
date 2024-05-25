// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga_Basic.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/ShapeComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "Sound/SoundBase.h"
#include "FACADE_ESPawn.h"
ANaveEnemiga_Basic::ANaveEnemiga_Basic()
{
	PrimaryActorTick.bCanEverTick = true;

	//crea la malla 
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/TwinStick/ALIENS/e1571c08d13f_a_octopus_squid_alp.e1571c08d13f_a_octopus_squid_alp'"));
	if (ShipMesh.Succeeded())
	{
		malla->SetStaticMesh(ShipMesh.Object);

	}

	//particula
	static ConstructorHelpers::FObjectFinder<UParticleSystem> Particle(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
	if (Particle.Succeeded())
	{
		Explosion_Nave = Particle.Object;
	}


	//sonido
	static ConstructorHelpers::FObjectFinder<USoundBase> Sound(TEXT("SoundWave'/Game/StarterContent/Audio/Explosion01.Explosion01'"));
	if (Sound.Succeeded())
	{
		Sonido_Nave = Sound.Object;
	}



	Colision_Nave->SetBoxExtent(FVector(80.f, 80.f, 80.f));

	//|*| INICIALIZANDO LOS ATRIBUTOS DE LA NAVE |*|

	Velocity = 40.0f;
	Tiempo_Disparo = 0;
	Danio_Recibido = 40.f;
	Tiempo_Disparo_Generar = 4.f;

	Distancia_Disparo = FVector(90.f, 0.f, 0.f);

	//Asignando un nombre 
	Identificador_Nave = "Nave_Enemiga_01";
}

void ANaveEnemiga_Basic::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemiga_Basic::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Yellow, FString::Printf(TEXT("[Nave_Enemiga_01]  Vida de la nave: %f"), Life));

	if (Life <= 0)
	{
		Componente_Destruccion();
	}
}

void ANaveEnemiga_Basic::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	AFACADE_ESPawn* Jugador = Cast<AFACADE_ESPawn>(OtherActor);

	if (Jugador)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("[NAVE_ENEMIGA_01]   Colision con el jugador"));

		Jugador->Damage(50.f);

		Recibir_Danio(50.f);
	}
	
}

void ANaveEnemiga_Basic::Componente_Destruccion()
{
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), Sonido_Nave, GetActorLocation());

	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Explosion_Nave, GetActorLocation());

	this->Destroy();

}

void ANaveEnemiga_Basic::Recibir_Danio(float Danio)
{
	Life -= Danio;

}

