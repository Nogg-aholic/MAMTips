#include "MAMTipsBPLib.h"
#include "MAMTips.h"
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
