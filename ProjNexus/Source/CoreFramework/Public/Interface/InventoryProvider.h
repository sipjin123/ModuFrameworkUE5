#pragma once

#include "UObject/Interface.h"
#include "InventoryProvider.generated.h"

UINTERFACE(BlueprintType)
class COREFRAMEWORK_API UInventoryProvider : public UInterface
{
	GENERATED_BODY()
};

class COREFRAMEWORK_API IInventoryProvider
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Inventory")
	bool HasItem(FName ItemId) const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Inventory")
	void AddItem(FName ItemId, int32 Amount);
};