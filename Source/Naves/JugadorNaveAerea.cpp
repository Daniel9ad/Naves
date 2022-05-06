// Fill out your copyright notice in the Description page of Project Settings.


#include "JugadorNaveAerea.h"
#include "Proyectil.h"
#include "Bala.h"
#include "Rayo.h"
#include "Misil.h"
#include "Bomba.h"

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Components/InputComponent.h"

AJugadorNaveAerea::AJugadorNaveAerea()
{
	// Crea una camara
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent); // Asocia la camara con la malla
	CameraBoom->SetUsingAbsoluteRotation(true); // El brazo no girara cuando lo haga la nave
	CameraBoom->TargetArmLength = 1000.f; // Distancia de la camara a la nave
	CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f)); // Establecer la rotación del componente
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Crea un brazo que sujete la camara
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Asocia el brazo a la camara
	CameraComponent->bUsePawnControlRotation = false;	// La cámara no gira en relación con el brazo

	// Inicializacion Nave
	Velocidad = 1000.0f;
	Energia = 100.0f;
	NumVidas = 3;
	ResEstructura = 100.0f;

	// Arma
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	bCanFire = false;
	FireForwardValue = 1.0f;
	FireRightValue = 0.0f;
	/*
	// Cola
	const FVector MoveDirection = FVector(FireForwardValue, FireRightValue, 0.f).GetClampedToMaxSize(1.0f);
	const FRotator FireRotation = MoveDirection.Rotation();
	const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);
	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		ColaProyectiles.Push(World->SpawnActor<AProyectil>(SpawnLocation, FireRotation));
		ColaProyectiles.Push(World->SpawnActor<AProyectil>(SpawnLocation, FireRotation));
		ColaProyectiles.Push(World->SpawnActor<AProyectil>(SpawnLocation, FireRotation));
		ColaProyectiles.Push(World->SpawnActor<AProyectil>(SpawnLocation, FireRotation));
		ColaProyectiles.Push(World->SpawnActor<AProyectil>(SpawnLocation, FireRotation));
	}*/
}

void AJugadorNaveAerea::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	// Indica que el InputComponent está interesado en conocer el valor del Eje
	PlayerInputComponent->BindAxis(MoveVertical);
	PlayerInputComponent->BindAxis(MoveHorizontal);

	// Vincula una función a una Acción definida en la configuración del proyecto
	InputComponent->BindAction(TEXT("FireBala"), IE_Pressed, this, &AJugadorNaveAerea::FireBala);
	InputComponent->BindAction(TEXT("FireRayo"), IE_Pressed, this, &AJugadorNaveAerea::FireRayo);
	InputComponent->BindAction(TEXT("FireMisil"), IE_Pressed, this, &AJugadorNaveAerea::FireMisil);
	InputComponent->BindAction(TEXT("FireBomba"), IE_Pressed, this, &AJugadorNaveAerea::FireBomba);
}


void AJugadorNaveAerea::Tick(float DeltaTime)
{
	// Obtiene el valor del eje de entrada
	const float VerticalValue = GetInputAxisValue(MoveVertical);
	const float HorizontalValue = GetInputAxisValue(MoveHorizontal);
	
	// Almacena en MoveDirection la direccion de movimiento
	const FVector MoveDirection = FVector(VerticalValue, HorizontalValue, 0.f).GetClampedToMaxSize(1.0f);

	// Calcula movimiento
	const FVector Movement = MoveDirection * Velocidad * DeltaTime;

	// Verifica que la longitud al cuadrado de Movement es mayor a 0
	if (Movement.SizeSquared() > 0.0f)
	{
		//Devuelve la orientación FRotator correspondiente a la dirección en la que apunta el vector
		const FRotator Rotation = Movement.Rotation();
		//Estructura que contiene información sobre un inpacto
		FHitResult Hit(10.f);
		//Intenta mover el componente por un vector de movimiento Movement y establece la rotación en Rotation.
		RootComponent->MoveComponent(Movement, Rotation, false, &Hit);
	}

	// Proyectil
	// Para que el disparo se realise de acuerdo al movimiento de la nave
	if (VerticalValue != 0.0f || HorizontalValue != 0.0f) {

		if (VerticalValue != FireForwardValue) {
			FireForwardValue = VerticalValue;
		}

		if (HorizontalValue != FireRightValue) {
			FireRightValue = HorizontalValue;
		}
	}
}

void AJugadorNaveAerea::FireBala()
{
	// Create fire direction vector
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f).GetClampedToMaxSize(1.0f);

	const FRotator FireRotation = FireDirection.Rotation();
	// Spawn projectile at an offset from this pawn
	const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		World->SpawnActor<ABala>(SpawnLocation, FireRotation);
	}

	World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AJugadorNaveAerea::ShotTimerExpired, FireRate);
}

void AJugadorNaveAerea::FireRayo()
{
	// Create fire direction vector
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f).GetClampedToMaxSize(1.0f);

	const FRotator FireRotation = FireDirection.Rotation();
	// Spawn projectile at an offset from this pawn
	const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		World->SpawnActor<ARayo>(SpawnLocation, FireRotation);
	}

	World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AJugadorNaveAerea::ShotTimerExpired, FireRate);
}

void AJugadorNaveAerea::FireMisil()
{
	// Create fire direction vector
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f).GetClampedToMaxSize(1.0f);

	const FRotator FireRotation = FireDirection.Rotation();
	// Spawn projectile at an offset from this pawn
	const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		World->SpawnActor<AMisil>(SpawnLocation, FireRotation);
	}

	World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AJugadorNaveAerea::ShotTimerExpired, FireRate);
}

void AJugadorNaveAerea::FireBomba()
{
	// Create fire direction vector
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f).GetClampedToMaxSize(1.0f);

	const FRotator FireRotation = FireDirection.Rotation();
	// Spawn projectile at an offset from this pawn
	const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		World->SpawnActor<ABomba>(SpawnLocation, FireRotation);
	}

	World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AJugadorNaveAerea::ShotTimerExpired, FireRate);
}

void AJugadorNaveAerea::ShotTimerExpired()
{
	bCanFire = true;
}
