// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.h"
#include "GENERAL_OBSTACLE.h"
#include "FA_LEVEL_DIFICULT.generated.h"

UCLASS()
class FACADE_ES_API AFA_LEVEL_DIFICULT : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFA_LEVEL_DIFICULT();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



public:

	virtual void Configurar_Vida_Naves(ANaveEnemiga* Nave, float Vida) PURE_VIRTUAL(AFA_LEVEL_DIFICULT::Configurar_Vida_Naves, );
	virtual void Configurar_Velocidad_Naves(ANaveEnemiga* Nave, float Velocidad) PURE_VIRTUAL(AFA_LEVEL_DIFICULT::Configurar_Velocidad_Naves, );
	virtual void Configurar_Danio_Disparo_Naves(ANaveEnemiga* Nave, float Danio_Disparo) PURE_VIRTUAL(AFA_LEVEL_DIFICULT::Configurar_Danio_Disparo_Naves, );

	// Métodos virtuales puros para configurar los obstáculos
	virtual void Configurar_Vida_Obstaculos(AGENERAL_OBSTACLE* Obstaculo, float Vida) PURE_VIRTUAL(AFA_LEVEL_DIFICULT::Configurar_Vida_Obstaculos, );
	virtual void Configurar_Danio_Obstaculos(AGENERAL_OBSTACLE* Obstaculo, float Danio) PURE_VIRTUAL(AFA_LEVEL_DIFICULT::Configurar_Danio_Obstaculos, );
	virtual void Configurar_Velocidad_Obstaculos(AGENERAL_OBSTACLE* Obstaculo, float Velocidad) PURE_VIRTUAL(AFA_LEVEL_DIFICULT::Configurar_Velocidad_Obstaculos, );

};
