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
	TArray<int32> TotalMove = { 0,0 };
	for (int i = 0; i < 10; i++)
	{
		int32 RandomNumber1 = FMath::RandRange(-1, 1);
		TotalMove[0] += RandomNumber1;
		int32 RandomNumber2 = FMath::RandRange(-1, 1);
		TotalMove[1] += RandomNumber2;
		UE_LOG(LogTemp, Warning, TEXT("location :[%d, %d]"), TotalMove[0], TotalMove[1]);
	}
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

