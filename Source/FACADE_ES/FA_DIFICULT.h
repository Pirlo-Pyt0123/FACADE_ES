// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FA_DIFICULT.generated.h"

UCLASS()
class FACADE_ES_API AFA_DIFICULT : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFA_DIFICULT();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



public:

	class AFA_LEVEL_DIFICULT_EASY* NivelFacil;

	class AFA_LEVEL_DIFICULT_NORMAL* NivelNormal;

	class AFA_LEVEL_DIFICULT_HARD* NivelDificil;






    void ActivateFacilMode();
    void ActivateNormalMode();
    void ActivateDificilMode();

    // Parámetros de dificultad fácil
    float VidaFacil;
    float VelocidadFacil;
    float DanioDisparoFacil;
    float VidaObstaculosFacil;
    float DanioObstaculosFacil;
    float VelocidadObstaculosFacil;

    // Parámetros de dificultad normal
    float VidaNormal;
    float VelocidadNormal;
    float DanioDisparoNormal;
    float VidaObstaculosNormal;
    float DanioObstaculosNormal;
    float VelocidadObstaculosNormal;

    // Parámetros de dificultad difícil
    float VidaDificil;
    float VelocidadDificil;
    float DanioDisparoDificil;
    float VidaObstaculosDificil;
    float DanioObstaculosDificil;
    float VelocidadObstaculosDificil;



	



};
