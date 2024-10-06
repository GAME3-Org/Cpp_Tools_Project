// Copyright Epic Games, Inc. All Rights Reserved.

#include "Cpp_Tools_ProjectGameMode.h"
#include "Cpp_Tools_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACpp_Tools_ProjectGameMode::ACpp_Tools_ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
