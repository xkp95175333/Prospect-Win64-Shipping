// BlueprintGeneratedClass BTTask_ShareSense.BTTask_ShareSense_C
// Size: 0xe0 (Inherited: 0xa8)
struct UBTTask_ShareSense_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	float Distance; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FBlackboardKeySelector TargetKey; // 0xb8(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTask_ShareSense.BTTask_ShareSense_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_BTTask_ShareSense(int32_t EntryPoint); // Function BTTask_ShareSense.BTTask_ShareSense_C.ExecuteUbergraph_BTTask_ShareSense // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

