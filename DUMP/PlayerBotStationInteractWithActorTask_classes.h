// BlueprintGeneratedClass PlayerBotStationInteractWithActorTask.PlayerBotStationInteractWithActorTask_C
// Size: 0xe0 (Inherited: 0xa8)
struct UPlayerBotStationInteractWithActorTask_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct AActor* Owner; // 0xb0(0x08)
	struct FName InteractTarget; // 0xb8(0x08)
	struct APRO_PlayerController_C* PROPlayerController; // 0xc0(0x08)
	struct FName IsCombatTargetClose; // 0xc8(0x08)
	struct FName TimeStampLastTP; // 0xd0(0x08)
	struct UBlackboardComponent* Blackboard; // 0xd8(0x08)

	void ReceiveExecute(struct AActor* ownerActor); // Function PlayerBotStationInteractWithActorTask.PlayerBotStationInteractWithActorTask_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_PlayerBotStationInteractWithActorTask(int32_t EntryPoint); // Function PlayerBotStationInteractWithActorTask.PlayerBotStationInteractWithActorTask_C.ExecuteUbergraph_PlayerBotStationInteractWithActorTask // (Final|UbergraphFunction) // @ game+0x1e02480
};

