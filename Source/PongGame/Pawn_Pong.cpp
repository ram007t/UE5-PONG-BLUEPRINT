// Fill out your copyright notice in the Description page of Project Settings.


#include "Pawn_Pong.h"

// Sets default values
APawn_Pong::APawn_Pong()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



	//Create Mesh - setting it to root
	PaddleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	RootComponent = PaddleMesh;

	
}

// Called when the game starts or when spawned
void APawn_Pong::BeginPlay()
{
	Super::BeginPlay();

	
	
}

// Called every frame
void APawn_Pong::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APawn_Pong::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

