// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ENEMY_FACADE.generated.h"
UCLASS()
class FACADE_ES_API AENEMY_FACADE : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AENEMY_FACADE();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



public:

	UPROPERTY()
	class AFACADE_LEVELC* NivelActual;

	UPROPERTY()
	TArray<class AFACADE_UNITY*> Nivel;


	UPROPERTY()
	TArray<FString> Ordenado;

	void NivelesGen(TArray<class AFACADE_LEVELC*> _Nivel, TArray<FString> _Orden);

	void NivelFacil();
	void NivelMedio();
	void NivelDificil();




	
};
