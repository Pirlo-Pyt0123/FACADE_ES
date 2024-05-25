// Fill out your copyright notice in the Description page of Project Settings.


#include "CAJAS_ABANDONADAS.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundBase.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "FACADE_ESPawn.h"

ACAJAS_ABANDONADAS::ACAJAS_ABANDONADAS()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Mehes/CajaArmas/ArmyCrate.ArmyCrate'"));
	if (MeshAsset.Succeeded())
	{
		Mesh_Estructura_Espacial->SetStaticMesh(MeshAsset.Object);
	}

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));

	if (ParticleAsset.Succeeded())
	{
		ParticulaColision = Cast<UParticleSystem>(ParticleAsset.Object);
	}

	Identificador_Obstaculos = "CAJAS";
}

void ACAJAS_ABANDONADAS::BeginPlay()
{
	Super::BeginPlay();

}

void ACAJAS_ABANDONADAS::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACAJAS_ABANDONADAS::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	AFACADE_ESPawn* MyPawn = Cast<AFACADE_ESPawn>(OtherActor);
	if (MyPawn)
	{
		//MyPawn->Recibir_Danio(40.0f);
		Componente_Destruccion();
	}
}

void ACAJAS_ABANDONADAS::Componente_Destruccion()
{
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), SonidoColision, GetActorLocation());
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ParticulaColision, GetActorLocation());
	Destroy();
}
