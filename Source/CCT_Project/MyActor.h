// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <CCT_Project/Enemy.h>
#include "MyActor.generated.h"
UCLASS()
class CCT_PROJECT_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void Hello(FString text);

	UFUNCTION(BlueprintCallable) 
	void InputOutput(int Value, int& Output1, bool& Output2, FString& Output3);

	UPROPERTY(BlueprintReadWrite)
	int myValue;

	UFUNCTION(BlueprintCallable)
	int AddFun(int a, int b);
};
