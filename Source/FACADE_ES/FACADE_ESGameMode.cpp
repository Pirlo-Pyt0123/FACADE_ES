// Copyright Epic Games, Inc. All Rights Reserved.

#include "FACADE_ESGameMode.h"
#include "FACADE_ESPawn.h"
#include "FA_DIFICULT.h"
#include "MenuPlayerController.h"
#include "MENU_HUD.h"
#include "Kismet/GameplayStatics.h"


AFACADE_ESGameMode::AFACADE_ESGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AFACADE_ESPawn::StaticClass();

	PlayerControllerClass = AMenuPlayerController::StaticClass();

	// use our custom HUD class
	HUDClass = AMENU_HUD::StaticClass();
}

void AFACADE_ESGameMode::BeginPlay()
{
	Super::BeginPlay();

	


}

void AFACADE_ESGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

