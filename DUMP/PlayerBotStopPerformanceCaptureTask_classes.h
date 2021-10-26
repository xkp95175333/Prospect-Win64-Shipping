// BlueprintGeneratedClass PlayerBotStopPerformanceCaptureTask.PlayerBotStopPerformanceCaptureTask_C
// Size: 0x100 (Inherited: 0xa8)
struct UPlayerBotStopPerformanceCaptureTask_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FString playerRotation; // 0xb0(0x10)
	struct FString PlayerPosition; // 0xc0(0x10)
	struct FString playerGamemode; // 0xd0(0x10)
	struct TArray<struct FString> questsArray; // 0xe0(0x10)
	struct FString playerQuests; // 0xf0(0x10)

	void ReceiveExecute(struct AActor* ownerActor); // Function PlayerBotStopPerformanceCaptureTask.PlayerBotStopPerformanceCaptureTask_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_PlayerBotStopPerformanceCaptureTask(int32_t EntryPoint); // Function PlayerBotStopPerformanceCaptureTask.PlayerBotStopPerformanceCaptureTask_C.ExecuteUbergraph_PlayerBotStopPerformanceCaptureTask // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

