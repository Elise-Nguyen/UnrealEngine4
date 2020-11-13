// Copyright Epic Games, Inc. All Rights Reserved.

#include "Devoir_UE4GameMode.h"
#include "Devoir_UE4Character.h"
#include "UObject/ConstructorHelpers.h"

ADevoir_UE4GameMode::ADevoir_UE4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
