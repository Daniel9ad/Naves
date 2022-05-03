// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Proyectil.generated.h"

class UProjectileMovementComponent;
class UStaticMeshComponent;

UCLASS()
class NAVES_API AProyectil : public AActor
{
	GENERATED_BODY()

	// Malla del proyectil
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ProyectilMesh;

	// Componente de movimiento de proyectiles
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* ProyectilMovement;

public:
	// Constructor
	AProyectil();

	// Función para manejar el proyectil golpeando algo
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	
	/** Returns ProjectileMesh subobject **/
	FORCEINLINE UStaticMeshComponent* GetProyectilMesh() const { return ProyectilMesh; }
	/** Returns ProjectileMovement subobject **/
	FORCEINLINE UProjectileMovementComponent* GetProyectilMovement() const { return ProyectilMovement; }

};