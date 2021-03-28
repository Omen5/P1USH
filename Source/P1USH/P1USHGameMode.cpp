// Copyright Epic Games, Inc. All Rights Reserved.

#include "P1USHGameMode.h"
#include "P1USHCharacter.h"
#include "UObject/ConstructorHelpers.h"

AP1USHGameMode::AP1USHGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
