// BlueprintGeneratedClass PlayerBotCloseAllWidgetsTask.PlayerBotCloseAllWidgetsTask_C
// Size: 0xd0 (Inherited: 0xa8)
struct UPlayerBotCloseAllWidgetsTask_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct AActor* Owner; // 0xb0(0x08)
	struct FName InteractTarget; // 0xb8(0x08)
	struct APRO_PlayerController_C* PROPlayerController; // 0xc0(0x08)
	struct FName IsCombatTargetClose; // 0xc8(0x08)

	void ReceiveExecute(struct AActor* ownerActor); // Function PlayerBotCloseAllWidgetsTask.PlayerBotCloseAllWidgetsTask_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_PlayerBotCloseAllWidgetsTask(int32_t EntryPoint); // Function PlayerBotCloseAllWidgetsTask.PlayerBotCloseAllWidgetsTask_C.ExecuteUbergraph_PlayerBotCloseAllWidgetsTask // (Final|UbergraphFunction) // @ game+0x1e02480
};

