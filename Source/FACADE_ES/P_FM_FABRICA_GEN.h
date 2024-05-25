// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.h"
#include "P_FM_FABRICA_GEN.generated.h"
UCLASS()
class FACADE_ES_API AP_FM_FABRICA_GEN : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AP_FM_FABRICA_GEN();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



public:


	ANaveEnemiga* Get_Nave(FString Identificador);


protected:

	virtual ANaveEnemiga* Crear_Nave(FString Nave_Identificador) PURE_VIRTUAL(AP_FM_FABRICA_GENERAL_P::Crear_Nave, return nullptr;);

};
