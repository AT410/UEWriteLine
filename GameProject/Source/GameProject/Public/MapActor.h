// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapActor.generated.h"

UCLASS()
class GAMEPROJECT_API AMapActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMapActor();

	UPROPERTY(BluePrintReadWrite, Category ="MyTest") bool TestFlag;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "MapFunc")
		virtual void SetMapFile();
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
