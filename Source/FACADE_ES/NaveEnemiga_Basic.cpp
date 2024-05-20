// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga_Basic.h"
#include "Engine/World.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
ANaveEnemiga_Basic::ANaveEnemiga_Basic()
{
	PrimaryActorTick.bCanEverTick = true;

	//crea la malla 
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/TwinStick/ALIENS/e1571c08d13f_a_octopus_squid_alp.e1571c08d13f_a_octopus_squid_alp'"));
	if (ShipMesh.Succeeded())
	{
		malla->SetStaticMesh(ShipMesh.Object);
	}

	//MoveComponent = CreateDefaultSubobject<UMOVE_EASY>(TEXT("MoveComponent"));

}

void ANaveEnemiga_Basic::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemiga_Basic::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void ANaveEnemiga_Basic::Disparar()
{

}

void ANaveEnemiga_Basic::Morir()
{

}


