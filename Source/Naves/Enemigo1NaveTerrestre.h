// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveTerrestre.h"
#include "Enemigo1NaveTerrestre.generated.h"

UCLASS()
class NAVES_API AEnemigo1NaveTerrestre : public ANaveTerrestre
{
	GENERATED_BODY()
	
public:
	// Constructor
	AEnemigo1NaveTerrestre();

	// Llamado a cada cuadro
	virtual void Tick(float DeltaTime) override;

	// Eje
	float y;
};
