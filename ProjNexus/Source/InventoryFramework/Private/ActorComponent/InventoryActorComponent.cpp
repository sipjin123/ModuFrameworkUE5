// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponent/InventoryActorComponent.h"

// Sets default values for this component's properties
UInventoryActorComponent::UInventoryActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInventoryActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventoryActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UInventoryActorComponent::HasItem_Implementation(FName ItemId) const
{
	return IInventoryProvider::HasItem_Implementation(ItemId);
}

void UInventoryActorComponent::AddItem_Implementation(FName ItemId, int32 Amount)
{
	IInventoryProvider::AddItem_Implementation(ItemId, Amount);
}

