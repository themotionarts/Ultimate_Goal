// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Ultimate_GoalGameMode.h"
#include "Ultimate_GoalCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUltimate_GoalGameMode::AUltimate_GoalGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
