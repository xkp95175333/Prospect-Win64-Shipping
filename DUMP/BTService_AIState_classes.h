// BlueprintGeneratedClass BTService_AIState.BTService_AIState_C
// Size: 0xd0 (Inherited: 0x98)
struct UBTService_AIState_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	enum class EYAIState NewAIState; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FBlackboardKeySelector AIStateKey; // 0xa8(0x28)

	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTService_AIState.BTService_AIState_C.ReceiveActivationAI // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_BTService_AIState(int32_t EntryPoint); // Function BTService_AIState.BTService_AIState_C.ExecuteUbergraph_BTService_AIState // (Final|UbergraphFunction) // @ game+0x1e02480
};

