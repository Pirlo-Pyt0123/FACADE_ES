// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GENERAL_OBSTACLE.h"
#include "COMETA_LINEAL.generated.h"

/**
 * 
 */
UCLASS()
class FACADE_ES_API ACOMETA_LINEAL : public AGENERAL_OBSTACLE
{
	GENERATED_BODY()

public:
	ACOMETA_LINEAL();

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;

public:


	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	virtual void Componente_Destruccion() override;

	
	
};
