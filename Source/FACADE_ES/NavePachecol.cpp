// Fill out your copyright notice in the Description page of Project Settings.


#include "NavePachecol.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/ShapeComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "Components/BoxComponent.h"
#include "FACADE_ESPawn.h"

ANavePachecol::ANavePachecol()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Mehes/NavesEnemigas/Spaceships_6.Spaceships_6'"));
	if (MeshAsset.Succeeded())
	{
		malla->SetStaticMesh(MeshAsset.Object);

		// Modificar la escala del componente de malla
		FVector NewScale(1.5f, 1.5f, 1.5f); // Escala modificada
		malla->SetWorldScale3D(NewScale);

		FRotator NewRotation(0.f, 180.f, 0.f);
	}

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));

	if (ParticleAsset.Succeeded())
	{
		Explosion_Nave = Cast<UParticleSystem>(ParticleAsset.Object);
	}

	static ConstructorHelpers::FObjectFinder<USoundBase> AssetExplosionSound(TEXT("SoundWave'/Game/StarterContent/Audio/Explosion01.Explosion01'"));
	if (AssetExplosionSound.Succeeded())
	{
		Sonido_Nave = Cast<USoundBase>(AssetExplosionSound.Object);
	}


	Colision_Nave->SetBoxExtent(FVector(80.f, 80.f, 80.f));


	Velocity = 40.0f;
	Tiempo_Disparo = 0;
	Danio_Recibido = 40.f;
	Tiempo_Disparo_Generar = 4.f;
	Distancia_Disparo = FVector(90.f, 0.f, 0.f);


	Identificador_Nave = "Nave_Enemiga_02";
}

void ANavePachecol::BeginPlay()
{
	Super::BeginPlay();
}

void ANavePachecol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANavePachecol::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	AFACADE_ESPawn* Jugador = Cast<AFACADE_ESPawn>(OtherActor);

	if (Jugador)
	{
		Jugador->Damage(Danio_Disparo);
		Recibir_Danio(50.f);
	}

}

void ANavePachecol::Componente_Destruccion()
{
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Explosion_Nave, GetActorLocation());
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), Sonido_Nave, GetActorLocation());
	Destroy();
}

void ANavePachecol::Recibir_Danio(float Danio)
{
	Life -= Danio;
}
