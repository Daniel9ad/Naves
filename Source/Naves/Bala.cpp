// Fill out your copyright notice in the Description page of Project Settings.


#include "Bala.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"

ABala::ABala()
{	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProyectilMeshAsset(TEXT("/Game/Meshes/TwinStickProjectile.TwinStickProjectile"));
	//Establece la malla del proyectil
	GetProyectilMesh()->SetStaticMesh(ProyectilMeshAsset.Object);
	GetProyectilMovement()->UpdatedComponent = GetProyectilMesh();
}
