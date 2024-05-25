// Fill out your copyright notice in the Description page of Project Settings.


#include "P_FM_FABRICA_GEN.h"

// Sets default values
AP_FM_FABRICA_GEN::AP_FM_FABRICA_GEN()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AP_FM_FABRICA_GEN::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AP_FM_FABRICA_GEN::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ANaveEnemiga* AP_FM_FABRICA_GEN::Get_Nave(FString Identificador)
{
	ANaveEnemiga* Nave = Crear_Nave(Identificador);

	return Nave;
}

