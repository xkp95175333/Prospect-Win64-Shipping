// BlueprintGeneratedClass PlayerBotMoveToTargetTask.PlayerBotMoveToTargetTask_C
// Size: 0xe0 (Inherited: 0xa8)
struct UPlayerBotMoveToTargetTask_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	int32_t counter; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct AActor* Owner; // 0xb8(0x08)
	struct FName combatTarget; // 0xc0(0x08)
	struct FName IsCombatTargetClose; // 0xc8(0x08)
	struct AYPlayerController* YPlayerController; // 0xd0(0x08)
	struct AActor* ownerActor; // 0xd8(0x08)

	void ReceiveExecute(struct AActor* ownerActor); // Function PlayerBotMoveToTargetTask.PlayerBotMoveToTargetTask_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_PlayerBotMoveToTargetTask(int32_t EntryPoint); // Function PlayerBotMoveToTargetTask.PlayerBotMoveToTargetTask_C.ExecuteUbergraph_PlayerBotMoveToTargetTask // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

