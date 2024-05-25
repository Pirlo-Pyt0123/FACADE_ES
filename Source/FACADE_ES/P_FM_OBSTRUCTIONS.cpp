// Fill out your copyright notice in the Description page of Project Settings.


#include "P_FM_OBSTRUCTIONS.h"

// Sets default values
AP_FM_OBSTRUCTIONS::AP_FM_OBSTRUCTIONS()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AP_FM_OBSTRUCTIONS::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AP_FM_OBSTRUCTIONS::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AGENERAL_OBSTACLE* AP_FM_OBSTRUCTIONS::Get_Nave(FString Identificador)
{
	AGENERAL_OBSTACLE* Obstaculo = Crear_Obstaculos(Identificador);

	return Obstaculo;
}

