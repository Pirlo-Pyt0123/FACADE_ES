// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga_Basic.h"

ANaveEnemiga_Basic::ANaveEnemiga_Basic()
{

}

void ANaveEnemiga_Basic::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemiga_Basic::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANaveEnemiga_Basic::CreateEnemy()
{
	// Create the enemy  
	const FVector SpawnLocation = FVector(0.0f, 0.0f, 214.0f);
	const FRotator SpawnRotation = FRotator(0.0f, 0.0f, 214.0f);

	GetWorld()->SpawnActor<ANaveEnemiga_Basic>(ANaveEnemiga_Basic::StaticClass(), SpawnLocation, SpawnRotation);
}
void ANaveEnemiga_Basic::MovimientoEstrategico()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Movimiento Estrategico Basic"));

}

void ANaveEnemiga_Basic::DisparoEstrategico()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Disparo Estrategico Basic"));
}

void ANaveEnemiga_Basic::Habilidad()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Habilidad Basic"));
}


