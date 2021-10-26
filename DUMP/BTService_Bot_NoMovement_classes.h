// BlueprintGeneratedClass BTService_Bot_NoMovement.BTService_Bot_NoMovement_C
// Size: 0xa1 (Inherited: 0x98)
struct UBTService_Bot_NoMovement_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	enum class EYAIState aiState; // 0xa0(0x01)

	void ReceiveTick(struct AActor* ownerActor, float DeltaSeconds); // Function BTService_Bot_NoMovement.BTService_Bot_NoMovement_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_BTService_Bot_NoMovement(int32_t EntryPoint); // Function BTService_Bot_NoMovement.BTService_Bot_NoMovement_C.ExecuteUbergraph_BTService_Bot_NoMovement // (Final|UbergraphFunction) // @ game+0x1e02480
};

