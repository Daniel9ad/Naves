// Fill out your copyright notice in the Description page of Project Settings.


#include "Bala.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"

ABala::ABala()
{	
	
	MeshBala = GetProyectilMesh();
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProyectilMeshAsset(TEXT("/Game/Meshes/TwinStickProjectile.TwinStickProjectile"));
	MeshBala->SetStaticMesh(ProyectilMeshAsset.Object);

	BalaMovement = GetProyectilMovement();
	BalaMovement->UpdatedComponent = MeshBala;

}
