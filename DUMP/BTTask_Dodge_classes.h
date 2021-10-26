// BlueprintGeneratedClass BTTask_Dodge.BTTask_Dodge_C
// Size: 0x168 (Inherited: 0x110)
struct UBTTask_Dodge_C : UYBTTask_PlayAnimation {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x110(0x08)
	struct FBlackboardKeySelector KeyTimeDodgeFinished; // 0x118(0x28)
	struct FBlackboardKeySelector KeyDodgeMontage; // 0x140(0x28)

	struct UAnimMontage* GetAnimationToPlay(bool allowPhysicsRotationDuringAnimation, bool finishNodeSuccesfullyIfNoAnimIsProvided); // Function BTTask_Dodge.BTTask_Dodge_C.GetAnimationToPlay // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTask_Dodge.BTTask_Dodge_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_OnNodeEnds(bool succeeded); // Function BTTask_Dodge.BTTask_Dodge_C.BP_OnNodeEnds // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_BTTask_Dodge(int32_t EntryPoint); // Function BTTask_Dodge.BTTask_Dodge_C.ExecuteUbergraph_BTTask_Dodge // (Final|UbergraphFunction) // @ game+0x1e02480
};

