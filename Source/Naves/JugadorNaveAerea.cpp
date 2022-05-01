// Fill out your copyright notice in the Description page of Project Settings.


#include "JugadorNaveAerea.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

AJugadorNaveAerea::AJugadorNaveAerea()
{
	// Crea una camara
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent); // Asocia la camara con la malla
	CameraBoom->SetUsingAbsoluteRotation(true); // El brazo no girara cuando lo haga la nave
	CameraBoom->TargetArmLength = 1500.f; // Distancia de la camara a la nave
	CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f)); // Establecer la rotación del componente
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Crea un brazo que sujete la camara
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Asocia el brazo a la camara
	CameraComponent->bUsePawnControlRotation = false;	// La cámara no gira en relación con el brazo

	// Inicializacion
	Velocidad = 1000.0f;
	Energia = 100.0f;
	NumVidas = 3;
	ResEstructura = 100.0f;
}

void AJugadorNaveAerea::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// algo
	check(PlayerInputComponent);

	// Indica que el InputComponent está interesado en conocer el valor del Eje
	PlayerInputComponent->BindAxis(MoveVertical);
	PlayerInputComponent->BindAxis(MoveHorizontal);
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
}
