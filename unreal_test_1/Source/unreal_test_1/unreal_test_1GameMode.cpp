// Copyright Epic Games, Inc. All Rights Reserved.

#include "unreal_test_1GameMode.h"
#include "unreal_test_1Character.h"
#include "UObject/ConstructorHelpers.h"

Aunreal_test_1GameMode::Aunreal_test_1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
