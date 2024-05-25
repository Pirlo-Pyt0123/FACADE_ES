// Fill out your copyright notice in the Description page of Project Settings.


#include "SATELITE_ABANDONADO.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundBase.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "FACADE_ESPawn.h"


ASATELITE_ABANDONADO::ASATELITE_ABANDONADO()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO'"));
	if (MeshAsset.Succeeded())
	{
		Mesh_Estructura_Espacial->SetStaticMesh(MeshAsset.Object);
	}

	Identificador_Obstaculos = "SATELITE_MUERTO";
}

void ASATELITE_ABANDONADO::BeginPlay()
{
	Super::BeginPlay();
}

void ASATELITE_ABANDONADO::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASATELITE_ABANDONADO::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	AFACADE_ESPawn* MyPawn = Cast<AFACADE_ESPawn>(OtherActor);
	if (MyPawn)
	{
		//MyPawn->Recibir_Danio(40.0f);
		Componente_Destruccion();
	}
}


void ASATELITE_ABANDONADO::Componente_Destruccion()
{
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), SonidoColision, GetActorLocation());

	// Reproducir la partícula de la colisión
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ParticulaColision, GetActorLocation());

	// Destruir el satélite
	Destroy();
}
