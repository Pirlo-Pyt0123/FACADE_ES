// Copyright Epic Games, Inc. All Rights Reserved.

#include "FACADE_ESGameMode.h"
#include "FACADE_ESPawn.h"
#include "ENEMY_FACADE.h"

AFACADE_ESGameMode::AFACADE_ESGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AFACADE_ESPawn::StaticClass();
}

void AFACADE_ESGameMode::BeginPlay()
{
	Super::BeginPlay();

	Facade = GetWorld()->SpawnActor<AENEMY_FACADE>(AENEMY_FACADE::StaticClass());

	Facade->GestionNaves();

}

void AFACADE_ESGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

