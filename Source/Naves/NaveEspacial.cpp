// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEspacial.h"
#include <cmath>

using namespace std;

ANaveEspacial::ANaveEspacial()
{
	MeshNaveEspacial = GetShipMeshComponent();
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/Meshes/SM_Ball.SM_Ball"));
	MeshNaveEspacial->SetStaticMesh(MeshAsset.Object);

	// Inicializa la velocidad
	Velocidad = 500.0f;
	Energia = 100.0f;
	NumVidas = 1;
	ResEstructura = 100.0f;

	// Inicializacion
	t = 0.0f;
	x = cos(t);
	y = sin(t);
}

void ANaveEspacial::Tick(float DeltaTime)
{
	// Almacena en MoveDirection la direccion de movimiento
	const FVector MoveDirection = FVector(x, y, 0.f).GetClampedToMaxSize(1.0f);

	// Calcula movimiento
	const FVector Movement = MoveDirection * Velocidad * DeltaTime;

	// Verifica si la longitud al cuadrado de Movement es mayor a 0
	if (Movement.SizeSquared() > 0.0f)
	{
		//Devuelve la orientación FRotator correspondiente a la dirección en la que apunta el vector
		const FRotator Rotation = Movement.Rotation();
		//Estructura que contiene información sobre un golpe de una traza
		FHitResult Hit(1.f);
		//Intenta mover el componente por un vector de movimiento Movement y establece la rotación en Rotation.
		RootComponent->MoveComponent(Movement, Rotation, true, &Hit);
	}

	// Incremento parametro
	t += 0.01f;
	// Valor nuevo ejes
	x = cos(t);
	y = sin(t);
}
