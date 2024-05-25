// Copyright Epic Games, Inc. All Rights Reserved.

#include "FACADE_ESPawn.h"
#include "FACADE_ESProjectile.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"

const FName AFACADE_ESPawn::MoveForwardBinding("MoveForward");
const FName AFACADE_ESPawn::MoveRightBinding("MoveRight");
const FName AFACADE_ESPawn::FireForwardBinding("FireForward");
const FName AFACADE_ESPawn::FireRightBinding("FireRight");
const FName AFACADE_ESPawn::FireUpBinding("FireUp");
const FName AFACADE_ESPawn::MoveUpBinding("MoveUp");
const FName AFACADE_ESPawn::MoveDownBinding("MoveDown");


AFACADE_ESPawn::AFACADE_ESPawn()
{	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));
	// Create the mesh component
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	RootComponent = ShipMeshComponent;
	ShipMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);
	
	// Cache our sound effect
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("/Game/TwinStick/Audio/TwinStickFire.TwinStickFire"));
	FireSound = FireAudio.Object;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when ship does
	CameraBoom->TargetArmLength = 1200.f;
	CameraBoom->SetRelativeRotation(FRotator(0.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;	// Camera does not rotate relative to arm






	// Movement
	MoveSpeed = 1000.0f;
	// Weapon
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	bCanFire = true;




	Health_Nave_Protagonista = 1000;
}

void AFACADE_ESPawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	// set up gameplay key bindings
	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	PlayerInputComponent->BindAxis(FireForwardBinding);
	PlayerInputComponent->BindAxis(FireRightBinding);
	PlayerInputComponent->BindAxis(FireUpBinding);
	PlayerInputComponent->BindAxis(MoveUpBinding);
	PlayerInputComponent->BindAxis(MoveDownBinding);


	FInputActionKeyMapping camara("CamaraFirst", EKeys::P, 0, 0, 0, 0);
	UPlayerInput::AddEngineDefinedActionMapping(camara);
	PlayerInputComponent->BindAction("CamaraFirst", EInputEvent::IE_Pressed, this, &AFACADE_ESPawn::CamaraCambio);


}

void AFACADE_ESPawn::Tick(float DeltaSeconds)
{
	if (Health_Nave_Protagonista <= 0)
	{
		Componentes_Colision();
	}


	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Cyan, FString::Printf(TEXT("Vida  : %f"), Health_Nave_Protagonista));
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);
	const float UpValue = GetInputAxisValue(MoveUpBinding);

	const float DownValue = GetInputAxisValue(MoveDownBinding); // Obtener el valor del nuevo eje de movimiento

	const FVector MoveDirection = FVector(ForwardValue, RightValue, UpValue + DownValue).GetClampedToMaxSize(1.0f); // Ajustar el vector de movimiento
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	if (Movement.SizeSquared() > 0.0f)
	{
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, RootComponent->GetComponentRotation(), true, &Hit);

		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, RootComponent->GetComponentRotation(), true);
		}
	}

	const float FireForwardValue = GetInputAxisValue(FireForwardBinding);
	const float FireRightValue = GetInputAxisValue(FireRightBinding);
	const float FireUpValue = GetInputAxisValue(FireUpBinding);
	//const float FireDownValue = GetInputAxisValue(FireDownBinding); // Obtener el valor del nuevo eje de disparo
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, FireUpValue + 0); // Ajustar el vector de dirección de disparo

	FireShot(FireDirection);
}

void AFACADE_ESPawn::FireShot(FVector FireDirection)
{
	// If it's ok to fire again
	if (bCanFire == true)
	{
		// If we are pressing fire stick in a direction
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// spawn the projectile
				World->SpawnActor<AFACADE_ESProjectile>(SpawnLocation, FireRotation);
			}

			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AFACADE_ESPawn::ShotTimerExpired, FireRate);

			// try and play the sound if specified
			if (FireSound != nullptr)
			{
				UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			}

			bCanFire = false;
		}
	}
}

void AFACADE_ESPawn::ShotTimerExpired()
{
	bCanFire = true;
}

void AFACADE_ESPawn::CamaraCambio()
{
	typecamara *= -1;
	if (typecamara == -1) {
		//camara en primera persona
		CameraBoom->TargetArmLength = 0.f;
		CameraBoom->SetRelativeRotation(FRotator(-80.f,0.f, 0.f));
		CameraComponent->bUsePawnControlRotation = true;




	}
	else {
		CameraBoom->TargetArmLength = 1200.f;
		CameraBoom->SetRelativeRotation(FRotator(-50.f, 0.f, 0.f));
		CameraBoom->bDoCollisionTest = false;
		CameraComponent->SetRelativeLocation(FVector(0.f, 0.f, -500.f));
		CameraBoom->bEnableCameraLag = true;

	}
}

void AFACADE_ESPawn::Damage(float Danio_)
{
	Health_Nave_Protagonista -= Danio_;
}

void AFACADE_ESPawn::Componentes_Colision()
{
	//if (ShipExplosion)
		//UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ShipExplosion, GetActorTransform());
	//Sonido de la explosion

	//if (ExplosionSoundShip != nullptr)
		//UGameplayStatics::PlaySoundAtLocation(this, ExplosionSoundShip, GetActorLocation());

	this->Destroy();
}

