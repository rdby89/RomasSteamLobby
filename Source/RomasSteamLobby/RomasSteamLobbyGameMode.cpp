// Copyright Epic Games, Inc. All Rights Reserved.

#include "RomasSteamLobbyGameMode.h"
#include "RomasSteamLobbyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARomasSteamLobbyGameMode::ARomasSteamLobbyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
