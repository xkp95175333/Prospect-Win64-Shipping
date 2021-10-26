// BlueprintGeneratedClass BTTask_SetAIReactionContext.BTTask_SetAIReactionContext_C
// Size: 0xb1 (Inherited: 0xa8)
struct UBTTask_SetAIReactionContext_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	enum class EYAIReactionContext AIReactionState; // 0xb0(0x01)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTask_SetAIReactionContext.BTTask_SetAIReactionContext_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_BTTask_SetAIReactionContext(int32_t EntryPoint); // Function BTTask_SetAIReactionContext.BTTask_SetAIReactionContext_C.ExecuteUbergraph_BTTask_SetAIReactionContext // (Final|UbergraphFunction) // @ game+0x1e02480
};

