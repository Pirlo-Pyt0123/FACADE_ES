// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GENERAL_OBSTACLE.h"
#include "P_FM_OBSTRUCTIONS.generated.h"
UCLASS()
class FACADE_ES_API AP_FM_OBSTRUCTIONS : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AP_FM_OBSTRUCTIONS();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:
	AGENERAL_OBSTACLE* Get_Nave(FString Identificador);


public:

	virtual AGENERAL_OBSTACLE* Crear_Obstaculos(FString Obstaculo_Identificador) PURE_VIRTUAL(AP_FM_OBSTRUCTIONS::Crear_Obstaculos, return nullptr;);



};
