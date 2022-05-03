// Fill out your copyright notice in the Description page of Project Settings.


#include "Nave.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/CollisionProfile.h"
#include "UObject/ConstructorHelpers.h"

#define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 6.f, FColor::Green, text

// Nombres est�ticos para enlaces de eje
const FName ANave::MoveVertical("MoveVertical");
const FName ANave::MoveHorizontal("MoveHorizontal");
const FName ANave::FireBala("FireBala");
const FName ANave::FireRayo("FireRayo");
const FName ANave::FireMisil("FireMisil");
const FName ANave::FireBomba("FireBomba");

// Constructor
ANave::ANave()
{
	// Establecer este pe�n para llamar a Tick() en cada cuadro
	PrimaryActorTick.bCanEverTick = true;

	//Crear el componente de malla
	NaveMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NaveMesh"));
	RootComponent = NaveMeshComponent;
	NaveMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
}

// Llamado cuando comienza el juego o cuando se genera
void ANave::BeginPlay()
{
	Super::BeginPlay();
}

// Llamado a cada cuadro
void ANave::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Llamado para vincular la funcionalidad a la entrada
void ANave::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

