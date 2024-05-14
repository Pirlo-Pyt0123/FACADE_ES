// Fill out your copyright notice in the Description page of Project Settings.


#include "ENEMY_FACADE.h"
#include "NaveEnemiga.h"
#include "NaveEnemiga_Basic.h"
#include "NaveEnemiga_Nodriza.h"

// Sets default values
AENEMY_FACADE::AENEMY_FACADE()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AENEMY_FACADE::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AENEMY_FACADE::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AENEMY_FACADE::CreateEnemy()
{

}

void AENEMY_FACADE::MoveEnemies()
{

}

void AENEMY_FACADE::CheckCollisions()
{

}

void AENEMY_FACADE::RemoveDeadEnemies()
{

}

void AENEMY_FACADE::RealizarEvents(TArray<class ANaveEnemiga*> _Enemigos, TArray<FString> _Events)
{

}

