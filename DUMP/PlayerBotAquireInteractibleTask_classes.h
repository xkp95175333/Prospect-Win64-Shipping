// BlueprintGeneratedClass PlayerBotAquireInteractibleTask.PlayerBotAquireInteractibleTask_C
// Size: 0x128 (Inherited: 0xa8)
struct UPlayerBotAquireInteractibleTask_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	int32_t counter; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct AActor* Owner; // 0xb8(0x08)
	struct FName InteractTarget; // 0xc0(0x08)
	float ClosestDist; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct AActor* ClosestActor; // 0xd0(0x08)
	struct FString debugStr; // 0xd8(0x10)
	struct FName SelfActor; // 0xe8(0x08)
	float ClosestDistIn; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct TArray<struct AActor*> closeInteractibles; // 0xf8(0x10)
	bool foundAny; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct TArray<struct AActor*> AllInteractable; // 0x110(0x10)
	struct FName IdleMoveToLocation; // 0x120(0x08)

	void ReceiveExecute(struct AActor* ownerActor); // Function PlayerBotAquireInteractibleTask.PlayerBotAquireInteractibleTask_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_PlayerBotAquireInteractibleTask(int32_t EntryPoint); // Function PlayerBotAquireInteractibleTask.PlayerBotAquireInteractibleTask_C.ExecuteUbergraph_PlayerBotAquireInteractibleTask // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

