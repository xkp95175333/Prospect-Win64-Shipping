// BlueprintGeneratedClass BTService_PlayBark.BTService_PlayBark_C
// Size: 0xc8 (Inherited: 0x98)
struct UBTService_PlayBark_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	bool UseIdleBark; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FYAIBarkAudioInfo BarkDataCached; // 0xa8(0x18)
	float LastTimeBarked; // 0xc0(0x04)
	float NextTimeAllowedToBark; // 0xc4(0x04)

	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTService_PlayBark.BTService_PlayBark_C.ReceiveActivationAI // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ReceiveTick(struct AActor* ownerActor, float DeltaSeconds); // Function BTService_PlayBark.BTService_PlayBark_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void TryPlayBark(); // Function BTService_PlayBark.BTService_PlayBark_C.TryPlayBark // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_BTService_PlayBark(int32_t EntryPoint); // Function BTService_PlayBark.BTService_PlayBark_C.ExecuteUbergraph_BTService_PlayBark // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

