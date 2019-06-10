#pragma once

#include "MyFSLib.generated.h"

UCLASS()
class UMyFSLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = Test)
	static void Test();
};