// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveAerea.h"
#include "Enemigo1NaveAerea.generated.h"


UCLASS()
class NAVES_API AEnemigo1NaveAerea : public ANaveAerea
{
	GENERATED_BODY()

public:
	// Constructor
	AEnemigo1NaveAerea();

	// Llamado a cada cuadro
	virtual void Tick(float DeltaTime) override;

	// Parametro de ecuaciones parametricas
	float t;
	// Ejes
	float x;
	float y;
};
