// BlueprintGeneratedClass BTTask_FindIdleMoveToLocation.BTTask_FindIdleMoveToLocation_C
// Size: 0x124 (Inherited: 0xa8)
struct UBTTask_FindIdleMoveToLocation_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	float DistanceMax; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FBlackboardKeySelector KeyIdleMoveToLocation; // 0xb8(0x28)
	struct FVector Location; // 0xe0(0x0c)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FBlackboardKeySelector KeyHomeLocation; // 0xf0(0x28)
	struct FVector HomeLocation; // 0x118(0x0c)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTask_FindIdleMoveToLocation.BTTask_FindIdleMoveToLocation_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_BTTask_FindIdleMoveToLocation(int32_t EntryPoint); // Function BTTask_FindIdleMoveToLocation.BTTask_FindIdleMoveToLocation_C.ExecuteUbergraph_BTTask_FindIdleMoveToLocation // (Final|UbergraphFunction) // @ game+0x1e02480
};

