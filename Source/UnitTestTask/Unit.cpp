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

	if (DeltaTime / 2 ) {

	}


}
	void AUnit::OnUnitAction(USoundWave* UnitVoiceLine) {




	if (IsValid(UnitVoiceLine)) {
		UGameplayStatics::PlaySoundAtLocation(
			GetWorld(),
			UnitVoiceLine,
			GetActorLocation(),
			GetActorRotation(),
			VolumeMultiplier,
			PitchMultiplier,
			SoundStartTime,
			SoundAttenuation,
			SoundConcurrency,
			this
		);
		UE_LOG(LogTemp, Warning, TEXT("%s"), *UnitVoiceLine->GetName());

	}
	else {
		UE_LOG(LogTemp, Error, TEXT("No voice line found in said index."));
	}
}

void AUnit::OnUnitSelect(USoundWave* UnitVoiceLine) {

	if (IsValid(GetWorld())) {
		if (IsValid(UnitVoiceLine)) {
			UGameplayStatics::PlaySound2D(GetWorld(), UnitVoiceLine, VolumeMultiplier, PitchMultiplier, SoundStartTime, SoundConcurrency, this);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("No voice line found in said index."));
		}
		UE_LOG(LogTemp, Warning, TEXT("%s"), *UnitVoiceLine->GetName());

	}else
	{
		UE_LOG(LogTemp, Error, TEXT("World not found"));
	}

}


USoundWave* AUnit::GetRandomVoiceLine() {

	srand(time(NULL));

	int NumberOfElements = UnitVoiceLines.Num();


	int RandomIndexNumber = (rand() % NumberOfElements);


	return UnitVoiceLines[RandomIndexNumber];
}