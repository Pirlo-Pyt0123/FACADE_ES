// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NavesDelSabio.generated.h"

/**
 * 
 */
UCLASS()
class FACADE_ES_API ANavesDelSabio : public ANaveEnemiga
{
	GENERATED_BODY()


public:

	ANavesDelSabio();

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
