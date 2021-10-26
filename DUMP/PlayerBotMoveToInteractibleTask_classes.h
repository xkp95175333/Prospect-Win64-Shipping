// BlueprintGeneratedClass PlayerBotMoveToInteractibleTask.PlayerBotMoveToInteractibleTask_C
// Size: 0x1f8 (Inherited: 0xa8)
struct UPlayerBotMoveToInteractibleTask_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	int32_t counter; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct AActor* Owner; // 0xb8(0x08)
	struct FName InteractTarget; // 0xc0(0x08)
	struct FName IsCombatTargetClose; // 0xc8(0x08)
	struct UYObjectInteractionComponent* interactComponent; // 0xd0(0x08)
	struct FName TimeStampNoWaypoint; // 0xd8(0x08)
	struct AActor* ownerActor; // 0xe0(0x08)
	struct APRO_PlayerController_C* PROPlayerController; // 0xe8(0x08)
	struct AActor* InteractTargetActor; // 0xf0(0x08)
	struct FYDealtDamageData NewVar_1; // 0xf8(0x100)

	void ReceiveExecute(struct AActor* ownerActor); // Function PlayerBotMoveToInteractibleTask.PlayerBotMoveToInteractibleTask_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_PlayerBotMoveToInteractibleTask(int32_t EntryPoint); // Function PlayerBotMoveToInteractibleTask.PlayerBotMoveToInteractibleTask_C.ExecuteUbergraph_PlayerBotMoveToInteractibleTask // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

