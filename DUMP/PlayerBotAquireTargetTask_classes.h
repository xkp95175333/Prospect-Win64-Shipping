// BlueprintGeneratedClass PlayerBotAquireTargetTask.PlayerBotAquireTargetTask_C
// Size: 0xfc (Inherited: 0xa8)
struct UPlayerBotAquireTargetTask_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	int32_t counter; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct AActor* Owner; // 0xb8(0x08)
	struct FName combatTarget; // 0xc0(0x08)
	float ClosestDist; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct AActor* ClosestActor; // 0xd0(0x08)
	struct FString debugStr; // 0xd8(0x10)
	struct FName SelfActor; // 0xe8(0x08)
	float ClosestDistIn; // 0xf0(0x04)
	struct FName InteractTarget; // 0xf4(0x08)

	void ReceiveExecute(struct AActor* ownerActor); // Function PlayerBotAquireTargetTask.PlayerBotAquireTargetTask_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_PlayerBotAquireTargetTask(int32_t EntryPoint); // Function PlayerBotAquireTargetTask.PlayerBotAquireTargetTask_C.ExecuteUbergraph_PlayerBotAquireTargetTask // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

