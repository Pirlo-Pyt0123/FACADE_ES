// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GENERAL_OBSTACLE.h"
#include "SATELITE_ABANDONADO.generated.h"


UCLASS()
class FACADE_ES_API ASATELITE_ABANDONADO : public AGENERAL_OBSTACLE
{
	GENERATED_BODY()

public:
	ASATELITE_ABANDONADO();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
public:

	virtual void Tick(float DeltaTime) override;



public:

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;


	virtual void Componente_Destruccion() override;
	
};
