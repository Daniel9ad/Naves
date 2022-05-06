// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Nave.h"
#include "NaveEspacial.generated.h"


UCLASS()
class NAVES_API ANaveEspacial : public ANave
{
	GENERATED_BODY()

	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* MeshNaveEspacial;

private:
	//Constructor
	ANaveEspacial();

	// Llamado a cada cuadro
	virtual void Tick(float DeltaTime) override;
	

	//Parametro
	float t;

	// Eje
	float y;
	float x;

};
