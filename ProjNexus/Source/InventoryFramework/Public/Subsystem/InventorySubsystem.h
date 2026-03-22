#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "CoreFramework/Public/Interface/InventoryProvider.h"
#include "InventorySubsystem.generated.h"

UCLASS(Abstract, Blueprintable)
class INVENTORYFRAMEWORK_API UInventorySubsystem : public UWorldSubsystem
{
    GENERATED_BODY()

public:

    // Get inventory provider from actor
    UFUNCTION(BlueprintCallable, Category="Inventory")
    bool GetInventoryProvider(AActor* Actor, TScriptInterface<IInventoryProvider>& OutProvider);

    // Add item through interface
    UFUNCTION(BlueprintCallable, Category="Inventory")
    void AddItemToActor(AActor* Actor, FName ItemId, int32 Amount);
};