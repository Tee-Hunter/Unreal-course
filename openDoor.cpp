// Fill out your copyright notice in the Description page of Project Settings.

#include "BuildingEscapeNew.h"
#include "openDoor.h"


// Sets default values for this component's properties
UopenDoor::UopenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts

void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();
}

void UopenDoor::BeginPlay()
{
	Super::BeginPlay();

	// Find the owning actor
	AActor* Owner = GetOwner();

	// Creat a rotator
	FRotator NewRotation = FRotator(0.f, -60.f, 0.f);

	// Set the door rotation 
	Owner->SetActorRotation(NewRotation);
	
}


// Called every frame
void UopenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// pall the Triger volume 
	if (PresssurePlate->IsOverlappingActor(ActorThatOpens))
	{
		openDoor();
	}
}

