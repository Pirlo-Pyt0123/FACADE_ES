// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FACADE_ESGameMode.generated.h"

UCLASS(MinimalAPI)
class AFACADE_ESGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AFACADE_ESGameMode();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;


protected:
	UPROPERTY(VisibleAnywhere, Category = "Facade Enemy")
	class AENEMY_FACADE* Facade;

};



