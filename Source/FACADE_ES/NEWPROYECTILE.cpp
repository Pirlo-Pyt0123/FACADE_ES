// Fill out your copyright notice in the Description page of Project Settings.


#include "NEWPROYECTILE.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/CapsuleComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/ShapeComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "FACADE_ESPawn.h"

// Sets default values
ANEWPROYECTILE::ANEWPROYECTILE()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	if (MeshAsset.Succeeded())
	{
		//Projectil_Mesh->SetStaticMesh(MeshAsset.Object);

		// Modificar la escala del componente de malla
		//FVector NewScale(1.5f, 1.5f, 1.5f); // Escala modificada
		//Projectil_Mesh->SetWorldScale3D(NewScale);
	}

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
	if (ParticleAsset.Succeeded())
	{
		Explosion_Particles = ParticleAsset.Object;
	}

	// Inicializar el sonido de la colisión
	static ConstructorHelpers::FObjectFinder<USoundBase> SoundAsset(TEXT("SoundWave'/Game/StarterContent/Audio/Explosion02.Explosion02'"));
	if (SoundAsset.Succeeded())
	{
		Projectil_Sound = SoundAsset.Object;
	}


	// Controlando el movimiento del proyectil
	Projectil_Movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectil_Movement"));
	Projectil_Movement->InitialSpeed = 750.0f;
	Projectil_Movement->MaxSpeed = 850.0f;
	Projectil_Movement->bRotationFollowsVelocity = true;
	Projectil_Movement->bShouldBounce = false;
	Projectil_Movement->ProjectileGravityScale = 0.0f;

	// Creando el componente de colisión del proyectil
	Projectil_Collision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Projectil_Collision"));
	Projectil_Collision->SetupAttachment(RootComponent);

	// Estableciendo el tiempo de vida inicial del proyectil
	InitialLifeSpan = 5.f;

	// Daño predeterminado del proyectil
	DanioProvocado = 0.f;
	//Configurando el proyectil para que genere eventos de colision
	Projectil_Collision->SetCapsuleHalfHeight(160.0f);
	Projectil_Collision->SetCapsuleRadius(160.0f);
}

// Called when the game starts or when spawned
void ANEWPROYECTILE::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANEWPROYECTILE::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANEWPROYECTILE::Set_Danio(float Danio)
{
	Danio_D_B = Danio;
}

void ANEWPROYECTILE::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	AFACADE_ESPawn* Jugador = Cast<AFACADE_ESPawn>(OtherActor);

	if (Jugador)
	{
		DestroyPROYECTIL();
		Jugador->Damage(Danio_D_B);
	}
}

void ANEWPROYECTILE::DestroyPROYECTIL()
{
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), Projectil_Sound, GetActorLocation());
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Explosion_Particles, GetActorLocation());
	Destroy();
}

