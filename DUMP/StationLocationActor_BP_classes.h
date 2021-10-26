// BlueprintGeneratedClass StationLocationActor_BP.StationLocationActor_BP_C
// Size: 0x2a0 (Inherited: 0x288)
struct AStationLocationActor_BP_C : AYStationLocationActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	bool IsSpeaking; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct USoundBase* VO_Line; // 0x298(0x08)

	void ReceiveBeginPlay(); // Function StationLocationActor_BP.StationLocationActor_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void VO_NPC(); // Function StationLocationActor_BP.StationLocationActor_BP_C.VO_NPC // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_StationLocationActor_BP(int32_t EntryPoint); // Function StationLocationActor_BP.StationLocationActor_BP_C.ExecuteUbergraph_StationLocationActor_BP // (Final|UbergraphFunction) // @ game+0x1e02480
};

