// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Proyectil.h"
#include "Bala.generated.h"

class UProjectileMovementComponent;
class UStaticMeshComponent;

UCLASS()
class NAVES_API ABala : public AProyectil
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MeshBala;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* BalaMovement;

public:
	// Constructor
	ABala();

};
