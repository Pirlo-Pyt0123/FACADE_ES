// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MOVE_EASY.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FACADE_ES_API UMOVE_EASY : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMOVE_EASY();

	UPROPERTY(EditAnywhere)
	float MoveRadio;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
