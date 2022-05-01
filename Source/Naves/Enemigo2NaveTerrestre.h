// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveTerrestre.h"
#include "Enemigo2NaveTerrestre.generated.h"

UCLASS()
class NAVES_API AEnemigo2NaveTerrestre : public ANaveTerrestre
{
	GENERATED_BODY()

public:
	//Constructor
	AEnemigo2NaveTerrestre();

	// Llamado a cada cuadro
	virtual void Tick(float DeltaTime) override;

	// Eje
	float x;
	float y;
};
