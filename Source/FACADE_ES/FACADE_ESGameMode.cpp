// Copyright Epic Games, Inc. All Rights Reserved.

#include "FACADE_ESGameMode.h"
#include "FACADE_ESPawn.h"

AFACADE_ESGameMode::AFACADE_ESGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AFACADE_ESPawn::StaticClass();
}

