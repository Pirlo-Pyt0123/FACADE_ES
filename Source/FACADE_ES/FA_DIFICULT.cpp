// Fill out your copyright notice in the Description page of Project Settings.


#include "FA_DIFICULT.h"
#include "FA_LEVEL_DIFICULT_EASY.h"
#include "FA_LEVEL_DIFICULT_NORMAL.h"
#include "FA_LEVEL_DIFICULT_HARD.h"


// Sets default values
AFA_DIFICULT::AFA_DIFICULT()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    VidaFacil = 100.0f;
    VelocidadFacil = 40.0f;
    DanioDisparoFacil = 20.0f;


    VidaObstaculosFacil = 50.0f;
    DanioObstaculosFacil = 15.0f;
    VelocidadObstaculosFacil = 100.0f;

    VidaNormal = 350.0f;
    VelocidadNormal = 80.0f;
    DanioDisparoNormal = 50.0f;


    VidaObstaculosNormal = 100.0f;
    DanioObstaculosNormal = 30.0f;
    VelocidadObstaculosNormal = 150.0f;

    VidaDificil = 500.0f;
    VelocidadDificil = 150.0f;
    DanioDisparoDificil = 100.0f;


    VidaObstaculosDificil = 150.0f;
    DanioObstaculosDificil = 75.0f;
    VelocidadObstaculosDificil = 200.0f;


}

// Called when the game starts or when spawned
void AFA_DIFICULT::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFA_DIFICULT::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFA_DIFICULT::ActivateFacilMode()
{
    if (!NivelFacil) {
        NivelFacil = GetWorld()->SpawnActor <AFA_LEVEL_DIFICULT_EASY> ();
    }

    // Configurar directamente cada aspecto de las naves y obstáculos
    NivelFacil->ConfigurarTodo(VidaFacil, VelocidadFacil, DanioDisparoFacil, VidaObstaculosFacil, DanioObstaculosFacil, VelocidadObstaculosFacil);
}

void AFA_DIFICULT::ActivateNormalMode()
{
    if (!NivelNormal) {
        NivelNormal = GetWorld()->SpawnActor<AFA_LEVEL_DIFICULT_NORMAL>();
    }

    NivelNormal->ConfigurarTodo(VidaNormal, VelocidadNormal, DanioDisparoNormal, VidaObstaculosNormal, DanioObstaculosNormal, VelocidadObstaculosNormal);
}

void AFA_DIFICULT::ActivateDificilMode()
{
	if (!NivelDificil) {
		NivelDificil = GetWorld()->SpawnActor<AFA_LEVEL_DIFICULT_HARD>();
	}

	NivelDificil->ConfigurarTodo(VidaDificil, VelocidadDificil, DanioDisparoDificil, VidaObstaculosDificil, DanioObstaculosDificil, VelocidadObstaculosDificil);
}


