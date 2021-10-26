// BlueprintGeneratedClass PlayerBotAimAtTargetTask.PlayerBotAimAtTargetTask_C
// Size: 0xf8 (Inherited: 0xa8)
struct UPlayerBotAimAtTargetTask_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FName combatTarget; // 0xb0(0x08)
	struct FVector2D maxAngleError; // 0xb8(0x08)
	struct FVector2D maxAngleLongRange; // 0xc0(0x08)
	struct FVector2D maxAngleShortRange; // 0xc8(0x08)
	struct FName InteractTarget; // 0xd0(0x08)
	struct UObject* targetActor; // 0xd8(0x08)
	struct FName TimeStampLastTP; // 0xe0(0x08)
	struct UBlackboardComponent* Blackboard; // 0xe8(0x08)
	struct FName IsCombatTargetClose; // 0xf0(0x08)

	void ReceiveExecute(struct AActor* ownerActor); // Function PlayerBotAimAtTargetTask.PlayerBotAimAtTargetTask_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_PlayerBotAimAtTargetTask(int32_t EntryPoint); // Function PlayerBotAimAtTargetTask.PlayerBotAimAtTargetTask_C.ExecuteUbergraph_PlayerBotAimAtTargetTask // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

