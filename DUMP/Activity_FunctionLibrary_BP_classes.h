// BlueprintGeneratedClass Activity_FunctionLibrary_BP.Activity_FunctionLibrary_BP_C
// Size: 0x28 (Inherited: 0x28)
struct UActivity_FunctionLibrary_BP_C : UBlueprintFunctionLibrary {

	struct AYActivityActorManager* GetActivityByType(enum class EYActivityType activityType, struct UObject* __WorldContext); // Function Activity_FunctionLibrary_BP.Activity_FunctionLibrary_BP_C.GetActivityByType // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GenerateBugItGoStringForActor(struct AActor* Actor, struct UObject* __WorldContext, struct FString BugItGoString); // Function Activity_FunctionLibrary_BP.Activity_FunctionLibrary_BP_C.GenerateBugItGoStringForActor // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void FindDropLocation(struct AYPlayerCharacter* Pawn, struct UObject* __WorldContext, struct FVector Location); // Function Activity_FunctionLibrary_BP.Activity_FunctionLibrary_BP_C.FindDropLocation // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetGenericActivityBIData(struct AActor* Actor, struct UObject* __WorldContext, int32_t PositionX, int32_t PositionY, int32_t TimeSinceMatchStart); // Function Activity_FunctionLibrary_BP.Activity_FunctionLibrary_BP_C.GetGenericActivityBIData // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1e02480
};

