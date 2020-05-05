// Fill out your copyright notice in the Description page of Project Settings.


#include "Unit.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundNodeRandom.h"
#include "UObject/UObjectGlobals.h"
#include "time.h"
#include "Engine/Engine.h"

// Sets default values
AUnit::AUnit()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AUnit::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AUnit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AUnit::OnUnitAction() {


	UGameplayStatics::PlaySoundAtLocation(
		GetWorld(),
		GetRandomVoiceLine(),
		GetActorLocation(),
		GetActorRotation(),
		VolumeMultiplier,
		PitchMultiplier,
		SoundStartTime,
		SoundAttenuation,
		SoundConcurrency,
		this
	);

}

void AUnit::OnUnitSelect() {


	UGameplayStatics::PlaySound2D(
		GetWorld(),
		GetRandomVoiceLine(),
		VolumeMultiplier,
		PitchMultiplier,
		SoundStartTime,
		SoundConcurrency,
		this);
	
}


USoundWave* AUnit::GetRandomVoiceLine() {

	srand(time(NULL));

	int NumberOfElements = UnitVoiceLines.Num();

	int RandomIndexNumber = (rand() % NumberOfElements);

	return UnitVoiceLines[RandomIndexNumber];
}