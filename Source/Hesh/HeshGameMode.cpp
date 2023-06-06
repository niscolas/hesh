// Copyright Epic Games, Inc. All Rights Reserved.

#include "HeshGameMode.h"
#include "HeshCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHeshGameMode::AHeshGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
