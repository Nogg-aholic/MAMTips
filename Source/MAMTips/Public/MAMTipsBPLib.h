

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MAMTipsBPLib.generated.h"


DECLARE_DYNAMIC_DELEGATE_OneParam(FOnWidgetCreated, UUserWidget*, Widget);

/**
 * 
 */
UCLASS()
class MAMTIPS_API UMAMTipsBPLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable)
	static void BindOnWidgetConstruct(const TSubclassOf<UUserWidget> WidgetClass, FOnWidgetCreated Binding);

	static FOnWidgetCreated OnWidgetCreated;
};
