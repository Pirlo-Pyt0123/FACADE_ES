// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "P_FM_OBSTRUCTIONS.h"
#include "P_FM_OBSTACLES.generated.h"



UCLASS()
class FACADE_ES_API AP_FM_OBSTACLES : public AP_FM_OBSTRUCTIONS
{
	GENERATED_BODY()

public:

	virtual AGENERAL_OBSTACLE* Crear_Obstaculos(FString Obstaculo_Identificador) override;


	

	
};
