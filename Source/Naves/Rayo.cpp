// Fill out your copyright notice in the Description page of Project Settings.


#include "Rayo.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"

ARayo::ARayo()
{   
	// Obtengo el componente malla
	MeshRayo = GetProyectilMesh();
	// Static reference to the mesh to use for the projectile
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProyectilMeshAsset(TEXT("/Game/Meshes/SM_KitRobot_Fin_01.SM_KitRobot_Fin_01"));
	MeshRayo->SetStaticMesh(ProyectilMeshAsset.Object); // Asocio el mesh con una geometria

	// Obtengo el componente de movimiento del proyectil
	RayoMovement = GetProyectilMovement();
	RayoMovement->UpdatedComponent = MeshRayo;
}