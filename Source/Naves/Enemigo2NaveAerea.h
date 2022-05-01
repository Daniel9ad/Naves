// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveAerea.h"
#include "Enemigo2NaveAerea.generated.h"

UCLASS()
class NAVES_API AEnemigo2NaveAerea : public ANaveAerea
{
	GENERATED_BODY()

public:
	//Constructor
	AEnemigo2NaveAerea();

	//Llamado a cada cuadro
	virtual void Tick(float DeltaTime) override;

	//Parametro para ecuaciones parametricas
	float t;
	//Ejes
	float x;
	float y;
};
