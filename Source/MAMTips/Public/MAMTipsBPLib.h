

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"


#include "ItemAmount.h"
#include "FGRecipe.h"

#include "MAMTipsBPLib.generated.h"

UCLASS()
class MAMTIPS_API UMAMTipsBPLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	/**
	  * Used to dynamically create classes at runtime
	  * Adapted from ContentLib
	  * I have absolutely no idea how this works -Robb
	  */
	UFUNCTION(BlueprintCallable)
		static TSubclassOf<UObject> MAMTips_FindOrCreateClass(FString Name, UClass* ParentClass);

	/**
	  * Used to avoid the need for multiple BPRWs (the mod already has a cpp module anyways)
	  */
	UFUNCTION(BlueprintCallable)
		static void MAMTips_SetRecipeProperties(TSubclassOf<class UFGRecipe> recipe, TArray< FItemAmount > mIngredients, TArray< FItemAmount > mProduct, FText mDisplayName);
};
