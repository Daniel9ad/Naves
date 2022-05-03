// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Proyectil.h"
#include "Rayo.generated.h"

class UProjectileMovementComponent;
class UStaticMeshComponent;

UCLASS()
class NAVES_API ARayo : public AProyectil
{
	GENERATED_BODY()
	
	// Malla del proyectil
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MeshRayo;

	// Componente de movimiento de proyectiles
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* RayoMovement;
	
public:
	// Constructor
	ARayo();

};
