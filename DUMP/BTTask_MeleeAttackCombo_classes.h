// BlueprintGeneratedClass BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C
// Size: 0xd9 (Inherited: 0xa8)
struct UBTTask_MeleeAttackCombo_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct UAnimMontage* AttackMontage; // 0xb0(0x08)
	struct AYAICharacter* aiCharacter; // 0xb8(0x08)
	struct AYAIController* AIController; // 0xc0(0x08)
	struct FName MontageSectionToPlay; // 0xc8(0x08)
	struct UAnimMontage* MontageToPlay; // 0xd0(0x08)
	bool wasAborted; // 0xd8(0x01)

	void CleanUp(); // Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.CleanUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UnbindMontageDelegates(); // Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.UnbindMontageDelegates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BindMontageDelegates(); // Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.BindMontageDelegates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnMontageEndedOrBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.OnMontageEndedOrBlendingOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void FindPossibleComboMontage(struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> possibleComboMontages, bool foundComboMontage); // Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.FindPossibleComboMontage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void OnComboWindowStarted(); // Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.OnComboWindowStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PlayNextMontage(); // Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.PlayNextMontage // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_BTTask_MeleeAttackCombo(int32_t EntryPoint); // Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.ExecuteUbergraph_BTTask_MeleeAttackCombo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

