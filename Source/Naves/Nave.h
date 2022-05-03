// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Nave.generated.h"

UCLASS()
class NAVES_API ANave : public APawn
{
	GENERATED_BODY()

	// Componente de malla estatica
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* NaveMeshComponent;

public:
	// Constructor
	ANave();

	// Nombres estáticos para enlaces
	static const FName MoveVertical;
	static const FName MoveHorizontal;
	static const FName FireBala;
	static const FName FireRayo;
	static const FName FireMisil;
	static const FName FireBomba;


protected:
	// Llamado cuando comienza el juego o cuando se genera
	virtual void BeginPlay() override;

	// Velocidad de la nave
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		float Velocidad;

	// Energia de la nave
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		float Energia;

	// Numero de vidas
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		int NumVidas;

	// Resistencia de la estructura de la nave
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		float ResEstructura;

public:	
	// Llamado a cada cuadro
	virtual void Tick(float DeltaTime) override;

	// Llamado para vincular la funcionalidad a la entrada
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Devuelve el subobjeto NaveMeshComponent
	FORCEINLINE class UStaticMeshComponent* GetShipMeshComponent() const { return NaveMeshComponent; }
};
