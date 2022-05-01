// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveAcuatica.h"
#include "Enemigo1NaveAcuatica.generated.h"


UCLASS()
class NAVES_API AEnemigo1NaveAcuatica : public ANaveAcuatica
{
	GENERATED_BODY()

public:
	//Constructor
	AEnemigo1NaveAcuatica();

	// Llamado a cada cuadro
	virtual void Tick(float DeltaTime) override;

	// Eje movimiento
	float x;
};

