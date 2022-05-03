// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Proyectil.h"
#include "Misil.generated.h"

class UProjectileMovementComponent;
class UStaticMeshComponent;

UCLASS()
class NAVES_API AMisil : public AProyectil
{
	GENERATED_BODY()
	
	// Malla del proyectil
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MeshMisil;

	// Componente de movimiento de proyectiles
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* MisilMovement;
	
public:
	// Constructor
	AMisil();
};
