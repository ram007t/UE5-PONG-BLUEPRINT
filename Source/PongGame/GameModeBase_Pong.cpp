// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModeBase_Pong.h"
#include "Pawn_Pong.h"

AGameModeBase_Pong::AGameModeBase_Pong()
{
	// set the default pawn class to custom class
	DefaultPawnClass = APawn_Pong::StaticClass();
}
