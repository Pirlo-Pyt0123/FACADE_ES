// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"

// Sets default values
ANaveEnemiga::ANaveEnemiga()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANaveEnemiga::MoveHorizontal()
{
}

void ANaveEnemiga::MoveVertical()
{
}

void ANaveEnemiga::Destruirse()
{
}

void ANaveEnemiga::EventosOK(const TArray<FString>& _Events)
{
}

