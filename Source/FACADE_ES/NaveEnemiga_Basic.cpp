// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga_Basic.h"
#include "Engine/World.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
ANaveEnemiga_Basic::ANaveEnemiga_Basic()
{
	PrimaryActorTick.bCanEverTick = true;

	//crea la malla 
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO'"));
	if (ShipMesh.Succeeded())
	{
		malla->SetStaticMesh(ShipMesh.Object);
	}

}

void ANaveEnemiga_Basic::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemiga_Basic::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


