// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "P_FM_FABRICA_GEN.h"
#include "P_FM_FABRICA_NAVES.generated.h"

/**
 * 
 */
UCLASS()
class FACADE_ES_API AP_FM_FABRICA_NAVES : public AP_FM_FABRICA_GEN
{
	GENERATED_BODY()

public:

	virtual ANaveEnemiga* Crear_Nave(FString Nave_Identificador) override;
	
};
