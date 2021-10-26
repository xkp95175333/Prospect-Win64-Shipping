// BlueprintGeneratedClass BTService_Bot_AquireCloseTarget.BTService_Bot_AquireCloseTarget_C
// Size: 0xc0 (Inherited: 0x98)
struct UBTService_Bot_AquireCloseTarget_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	enum class EYAIState aiState; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float ClosestDist; // 0xa4(0x04)
	float MaxTargetDist; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct AActor* ClosestActor; // 0xb0(0x08)
	struct FName combatTarget; // 0xb8(0x08)

	void ReceiveTick(struct AActor* ownerActor, float DeltaSeconds); // Function BTService_Bot_AquireCloseTarget.BTService_Bot_AquireCloseTarget_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_BTService_Bot_AquireCloseTarget(int32_t EntryPoint); // Function BTService_Bot_AquireCloseTarget.BTService_Bot_AquireCloseTarget_C.ExecuteUbergraph_BTService_Bot_AquireCloseTarget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

