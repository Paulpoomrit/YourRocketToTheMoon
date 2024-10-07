// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperZDCharacter.h"
#include "BP_CharacterBase.generated.h"

/**
 * 
 */
UCLASS()
class YOURROCKETTOTHEMOON_API ABP_CharacterBase : public APaperZDCharacter
{
	GENERATED_BODY()

public:
	// default constructor
	ABP_CharacterBase();

protected:
	virtual void BeginPlay() override;	

public:
	// Called every frame	
	virtual void Tick(float DeltaTime) override;

	









	
};
