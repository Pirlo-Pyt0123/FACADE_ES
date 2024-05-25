// Fill out your copyright notice in the Description page of Project Settings.


#include "NavesExtradimensionales.h"
#include "FACADE_ESPawn.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/ShapeComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "Components/BoxComponent.h"

ANavesExtradimensionales::ANavesExtradimensionales()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/StarterContent/Mehes/NavesEnemigas/Spaceships_8.Spaceships_8'"));
	if (Mesh.Succeeded())
	{

		malla->SetStaticMesh(Mesh.Object);

		// Modificar la escala del componente de malla
		FVector NewScale(1.5f, 1.5f, 1.5f); // Escala modificada
		malla->SetWorldScale3D(NewScale);
	}

	Velocity = 40.0f;
	Tiempo_Disparo = 0;
	Danio_Recibido = 40.f;
	Tiempo_Disparo_Generar = 4.f;
	Distancia_Disparo = FVector(90.f, 0.f, 0.f);

	//Asignando un nombre
	Identificador_Nave = "Nave_Enemiga_05";
}

void ANavesExtradimensionales::BeginPlay()
{
	Super::BeginPlay();

}

void ANavesExtradimensionales::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Life <= 0)
	{
		Componente_Destruccion();
	}
}

void ANavesExtradimensionales::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	AFACADE_ESPawn* Jugador = Cast<AFACADE_ESPawn>(OtherActor);

	if (Jugador)
	{
		//Jugador->Damage(Danio_Disparo);
		Recibir_Danio(50.f);
	}
}

void ANavesExtradimensionales::Componente_Destruccion()
{
	//UGameplayStatics::PlaySoundAtLocation(GetWorld(), Sonido_Nave, GetActorLocation());

	// Reproducir el efecto de particulas
	//UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Explosion_Nave, GetActorLocation(), FRotator::ZeroRotator, true);

	// Destruir la nave
	Destroy();
}

void ANavesExtradimensionales::Recibir_Danio(float Danio)
{
	Life -= Danio;
}
