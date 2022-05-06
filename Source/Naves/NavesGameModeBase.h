// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NavesGameModeBase.generated.h"


UCLASS()
class NAVES_API ANavesGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

protected:

	// Llamado cuando comienza el juego o cuando se genera
	virtual void BeginPlay() override;
};
