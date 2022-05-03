// Fill out your copyright notice in the Description page of Project Settings.


#include "Proyectil.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"

// Constructor
AProyectil::AProyectil()
{
	// Static reference to the mesh to use for the projectile
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> ProyectilMeshAsset(TEXT("/Game/Meshes/TwinStickProjectile.TwinStickProjectile"));

	// Create mesh component for the projectile sphere
	ProyectilMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProyectilMesh"));
	//ProyectilMesh->SetStaticMesh(ProyectilMeshAsset.Object);
	ProyectilMesh->SetupAttachment(RootComponent);
	ProyectilMesh->BodyInstance.SetCollisionProfileName("Proyectile");
	ProyectilMesh->OnComponentHit.AddDynamic(this, &AProyectil::OnHit); //configure una notificación para cuando este componente toque algo
	RootComponent = ProyectilMesh;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProyectilMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectilMovement"));
	//ProyectilMovement->UpdatedComponent = ProyectilMesh;
	ProyectilMovement->InitialSpeed = 1000.f;
	ProyectilMovement->MaxSpeed = 1000.f;
	ProyectilMovement->bRotationFollowsVelocity = true;
	ProyectilMovement->bShouldBounce = false;
	ProyectilMovement->ProjectileGravityScale = 0.f; // No gravity

	// Muere después de 3 segundos por defecto
	InitialLifeSpan = 3.0f;
}

// Función para manejar el proyectil golpeando algo
void AProyectil::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Solo agregue impulso y destruya el proyectil si golpeamos una física
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}
	Destroy();
}

