// Copyright Epic Games, Inc. All Rights Reserved.

#include "LimitedSpaceGameMode.h"
#include "LimitedSpaceCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALimitedSpaceGameMode::ALimitedSpaceGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
