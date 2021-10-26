// BlueprintGeneratedClass BTService_Bot_AquireRandomStationTarget.BTService_Bot_AquireRandomStationTarget_C
// Size: 0xb8 (Inherited: 0x98)
struct UBTService_Bot_AquireRandomStationTarget_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	struct FName InteractTarget; // 0xa0(0x08)
	struct TArray<struct AActor*> StationActors; // 0xa8(0x10)

	void ReceiveTick(struct AActor* ownerActor, float DeltaSeconds); // Function BTService_Bot_AquireRandomStationTarget.BTService_Bot_AquireRandomStationTarget_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_BTService_Bot_AquireRandomStationTarget(int32_t EntryPoint); // Function BTService_Bot_AquireRandomStationTarget.BTService_Bot_AquireRandomStationTarget_C.ExecuteUbergraph_BTService_Bot_AquireRandomStationTarget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

