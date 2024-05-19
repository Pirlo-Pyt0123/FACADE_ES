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

	UPROPERTY(VisibleAnywhere, Category = "Facade Enemy")
	TArray<class ANaveEnemiga*> Enemigos;

	UPROPERTY(VisibleAnywhere, Category = "Facade Enemy")
	TArray<FString> Events;

	UPROPERTY(VisibleAnywhere, Category = "Facade Ship")
	class ANaveEnemiga_Basic* Basicas;

	UPROPERTY(VisibleAnywhere, Category = "Facade Ship")
	class ANaveEnemiga_Nodriza* Master;




public:

	void RealizarEvents(TArray<class ANaveEnemiga*> _Enemigos, TArray<FString> _Events);

	void GestionNaves();
};
