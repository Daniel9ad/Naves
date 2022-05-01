// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveAerea.h"
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

public:
	//Constructor
	AJugadorNaveAerea();

	// Llamado a cada cuadro
	virtual void Tick(float DeltaTime) override;
	// Llamado para vincular la funcionalidad a la entrada
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Devuelve el subobjeto CameraComponent
	FORCEINLINE class UCameraComponent* GetCameraComponent() const { return CameraComponent; }
	// Devuelve el subobjeto CameraBoom 
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
};
