// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveAerea.h"
#include "Cola.h"
#include "JugadorNaveAerea.generated.h"

UCLASS()
class NAVES_API AJugadorNaveAerea : public ANaveAerea
{
	GENERATED_BODY()
	
	//La camara
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;

	//Algo que coloca la camara sobre el personaje
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	Cola<class AProyectil*> ColaProyectiles;

public:
	//Constructor
	AJugadorNaveAerea();

	// Desplazamiento desde la ubicación de loa naves para generar proyectiles
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		FVector GunOffset;

	// Qué tan rápido disparará el arma
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		float FireRate;

	// Llamado a cada cuadro
	virtual void Tick(float DeltaTime) override;
	// Llamado para vincular la funcionalidad a la entrada
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Disparo
	void FireBala();
	void FireRayo();
	void FireBomba();
	void FireMisil();

	/* Manejador para el vencimiento del temporizador de fuego*/
	void ShotTimerExpired();

	// Devuelve el subobjeto CameraComponent
	FORCEINLINE class UCameraComponent* GetCameraComponent() const { return CameraComponent; }
	// Devuelve el subobjeto CameraBoom 
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

private:
	// Bandera para controlar disparos
	uint32 bCanFire : 1;

	// Mango para una gestión eficiente del temporizador ShotTimerExpired
	FTimerHandle TimerHandle_ShotTimerExpired;

	float FireForwardValue;
	float FireRightValue;
};
