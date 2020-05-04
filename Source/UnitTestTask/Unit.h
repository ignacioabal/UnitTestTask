// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Sound/SoundCue.h"
#include "Sound/SoundNodeWavePlayer.h"
#include "Sound/SoundWave.h"
#include "GameFramework/Actor.h"
#include "Unit.generated.h"

UCLASS(Blueprintable)
class UNITTESTTASK_API AUnit : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AUnit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
		USoundWave* GetRandomVoiceLine();

	UFUNCTION(BlueprintCallable)
		void OnUnitSelect(USoundWave* UnitVoiceLine);

	UFUNCTION(BlueprintCallable)
		void OnUnitAction(USoundWave* UnitVoiceLine);


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit")
		TArray<USoundWave* > UnitVoiceLines;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound Settings")
		float VolumeMultiplier = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound Settings")
		float SoundStartTime = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound Settings")
		class USoundAttenuation* SoundAttenuation = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound Settings")
		USoundConcurrency* SoundConcurrency = nullptr;

	float PitchMultiplier = 1.f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
