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
    if (Facade)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Facade spawn successful"));
        Facade->NivelFacil();
        Facade->NivelMedio();
        //Facade->NivelDificil();
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Facade spawn failed"));
    }

}

void AFACADE_ESGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

