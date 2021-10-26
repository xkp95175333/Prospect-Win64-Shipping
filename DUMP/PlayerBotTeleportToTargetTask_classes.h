// BlueprintGeneratedClass PlayerBotTeleportToTargetTask.PlayerBotTeleportToTargetTask_C
// Size: 0xd8 (Inherited: 0xa8)
struct UPlayerBotTeleportToTargetTask_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FName IsCombatTargetClose; // 0xb0(0x08)
	struct AYPlayerController* YPlayerController; // 0xb8(0x08)
	struct AActor* ownerActor; // 0xc0(0x08)
	struct FName InteractTarget; // 0xc8(0x08)
	struct FName TimeStampLastTP; // 0xd0(0x08)

	void ReceiveExecute(struct AActor* ownerActor); // Function PlayerBotTeleportToTargetTask.PlayerBotTeleportToTargetTask_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_PlayerBotTeleportToTargetTask(int32_t EntryPoint); // Function PlayerBotTeleportToTargetTask.PlayerBotTeleportToTargetTask_C.ExecuteUbergraph_PlayerBotTeleportToTargetTask // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

