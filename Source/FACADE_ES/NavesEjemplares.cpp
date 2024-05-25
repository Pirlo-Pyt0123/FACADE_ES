// Fill out your copyright notice in the Description page of Project Settings.


#include "NavesEjemplares.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/ShapeComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "Components/BoxComponent.h"
#include "FACADE_ESPawn.h"

ANavesEjemplares::ANavesEjemplares()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/StarterContent/Mehes/NavesEnemigas/Spaceships_9.Spaceships_9'"));
	if (Mesh.Succeeded())
	{
		malla->SetStaticMesh(Mesh.Object);
		FVector NewScale(1.5f, 1.5f, 1.5f);
		malla->SetWorldScale3D(NewScale);
	}


	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));

	if (ParticleAsset.Succeeded())
	{
		Explosion_Nave = Cast<UParticleSystem>(ParticleAsset.Object);
	}

	//|*| COMPONENTE DE SONIDO DE LA NAVE |*|
	static ConstructorHelpers::FObjectFinder<USoundBase> AssetExplosionSound(TEXT("SoundWave'/Game/StarterContent/Audio/Explosion01.Explosion01'"));
	if (AssetExplosionSound.Succeeded())
	{
		Sonido_Nave = Cast<USoundBase>(AssetExplosionSound.Object);
	}
	Velocity = 40.0f;
	Tiempo_Disparo = 0;
	Danio_Recibido = 40.f;
	Tiempo_Disparo_Generar = 4.f;
	Distancia_Disparo = FVector(90.f, 0.f, 0.f);

	//Asignando un nombre 
	Identificador_Nave = "Nave_Enemiga_04";
}

void ANavesEjemplares::BeginPlay()
{
	Super::BeginPlay();
}

void ANavesEjemplares::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Yellow, FString::Printf(TEXT("[Nave_Enemiga_04]  Vida de la nave: %f"), Life));

	if (Life <= 0)
	{
		Componente_Destruccion();

	}
}

void ANavesEjemplares::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	AFACADE_ESPawn* Jugador = Cast<AFACADE_ESPawn>(OtherActor);

	if (Jugador)
	{

		Jugador->Damage(Danio_Disparo);
		Recibir_Danio(50.f);

	}


}

void ANavesEjemplares::Componente_Destruccion()
{
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Explosion_Nave, GetActorLocation());

	UGameplayStatics::PlaySoundAtLocation(GetWorld(), Sonido_Nave, GetActorLocation());

	Destroy();
}

void ANavesEjemplares::Recibir_Danio(float Danio)
{
	Life -= Danio;
}
