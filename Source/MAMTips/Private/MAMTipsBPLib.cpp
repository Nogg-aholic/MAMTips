#include "MAMTipsBPLib.h"
#include "MAMTips.h"
#include "FGFoliageResourceUserData.h"
#include "Reflection/ClassGenerator.h"

TSubclassOf<UObject> UMAMTipsBPLib::MAMTips_FindOrCreateClass(FString Name, UClass* ParentClass)
{
	// Safety checks before running the generator
	auto found = FindObject<UClass>(FindPackage(nullptr, TEXT("/MAMTips/")), *Name, false);
	if (Name == "") {
		UE_LOG(LogMAMTips, Error, TEXT("Name was empty, can't create class"));
		return nullptr;
	}
	if (found) {
		UE_LOG(LogMAMTips, Warning, TEXT("Class already existed so returning that instead of creating new"));
		return found;
	}
	auto found_C = FindObject<UClass>(FindPackage(nullptr, TEXT("/MAMTips/")), *Name.Append("_C"), false);
	if (found_C) {
		UE_LOG(LogMAMTips, Warning, TEXT("Class already existed with _C suffix so returning that instead of creating new"));
		return found_C;
	}

	return FClassGenerator::GenerateSimpleClass(TEXT("/MAMTips/"), *Name, ParentClass);
}

void UMAMTipsBPLib::MAMTips_SetRecipeProperties(TSubclassOf<class UFGRecipe> recipe, TArray< FItemAmount > mIngredients, TArray< FItemAmount > mProduct, FText mDisplayName) {
	UFGRecipe* CDO = recipe.GetDefaultObject();
	CDO->mDisplayName = mDisplayName;
	CDO->mDisplayNameOverride = true;
	CDO->mIngredients = mIngredients;
	CDO->mProduct = mProduct;
}

UFGFoliageResourceUserData* UMAMTipsBPLib::TEST_GetStaticMesh_FoliageResourceUserData(UStaticMesh* inMesh) {
	auto AssetUserData = inMesh->GetAssetUserDataOfClass(UFGFoliageResourceUserData::StaticClass());
	return Cast<UFGFoliageResourceUserData>(AssetUserData);
}

const TArray<FItemDropWithChance>& UMAMTipsBPLib::TEST_GetAssetUserData_Drops(UFGFoliageResourceUserData* inData) {
	return inData->GetPickupItems();
}

bool UMAMTipsBPLib::TEST_HasFoliageIdentifier(UFGFoliageResourceUserData* inData, TSubclassOf< class UFGFoliageIdentifier > identifier) {
	return inData->IdentifiesWith(identifier);
}

void UMAMTipsBPLib::TEST_GetItemDropWithChanceData(FItemDropWithChance inData, float& out_DropChance, TSubclassOf<class UFGItemDescriptor>& out_ItemClass, int32& out_Min, int32& out_Max) {
	auto ItemDrop = inData.Drop;
	out_DropChance = inData.DropChance;
	out_ItemClass = ItemDrop.ItemClass;
	out_Max = ItemDrop.NumItems.Max;
	out_Min = ItemDrop.NumItems.Min;
}
