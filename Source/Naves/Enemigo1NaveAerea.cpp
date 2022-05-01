// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo1NaveAerea.h"
#include <cmath>

using namespace std;

AEnemigo1NaveAerea::AEnemigo1NaveAerea()
{
	// Inicializacion
	Velocidad = 500.0f;
	Energia = 100.0f;
	NumVidas = 1;
	ResEstructura = 100.0f;

	// Parametro
	t = 0.0f;
	// Ecuaciones parametricas
	x = cos(t);
	y = sin(t);
}

void AEnemigo1NaveAerea::Tick(float DeltaTime)
{	
	// Almacena en MoveDirection la direccion de movimiento
	const FVector MoveDirection = FVector(x,y,0.f).GetClampedToMaxSize(1.0f);

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
