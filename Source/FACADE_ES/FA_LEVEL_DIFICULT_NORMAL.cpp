// Fill out your copyright notice in the Description page of Project Settings.


#include "FA_LEVEL_DIFICULT_NORMAL.h"
#include "P_FM_FABRICA_NAVES.h"
#include "P_FM_OBSTACLES.h"
#include "NaveEnemiga.h"
#include "GENERAL_OBSTACLE.h"

AFA_LEVEL_DIFICULT_NORMAL::AFA_LEVEL_DIFICULT_NORMAL()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AFA_LEVEL_DIFICULT_NORMAL::BeginPlay()
{
	Super::BeginPlay();

	FABRICA_NAVES_A = GetWorld()->SpawnActor<AP_FM_FABRICA_NAVES>(AP_FM_FABRICA_NAVES::StaticClass());
	FABRICA_OBSTACULOS_01 = GetWorld()->SpawnActor<AP_FM_OBSTACLES>(AP_FM_OBSTACLES::StaticClass());
	TiempoDesdeUltimaNave = 0.0f;
	IntervaloNave = 3.0f;
	TiempoDesdeUltimoObstaculo = 0.0f;
	IntervaloObstaculo = 8.0f;
}

void AFA_LEVEL_DIFICULT_NORMAL::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoDesdeUltimaNave += DeltaTime;
	if (TiempoDesdeUltimaNave >= IntervaloNave) {
		TiempoDesdeUltimaNave = 0.0f;
		GenerarYConfigurarNave();
	}

	TiempoDesdeUltimoObstaculo += DeltaTime;
	if (TiempoDesdeUltimoObstaculo >= IntervaloObstaculo) {
		TiempoDesdeUltimoObstaculo = 0.0f;
		GenerarYConfigurarObstaculo();
	}
}

FString AFA_LEVEL_DIFICULT_NORMAL::SeleccionarTipoDeNave() const
{
	int Tipo = FMath::RandRange(1, 3); // Selección aleatoria de tipo de nave
	switch (Tipo) {
	case 1: return TEXT("Nave_Enemiga_01");
	case 2: return TEXT("Nave_Enemiga_02");
	case 3: return TEXT("Nave_Enemiga_03");
	default: return TEXT("Nave_Enemiga_01");
	}
}

FString AFA_LEVEL_DIFICULT_NORMAL::SeleccionarTipoDeObstaculo() const
{
	int Tipo = FMath::RandRange(1, 3); // Selección aleatoria de tipo de obstáculo
	switch (Tipo) {
	case 1: return TEXT("CometaLINE");
	case 2: return TEXT("SALTELITE_MUERTO");
	case 3: return TEXT("CAJAS");
	default: return TEXT("CAJAS");
	}
	
}

ANaveEnemiga* AFA_LEVEL_DIFICULT_NORMAL::GenerarYConfigurarNave()
{
	ANaveEnemiga* NuevaNave = FABRICA_NAVES_A->Crear_Nave(SeleccionarTipoDeNave());
	if (NuevaNave) {
		Configurar_Vida_Naves(NuevaNave, CurrentVidaNaves);
		Configurar_Velocidad_Naves(NuevaNave, CurrentVelocidadNaves);
		Configurar_Danio_Disparo_Naves(NuevaNave, CurrentDanioDisparoNaves);
	}
	return NuevaNave;
}

AGENERAL_OBSTACLE* AFA_LEVEL_DIFICULT_NORMAL::GenerarYConfigurarObstaculo()
{
	AGENERAL_OBSTACLE* NuevoObstaculo = FABRICA_OBSTACULOS_01->Crear_Obstaculos(SeleccionarTipoDeObstaculo());
	if (NuevoObstaculo) {
		Configurar_Vida_Obstaculos(NuevoObstaculo, CurrentVidaObstaculos);
		Configurar_Danio_Obstaculos(NuevoObstaculo, CurrentDanioObstaculos);
		Configurar_Velocidad_Obstaculos(NuevoObstaculo, CurrentVelocidadObstaculos);
	}
	return NuevoObstaculo;
}

void AFA_LEVEL_DIFICULT_NORMAL::Configurar_Vida_Naves(ANaveEnemiga* Nave, float Vida)
{
	if (Nave) {

		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Red, TEXT("Se paso la vida de la nave "));
		Nave->Set_Vida(Vida);
	}
}

void AFA_LEVEL_DIFICULT_NORMAL::Configurar_Velocidad_Naves(ANaveEnemiga* Nave, float Velocidad)
{
	if (Nave) {
		Nave->Set_Velocidad_Nave(Velocidad);
	}
}

void AFA_LEVEL_DIFICULT_NORMAL::Configurar_Danio_Disparo_Naves(ANaveEnemiga* Nave, float Danio_Disparo)
{
	if (Nave) {
		Nave->Set_Danio_Disparo(Danio_Disparo);
	}

}

void AFA_LEVEL_DIFICULT_NORMAL::Configurar_Vida_Obstaculos(AGENERAL_OBSTACLE* Obstaculo, float Vida)
{
	if (Obstaculo) {
		Obstaculo->Set_Vida_Obstaculos(Vida);
	}
}

void AFA_LEVEL_DIFICULT_NORMAL::Configurar_Danio_Obstaculos(AGENERAL_OBSTACLE* Obstaculo, float Danio)
{
	if (Obstaculo) {
		Obstaculo->Set_Danio_Obstaculos(Danio);
	}
}

void AFA_LEVEL_DIFICULT_NORMAL::Configurar_Velocidad_Obstaculos(AGENERAL_OBSTACLE* Obstaculo, float Velocidad)
{
	if (Obstaculo) {
		Obstaculo->Set_Velocidad_Obstaculos(Velocidad);
	}
}

void AFA_LEVEL_DIFICULT_NORMAL::ConfigurarTodo(float VidaNaves, float VelocidadNaves, float DanioDisparoNaves, float VidaObstaculos, float DanioObstaculos, float VelocidadObstaculos)
{
	CurrentVidaNaves = VidaNaves;
	CurrentVelocidadNaves = VelocidadNaves;
	CurrentDanioDisparoNaves = DanioDisparoNaves;
	CurrentVidaObstaculos = VidaObstaculos;
	CurrentDanioObstaculos = DanioObstaculos;
	CurrentVelocidadObstaculos = VelocidadObstaculos;

}
