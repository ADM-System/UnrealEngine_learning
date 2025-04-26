// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "porgetto_AAAGameMode.h"
#include "porgetto_AAACharacter.h"
#include "UObject/ConstructorHelpers.h"

Aporgetto_AAAGameMode::Aporgetto_AAAGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
