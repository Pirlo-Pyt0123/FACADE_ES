// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NavesEjemplares.generated.h"

/**
 * 
 */
UCLASS()
class FACADE_ES_API ANavesEjemplares : public ANaveEnemiga
{
	GENERATED_BODY()

public:

	ANavesEjemplares();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	virtual void Componente_Destruccion() override;

	virtual void Recibir_Danio(float Danio) override;
	
};
