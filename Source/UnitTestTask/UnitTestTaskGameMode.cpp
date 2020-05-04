// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "UnitTestTaskGameMode.h"
#include "UnitTestTaskPlayerController.h"
#include "UnitTestTaskCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnitTestTaskGameMode::AUnitTestTaskGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AUnitTestTaskPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}