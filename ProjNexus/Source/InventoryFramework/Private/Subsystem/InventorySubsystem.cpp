#include "Subsystem/InventorySubsystem.h"


bool UInventorySubsystem::GetInventoryProvider(AActor* Actor, TScriptInterface<IInventoryProvider>& OutProvider)
{
	if (!Actor)
	{
		return false;
	}

	if (Actor->Implements<UInventoryProvider>())
	{
		OutProvider.SetObject(Actor);
		OutProvider.SetInterface(Cast<IInventoryProvider>(Actor));
		return true;
	}

	return false;
}

void UInventorySubsystem::AddItemToActor(AActor* Actor, FName ItemId, int32 Amount)
{
}
