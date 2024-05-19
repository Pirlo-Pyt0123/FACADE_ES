// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga_Nodriza.h"

ANaveEnemiga_Nodriza::ANaveEnemiga_Nodriza()
{
}

void ANaveEnemiga_Nodriza::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemiga_Nodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANaveEnemiga_Nodriza::CreateEnemy()
{
	// Create the enemy  
	const FVector SpawnLocation = FVector(0.0f, 0.0f, 214.0f);
	const FRotator SpawnRotation = FRotator(0.0f, 0.0f, 214.0f);

	GetWorld()->SpawnActor<ANaveEnemiga_Nodriza>(ANaveEnemiga_Nodriza::StaticClass(), SpawnLocation, SpawnRotation);
}

void ANaveEnemiga_Nodriza::MovimientoEstrategico()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Movimiento Estrategico Nodriza"));
}

void ANaveEnemiga_Nodriza::DisparoEstrategico()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Disparo Estrategico Nodriza"));

}

void ANaveEnemiga_Nodriza::Habilidad()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Habilidad Nodriza"));

}
