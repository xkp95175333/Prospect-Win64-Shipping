// BlueprintGeneratedClass BTTask_ClearKeys.BTTask_ClearKeys_C
// Size: 0xc0 (Inherited: 0xa8)
struct UBTTask_ClearKeys_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct TArray<struct FBlackboardKeySelector> KeysToClear; // 0xb0(0x10)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTask_ClearKeys.BTTask_ClearKeys_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_BTTask_ClearKeys(int32_t EntryPoint); // Function BTTask_ClearKeys.BTTask_ClearKeys_C.ExecuteUbergraph_BTTask_ClearKeys // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

