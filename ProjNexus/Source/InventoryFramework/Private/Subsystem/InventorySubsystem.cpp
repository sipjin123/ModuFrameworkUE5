#include "Subsystem/InventorySubsystem.h"


bool UInventorySubsystem::GetInventoryProvider(AActor* Actor, TScriptInterface<IInventoryProvider>& OutProvider)
{
	if (!Actor)
	{
		return false;
	}

	// 1. Check if actor itself implements it
	if (Actor->Implements<UInventoryProvider>())
	{
		OutProvider.SetObject(Actor);
		OutProvider.SetInterface(Cast<IInventoryProvider>(Actor));
		return true;
	}

	// 2. Check components (THIS is what you’re missing)
	TArray<UActorComponent*> Components;
	Actor->GetComponents(Components);

	for (UActorComponent* Comp : Components)
	{
		if (Comp && Comp->Implements<UInventoryProvider>())
		{
			OutProvider.SetObject(Comp);
			OutProvider.SetInterface(Cast<IInventoryProvider>(Comp));
			return true;
		}
	}

	return false;
}

void UInventorySubsystem::AddItemToActor(AActor* Actor, FName ItemId, int32 Amount)
{
}
