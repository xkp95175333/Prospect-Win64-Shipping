// BlueprintGeneratedClass BTDecorator_SetAIState.BTDecorator_SetAIState_C
// Size: 0xd8 (Inherited: 0xa0)
struct UBTDecorator_SetAIState_C : UBTDecorator_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	enum class EYAIState NewAIState; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FBlackboardKeySelector AIStateKey; // 0xb0(0x28)

	bool PerformConditionCheck(struct AActor* ownerActor); // Function BTDecorator_SetAIState.BTDecorator_SetAIState_C.PerformConditionCheck // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveExecutionStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTDecorator_SetAIState.BTDecorator_SetAIState_C.ReceiveExecutionStartAI // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_BTDecorator_SetAIState(int32_t EntryPoint); // Function BTDecorator_SetAIState.BTDecorator_SetAIState_C.ExecuteUbergraph_BTDecorator_SetAIState // (Final|UbergraphFunction) // @ game+0x1e02480
};

