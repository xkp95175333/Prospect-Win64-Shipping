// BlueprintGeneratedClass BTService_ResetCheck.BTService_ResetCheck_C
// Size: 0x104 (Inherited: 0x98)
struct UBTService_ResetCheck_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	struct FBlackboardKeySelector KeyWantsToReset; // 0xa0(0x28)
	struct FBlackboardKeySelector KeyHomeLocation; // 0xc8(0x28)
	struct FVector LastLocationChecked; // 0xf0(0x0c)
	float LastTimeChecked; // 0xfc(0x04)
	float LastDistanceResultChecked; // 0x100(0x04)

	void DetermineBugItGoString(struct FVector Location, struct FString Result); // Function BTService_ResetCheck.BTService_ResetCheck_C.DetermineBugItGoString // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void Get BehaviorInfoStringFromCharacter(struct AActor* ControlledActor, struct FString Result); // Function BTService_ResetCheck.BTService_ResetCheck_C.Get BehaviorInfoStringFromCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetBlackboardInfoString(struct AActor* ControlledActor, struct FString Result); // Function BTService_ResetCheck.BTService_ResetCheck_C.GetBlackboardInfoString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void DoResetCheck(struct UObject* Object); // Function BTService_ResetCheck.BTService_ResetCheck_C.DoResetCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTService_ResetCheck.BTService_ResetCheck_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_BTService_ResetCheck(int32_t EntryPoint); // Function BTService_ResetCheck.BTService_ResetCheck_C.ExecuteUbergraph_BTService_ResetCheck // (Final|UbergraphFunction) // @ game+0x1e02480
};

