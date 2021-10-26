// BlueprintGeneratedClass BTTask_FinishMontage.BTTask_FinishMontage_C
// Size: 0x140 (Inherited: 0x110)
struct UBTTask_FinishMontage_C : UYBTTask_PlayAnimation {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x110(0x08)
	struct FBlackboardKeySelector MustFinishMontage; // 0x118(0x28)

	struct UAnimMontage* GetAnimationToPlay(bool allowPhysicsRotationDuringAnimation, bool finishNodeSuccesfullyIfNoAnimIsProvided); // Function BTTask_FinishMontage.BTTask_FinishMontage_C.GetAnimationToPlay // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTask_FinishMontage.BTTask_FinishMontage_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_OnNodeEnds(bool succeeded); // Function BTTask_FinishMontage.BTTask_FinishMontage_C.BP_OnNodeEnds // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_BTTask_FinishMontage(int32_t EntryPoint); // Function BTTask_FinishMontage.BTTask_FinishMontage_C.ExecuteUbergraph_BTTask_FinishMontage // (Final|UbergraphFunction) // @ game+0x1e02480
};

