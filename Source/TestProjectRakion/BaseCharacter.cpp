// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"


// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//The next code makes the character's mesh orientation to be independent from the camera movement

		//This option must be deactivated so the "bOrientRotationToMovement" works properly
		bUseControllerRotationYaw = false;

		GetCharacterMovement()->bOrientRotationToMovement = true;

		SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
		SpringArm->SetupAttachment(RootComponent);
		SpringArm->TargetArmLength = 250.f;
		SpringArm->bUsePawnControlRotation = true;

		TPCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Third Person Camera"));
		TPCamera->SetupAttachment(SpringArm);
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

