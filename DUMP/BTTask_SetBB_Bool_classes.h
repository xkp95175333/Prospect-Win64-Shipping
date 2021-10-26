// BlueprintGeneratedClass BTTask_SetBB_Bool.BTTask_SetBB_Bool_C
// Size: 0xe0 (Inherited: 0xa8)
struct UBTTask_SetBB_Bool_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	bool New Value; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct FBlackboardKeySelector Key Bool; // 0xb8(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTask_SetBB_Bool.BTTask_SetBB_Bool_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_BTTask_SetBB_Bool(int32_t EntryPoint); // Function BTTask_SetBB_Bool.BTTask_SetBB_Bool_C.ExecuteUbergraph_BTTask_SetBB_Bool // (Final|UbergraphFunction) // @ game+0x1e02480
};

