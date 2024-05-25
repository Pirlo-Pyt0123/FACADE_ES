// Fill out your copyright notice in the Description page of Project Settings.


#include "P_FM_FABRICA_NAVES.h"
#include "NaveEnemiga.h"
#include "NaveEnemiga_Basic.h"
#include "NavePachecol.h"
#include "NavesDelSabio.h"
#include "NavesEjemplares.h"
#include "NavesExtradimensionales.h"



ANaveEnemiga* AP_FM_FABRICA_NAVES::Crear_Nave(FString Nave_Identificador)
{
	FVector SpawnLocation = FVector(1770.0f, FMath::RandRange(-1780, 1780), 210.0f);
	FRotator Rotation = FRotator(0.f, 0.f, 0.f);

	if (Nave_Identificador.Equals("Nave_Enemiga_01"))
		return GetWorld()->SpawnActor<ANaveEnemiga_Basic>(ANaveEnemiga_Basic::StaticClass(), SpawnLocation, Rotation);

	if (Nave_Identificador.Equals("Nave_Enemiga_02"))
		return GetWorld()->SpawnActor<ANavePachecol>(ANavePachecol::StaticClass(), SpawnLocation, Rotation);

	if (Nave_Identificador.Equals("Nave_Enemiga_03"))
		return GetWorld()->SpawnActor<ANavesDelSabio>(ANavesDelSabio::StaticClass(), SpawnLocation, Rotation);

	if (Nave_Identificador.Equals("Nave_Enemiga_04"))
		return GetWorld()->SpawnActor<ANavesEjemplares>(ANavesEjemplares::StaticClass(), SpawnLocation, Rotation);

	if (Nave_Identificador.Equals("Nave_Enemiga_05"))
		return GetWorld()->SpawnActor<ANavesExtradimensionales>(ANavesExtradimensionales::StaticClass(), SpawnLocation, Rotation);

	return nullptr;
}
