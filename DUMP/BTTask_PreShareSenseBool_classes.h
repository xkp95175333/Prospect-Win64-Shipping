// BlueprintGeneratedClass BTTask_PreShareSenseBool.BTTask_PreShareSenseBool_C
// Size: 0xe0 (Inherited: 0xa8)
struct UBTTask_PreShareSenseBool_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	float Distance; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FBlackboardKeySelector WillShareSense Key; // 0xb8(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTask_PreShareSenseBool.BTTask_PreShareSenseBool_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_BTTask_PreShareSenseBool(int32_t EntryPoint); // Function BTTask_PreShareSenseBool.BTTask_PreShareSenseBool_C.ExecuteUbergraph_BTTask_PreShareSenseBool // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

