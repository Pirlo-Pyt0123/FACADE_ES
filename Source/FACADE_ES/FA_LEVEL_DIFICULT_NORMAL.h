// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FA_LEVEL_DIFICULT.h"
#include "NaveEnemiga.h"
#include "GENERAL_OBSTACLE.h"
#include "P_FM_FABRICA_NAVES.h"
#include "P_FM_OBSTACLES.h"
#include "FA_LEVEL_DIFICULT_NORMAL.generated.h"

/**
 * 
 */
UCLASS()
class FACADE_ES_API AFA_LEVEL_DIFICULT_NORMAL : public AFA_LEVEL_DIFICULT
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	AFA_LEVEL_DIFICULT_NORMAL();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Métodos virtuales puros para configurar las naves

public:


	// Variables de configuración actual
	float CurrentVidaNaves;
	float CurrentVelocidadNaves;
	float CurrentDanioDisparoNaves;
	float CurrentVidaObstaculos;
	float CurrentDanioObstaculos;
	float CurrentVelocidadObstaculos;

	class AP_FM_OBSTACLES* FABRICA_OBSTACULOS_01;

	class AP_FM_FABRICA_NAVES* FABRICA_NAVES_A;


	float TiempoDesdeUltimaNave;
	float TiempoDesdeUltimoObstaculo;
	float IntervaloNave;
	float IntervaloObstaculo;



	FString SeleccionarTipoDeNave() const;
	FString SeleccionarTipoDeObstaculo() const;

	// Añade los tipos de retorno a las funciones.
	ANaveEnemiga* GenerarYConfigurarNave();
	AGENERAL_OBSTACLE* GenerarYConfigurarObstaculo();


	void Configurar_Vida_Naves(ANaveEnemiga* Nave, float Vida);
	void Configurar_Velocidad_Naves(ANaveEnemiga* Nave, float Velocidad);
	void Configurar_Danio_Disparo_Naves(ANaveEnemiga* Nave, float Danio_Disparo);


	void Configurar_Vida_Obstaculos(AGENERAL_OBSTACLE* Obstaculo, float Vida);
	void Configurar_Danio_Obstaculos(AGENERAL_OBSTACLE* Obstaculo, float Danio);
	void Configurar_Velocidad_Obstaculos(AGENERAL_OBSTACLE* Obstaculo, float Velocidad);



	void ConfigurarTodo(float VidaNaves, float VelocidadNaves, float DanioDisparoNaves, float VidaObstaculos, float DanioObstaculos, float VelocidadObstaculos);
	
};
