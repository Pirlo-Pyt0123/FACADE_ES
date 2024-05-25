// Fill out your copyright notice in the Description page of Project Settings.


#include "COMETA_LINEAL.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundBase.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "FACADE_ESPawn.h"

ACOMETA_LINEAL::ACOMETA_LINEAL()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe_90.Shape_Pipe_90'"));
	if (MeshAsset.Succeeded())
	{
		Mesh_Estructura_Espacial->SetStaticMesh(MeshAsset.Object);
	}

	Identificador_Obstaculos = "CometaLINE";
}

void ACOMETA_LINEAL::BeginPlay()
{
	Super::BeginPlay();
}

void ACOMETA_LINEAL::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACOMETA_LINEAL::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
}

void ACOMETA_LINEAL::Componente_Destruccion()
{

}
