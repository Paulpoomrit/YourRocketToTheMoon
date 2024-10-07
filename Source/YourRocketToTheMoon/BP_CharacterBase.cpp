// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_CharacterBase.h"

ABP_CharacterBase::ABP_CharacterBase()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABP_CharacterBase::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABP_CharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);	
}