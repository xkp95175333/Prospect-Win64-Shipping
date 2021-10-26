// BlueprintGeneratedClass BTTask_PlayMontageAnimation.BTTask_PlayMontageAnimation_C
// Size: 0x121 (Inherited: 0x110)
struct UBTTask_PlayMontageAnimation_C : UYBTTask_PlayAnimation {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x110(0x08)
	struct UAnimMontage* PlayMontage; // 0x118(0x08)
	bool Allow Physics Rotation During Animation; // 0x120(0x01)

	struct UAnimMontage* GetAnimationToPlay(bool allowPhysicsRotationDuringAnimation, bool finishNodeSuccesfullyIfNoAnimIsProvided); // Function BTTask_PlayMontageAnimation.BTTask_PlayMontageAnimation_C.GetAnimationToPlay // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTask_PlayMontageAnimation.BTTask_PlayMontageAnimation_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_BTTask_PlayMontageAnimation(int32_t EntryPoint); // Function BTTask_PlayMontageAnimation.BTTask_PlayMontageAnimation_C.ExecuteUbergraph_BTTask_PlayMontageAnimation // (Final|UbergraphFunction) // @ game+0x1e02480
};

