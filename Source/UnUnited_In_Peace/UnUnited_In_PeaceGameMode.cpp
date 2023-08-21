// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnUnited_In_PeaceGameMode.h"
#include "UnUnited_In_PeaceCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnUnited_In_PeaceGameMode::AUnUnited_In_PeaceGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
