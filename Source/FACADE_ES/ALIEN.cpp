// Fill out your copyright notice in the Description page of Project Settings.


#include "ALIEN.h"

// Sets default values
AALIEN::AALIEN()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));
	if (Mesh.Succeeded()) {
		fea = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Alien"));
		fea->SetStaticMesh(Mesh.Object);
	}

}

// Called when the game starts or when spawned
void AALIEN::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AALIEN::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

