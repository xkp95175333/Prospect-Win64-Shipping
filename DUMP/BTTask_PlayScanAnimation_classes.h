// BlueprintGeneratedClass BTTask_PlayScanAnimation.BTTask_PlayScanAnimation_C
// Size: 0x118 (Inherited: 0x110)
struct UBTTask_PlayScanAnimation_C : UYBTTask_PlayAnimation {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x110(0x08)

	struct UAnimMontage* GetAnimationToPlay(bool allowPhysicsRotationDuringAnimation, bool finishNodeSuccesfullyIfNoAnimIsProvided); // Function BTTask_PlayScanAnimation.BTTask_PlayScanAnimation_C.GetAnimationToPlay // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTask_PlayScanAnimation.BTTask_PlayScanAnimation_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_BTTask_PlayScanAnimation(int32_t EntryPoint); // Function BTTask_PlayScanAnimation.BTTask_PlayScanAnimation_C.ExecuteUbergraph_BTTask_PlayScanAnimation // (Final|UbergraphFunction) // @ game+0x1e02480
};

