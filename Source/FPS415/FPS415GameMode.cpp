// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS415GameMode.h"
#include "FPS415Character.h"
#include "UObject/ConstructorHelpers.h"

AFPS415GameMode::AFPS415GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
