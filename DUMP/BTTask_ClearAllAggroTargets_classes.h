// BlueprintGeneratedClass BTTask_ClearAllAggroTargets.BTTask_ClearAllAggroTargets_C
// Size: 0xc0 (Inherited: 0xa8)
struct UBTTask_ClearAllAggroTargets_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct TArray<struct FBlackboardKeySelector> KeysToClear; // 0xb0(0x10)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTask_ClearAllAggroTargets.BTTask_ClearAllAggroTargets_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_BTTask_ClearAllAggroTargets(int32_t EntryPoint); // Function BTTask_ClearAllAggroTargets.BTTask_ClearAllAggroTargets_C.ExecuteUbergraph_BTTask_ClearAllAggroTargets // (Final|UbergraphFunction) // @ game+0x1e02480
};

