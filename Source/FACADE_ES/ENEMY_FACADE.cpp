// Fill out your copyright notice in the Description page of Project Settings.


#include "ENEMY_FACADE.h"
#include "FACADE_LEVELC.h"
#include "FACADE_UNITY.h"


// Sets default values
AENEMY_FACADE::AENEMY_FACADE()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	Nivel = TArray<AFACADE_UNITY*>();
	Ordenado = TArray<FString>();

   
}

// Called when the game starts or when spawned
void AENEMY_FACADE::BeginPlay()
{
	Super::BeginPlay();

	NivelActual = GetWorld()->SpawnActor<AFACADE_LEVELC>(AFACADE_LEVELC::StaticClass());

	Nivel.Add(NivelActual);
	
	
}

// Called every frame
void AENEMY_FACADE::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}



void AENEMY_FACADE::NivelesGen(TArray<class AFACADE_LEVELC*> _Nivel, TArray<FString> _Orden)
{
	for (AFACADE_UNITY* TipoCapsulasNivel : _Nivel)
	{
		TipoCapsulasNivel->RecibirOrden(_Orden);
	}
}

void AENEMY_FACADE::NivelFacil()
{
	Ordenado.Empty();
	Ordenado.Add("Vida");
	Ordenado.Add("Potencia");
	TArray<AFACADE_LEVELC*> NivelActualizado;
	for (AFACADE_UNITY* Unity : Nivel)
	{
		AFACADE_LEVELC* LevelC = Cast<AFACADE_LEVELC>(Unity);
		if (LevelC)
		{
			NivelActualizado.Add(LevelC);
		}
	}
	NivelesGen(NivelActualizado, Ordenado);
}

void AENEMY_FACADE::NivelMedio()
{
	Ordenado.Empty();
	Ordenado.Add(TEXT("Vida"));
	Ordenado.Add(TEXT("Potencia"));
	TArray<AFACADE_LEVELC*> NivelActualizado;
	for (AFACADE_UNITY* Unity : Nivel)
	{
		AFACADE_LEVELC* LevelC = Cast<AFACADE_LEVELC>(Unity);
		if (LevelC)
		{
			NivelActualizado.Add(LevelC);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Added a valid AFACADE_LEVELC to NivelActualizado"));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Casting to AFACADE_LEVELC failed"));
		}
	}
	if (NivelActualizado.Num() > 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("NivelActualizado is not empty"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("NivelActualizado is empty"));
	}
	NivelesGen(NivelActualizado, Ordenado);
}

void AENEMY_FACADE::NivelDificil()
{
	Ordenado.Empty();
	Ordenado.Add("Vida");
	Ordenado.Add("Vida");
	Ordenado.Add("Vida");
	Ordenado.Add("potencia");
	TArray<AFACADE_LEVELC*> NivelActualizado;
	for (AFACADE_UNITY* Unity : Nivel)
	{
		AFACADE_LEVELC* LevelC = Cast<AFACADE_LEVELC>(Unity);
		if (LevelC)
		{
			NivelActualizado.Add(LevelC);
		}
	}
	NivelesGen(NivelActualizado, Ordenado);
}
