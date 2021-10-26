// BlueprintGeneratedClass PlayerBotFireTaskNoTP.PlayerBotFireTaskNoTP_C
// Size: 0xd4 (Inherited: 0xa8)
struct UPlayerBotFireTaskNoTP_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	int32_t counter; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct AActor* Owner; // 0xb8(0x08)
	float FireTimeout; // 0xc0(0x04)
	struct FName TimeStampStartFire; // 0xc4(0x08)
	struct FName combatTarget; // 0xcc(0x08)

	void ReceiveExecute(struct AActor* ownerActor); // Function PlayerBotFireTaskNoTP.PlayerBotFireTaskNoTP_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_PlayerBotFireTaskNoTP(int32_t EntryPoint); // Function PlayerBotFireTaskNoTP.PlayerBotFireTaskNoTP_C.ExecuteUbergraph_PlayerBotFireTaskNoTP // (Final|UbergraphFunction) // @ game+0x1e02480
};

