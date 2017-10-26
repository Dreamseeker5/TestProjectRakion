// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

UCLASS()
class TESTPROJECTRAKION_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()
public:
	// Sets default values for this character's properties
	ABaseCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditDefaultsOnly, Category = "Custom")
		int32 damageSimple;

	UPROPERTY(EditDefaultsOnly, Category = "Custom")
		int32 damageSpecial;

	UPROPERTY(EditDefaultsOnly, Category = "Custom")
		int32 damageLongRange;

	UPROPERTY(EditDefaultsOnly, Category = "Custom")
		int32 healtPoints;

	//Natural character's armor
	UPROPERTY(EditDefaultsOnly, Category = "Custom")
		int32 resistance;

	//Defense points asigned by the armor worn by the character
	UPROPERTY(EditDefaultsOnly, Category = "Custom")
		int32 armor = 0;

	//Velocity in which the character moves
	UPROPERTY(EditDefaultsOnly, Category = "Custom")
		int32 velocity;

	//Velocity in which the character perform attacks and spells
	UPROPERTY(EditDefaultsOnly, Category = "Custom")
		int32 agility;

	
	
};
