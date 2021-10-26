// BlueprintGeneratedClass PlayerBotUpdateTargetVisibilityTask.PlayerBotUpdateTargetVisibilityTask_C
// Size: 0xc8 (Inherited: 0xa8)
struct UPlayerBotUpdateTargetVisibilityTask_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FName combatTarget; // 0xb0(0x08)
	struct FName IsCombatTargetVisible; // 0xb8(0x08)
	struct UBlackboardComponent* BlackboardComponent; // 0xc0(0x08)

	void ReceiveExecute(struct AActor* ownerActor); // Function PlayerBotUpdateTargetVisibilityTask.PlayerBotUpdateTargetVisibilityTask_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_PlayerBotUpdateTargetVisibilityTask(int32_t EntryPoint); // Function PlayerBotUpdateTargetVisibilityTask.PlayerBotUpdateTargetVisibilityTask_C.ExecuteUbergraph_PlayerBotUpdateTargetVisibilityTask // (Final|UbergraphFunction) // @ game+0x1e02480
};

