// Fill out your copyright notice in the Description page of Project Settings.

#include "ProceduralCell.h"

// Sets default values
AProceduralCell::AProceduralCell()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SM_floor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_floor"));
	SetRootComponent(SM_floor);
}

// Called when the game starts or when spawned
void AProceduralCell::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProceduralCell::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

