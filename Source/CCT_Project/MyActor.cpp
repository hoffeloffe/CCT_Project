// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActor::Hello(FString text)
{
	UE_LOG(LogTemp, Warning, TEXT("LOG: %s"), *text);
}

void AMyActor::InputOutput(int Value, int& Output1, bool& Output2, FString& Output3)
{
	Output1 = Value;

}

int AMyActor::AddFun(int a, int b)
{
	return a + b;
}

void AMyActor::PrintEnemy(AEnemy enemy, int& hp, int& dmg, bool& Dead)
{
	hp = enemy.HP;
	dmg = enemy.DMG;
	Dead = enemy.Dead;
}

