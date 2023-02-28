#include "MAMTipsBPLib.h"
#include "MAMTips.h"

TSubclassOf<UObject> UMAMTipsBPLib::MAMTips_FindOrCreateClass(FString Name, UClass* ParentClass)
{
	auto found = FindObject<UClass>(ANY_PACKAGE, *Name, false);
	auto found_C = FindObject<UClass>(ANY_PACKAGE, *Name.Append("_C"), false);
	if (Name == "") {
		UE_LOG(LogMAMTips, Error, TEXT("Name was empty, can't create class"));
		return nullptr;
	}
	if (found) {
		UE_LOG(LogMAMTips, Warning, TEXT("Class already existed so returning that instead of creating new"));
		return found;
	}
	if (found_C) {
		UE_LOG(LogMAMTips, Warning, TEXT("Class already existed with _C suffix so returning that instead of creating new"));
		return found_C;
	}

	// The below is unmodified from ContentLib

	const EClassFlags ParamsClassFlags = CLASS_Native | CLASS_MatchedSerializers;
	//Code below is taken from GetPrivateStaticClassBody
	//Allocate memory from ObjectAllocator for class object and call class constructor directly
	UClass* ConstructedClassObject = (UClass*)GUObjectAllocator.AllocateUObject(
		sizeof(UDynamicClass), alignof(UDynamicClass), true);
	::new(ConstructedClassObject)UDynamicClass(
		EC_StaticConstructor,
		*Name,
		ParentClass->GetStructureSize(),
		ParentClass->GetMinAlignment(),
		CLASS_Intrinsic,
		CASTCLASS_None,
		UObject::StaticConfigName(),
		EObjectFlags(RF_Public | RF_Standalone | RF_Transient | RF_MarkAsNative | RF_MarkAsRootSet),
		ParentClass->ClassConstructor,
		ParentClass->ClassVTableHelperCtorCaller,
		ParentClass->ClassAddReferencedObjects, nullptr);

	//Set super structure and ClassWithin (they are required prior to registering)
	FCppClassTypeInfoStatic TypeInfoStatic = { false };
	ConstructedClassObject->SetSuperStruct(ParentClass);
	ConstructedClassObject->ClassWithin = UObject::StaticClass();
	ConstructedClassObject->SetCppTypeInfoStatic(&TypeInfoStatic);
#if WITH_EDITOR
	//Field with cpp type info only exists in editor, in shipping SetCppTypeInfoStatic is empty
	ConstructedClassObject->SetCppTypeInfoStatic(&TypeInfoStatic);
#endif
	//Register pending object, apply class flags, set static type info and link it
	ConstructedClassObject->RegisterDependencies();

	ConstructedClassObject->DeferredRegister(UDynamicClass::StaticClass(), TEXT("/MAMTips/"), *Name);

	//Mark class as Constructed and perform linking
	ConstructedClassObject->ClassFlags |= (EClassFlags)(ParamsClassFlags | CLASS_Constructed);
	ConstructedClassObject->AssembleReferenceTokenStream(true);
	ConstructedClassObject->StaticLink();

	//Make sure default class object is initialized
	ConstructedClassObject->GetDefaultObject();
	return ConstructedClassObject;
}

void UMAMTipsBPLib::MAMTips_SetRecipeProperties(TSubclassOf<class UFGRecipe> recipe, TArray< FItemAmount > mIngredients, TArray< FItemAmount > mProduct, FText mDisplayName) {
	UFGRecipe* CDO = recipe.GetDefaultObject();
	CDO->mDisplayName = mDisplayName;
	CDO->mDisplayNameOverride = true;
	CDO->mIngredients = mIngredients;
	CDO->mProduct = mProduct;
}