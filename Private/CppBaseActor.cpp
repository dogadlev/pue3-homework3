// Fill out your copyright notice in the Description page of Project Settings.


#include "CppBaseActor.h"
#include "Engine/Engine.h"

// Sets default values
ACppBaseActor::ACppBaseActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACppBaseActor::BeginPlay()
{
	
	ACppBaseActor::EnemyNum = rand() % 10;
	ACppBaseActor::IsAlive = static_cast<bool>(rand() % 2);
	Super::BeginPlay();
	ShowActorInformation();
	++ACppBaseActor::InstanceID;
}

// Called every frame
void ACppBaseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACppBaseActor::ShowActorInformation()
{
	UE_LOG(LogTemp, Display, TEXT("Instance name: A_CppBase_C_%d"), ACppBaseActor::InstanceID);
	UE_LOG(LogTemp, Display, TEXT("EnemyNum: %d"), ACppBaseActor::EnemyNum);
	UE_LOG(LogTemp, Display, TEXT("IsAlive: %i"), ACppBaseActor::IsAlive);
}

