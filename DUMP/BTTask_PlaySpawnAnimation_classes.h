// BlueprintGeneratedClass BTTask_PlaySpawnAnimation.BTTask_PlaySpawnAnimation_C
// Size: 0x140 (Inherited: 0x110)
struct UBTTask_PlaySpawnAnimation_C : UYBTTask_PlayAnimation {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x110(0x08)
	struct FBlackboardKeySelector KeySpawnAnimationPlayed; // 0x118(0x28)

	struct UAnimMontage* GetAnimationToPlay(bool allowPhysicsRotationDuringAnimation, bool finishNodeSuccesfullyIfNoAnimIsProvided); // Function BTTask_PlaySpawnAnimation.BTTask_PlaySpawnAnimation_C.GetAnimationToPlay // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetHasPlayedSpawnAnim(); // Function BTTask_PlaySpawnAnimation.BTTask_PlaySpawnAnimation_C.SetHasPlayedSpawnAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTask_PlaySpawnAnimation.BTTask_PlaySpawnAnimation_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_BTTask_PlaySpawnAnimation(int32_t EntryPoint); // Function BTTask_PlaySpawnAnimation.BTTask_PlaySpawnAnimation_C.ExecuteUbergraph_BTTask_PlaySpawnAnimation // (Final|UbergraphFunction) // @ game+0x1e02480
};

