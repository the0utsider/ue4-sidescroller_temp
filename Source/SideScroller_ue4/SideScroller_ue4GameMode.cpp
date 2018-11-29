// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "SideScroller_ue4GameMode.h"
#include "SideScroller_ue4Character.h"
#include "UObject/ConstructorHelpers.h"

ASideScroller_ue4GameMode::ASideScroller_ue4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
