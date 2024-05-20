// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FACADE_UNITY.h"
#include "FACADE_LEVELC.generated.h"

/**
 * 
 */
UCLASS()
class FACADE_ES_API AFACADE_LEVELC : public AFACADE_UNITY
{
	GENERATED_BODY()

public:

	AFACADE_LEVELC();

protected:

	virtual void BeginPlay() override;


public:
	 
	virtual void Tick(float DeltaTime) override;





	
};
