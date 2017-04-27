// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "PlayingWithUE4.h"
#include "PlayingWithUE4GameMode.h"
#include "PlayingWithUE4Pawn.h"

APlayingWithUE4GameMode::APlayingWithUE4GameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = APlayingWithUE4Pawn::StaticClass();
}
