

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/UObjectAllocator.h"

#include "FGFoliageIdentifier.h"
#include "ItemAmount.h"
#include "FGRecipe.h"
#include "FGFoliageResourceUserData.h"

#include "MAMTipsBPLib.generated.h"


UCLASS()
class MAMTIPS_API UMAMTipsBPLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	friend class UFGFoliageResourceUserData;

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

	UFUNCTION(BlueprintCallable)
		static UFGFoliageResourceUserData* TEST_GetStaticMesh_FoliageResourceUserData(UStaticMesh* inMesh);

	//UFUNCTION(BlueprintCallable)
	//	static UFGFoliageResourceUserData* TEST_CastAssetDataToFG(UAssetUserData* assetData);

	UFUNCTION(BlueprintCallable)
		static const TArray<FItemDropWithChance>& TEST_GetAssetUserData_Drops(UFGFoliageResourceUserData* inData);

	UFUNCTION(BlueprintCallable)
		static bool TEST_HasFoliageIdentifier(UFGFoliageResourceUserData* inData, TSubclassOf< class UFGFoliageIdentifier > identifier);

	UFUNCTION(BlueprintCallable)
		static void TEST_GetItemDropWithChanceData(FItemDropWithChance inData, float& out_DropChance, TSubclassOf<class UFGItemDescriptor>& out_ItemClass, int32& out_Min, int32& out_Max);
};
