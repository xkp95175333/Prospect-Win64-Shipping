// BlueprintGeneratedClass BTTask_HandleResetFailure.BTTask_HandleResetFailure_C
// Size: 0x111 (Inherited: 0xa8)
struct UBTTask_HandleResetFailure_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector KeyHomeLocation; // 0xb0(0x28)
	struct UYPathFollowingComponent* PathFollowingComponent; // 0xd8(0x08)
	struct APawn* ControlledPawn; // 0xe0(0x08)
	struct AAIController* Controller; // 0xe8(0x08)
	struct FString SquadString; // 0xf0(0x10)
	struct FString MontageString; // 0x100(0x10)
	bool CanPathfindToHomeLoc; // 0x110(0x01)

	void CreateLocationInfoString(struct FVector Location, struct FString Result); // Function BTTask_HandleResetFailure.BTTask_HandleResetFailure_C.CreateLocationInfoString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTask_HandleResetFailure.BTTask_HandleResetFailure_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_BTTask_HandleResetFailure(int32_t EntryPoint); // Function BTTask_HandleResetFailure.BTTask_HandleResetFailure_C.ExecuteUbergraph_BTTask_HandleResetFailure // (Final|UbergraphFunction) // @ game+0x1e02480
};

