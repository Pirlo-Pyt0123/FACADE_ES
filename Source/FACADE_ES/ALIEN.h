// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ALIEN.generated.h"

UCLASS()
class FACADE_ES_API AALIEN : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AALIEN();

	UPROPERTY(VisibleAnywhere, Category = "Alien PE")

	class UStaticMeshComponent* fea;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
