// BlueprintGeneratedClass LightningComponent_BP.LightningComponent_BP_C
// Size: 0x110 (Inherited: 0xb8)
struct ULightningComponent_BP_C : UYLightningComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb8(0x08)
	struct UDataTable* DataTable; // 0xc0(0x08)
	struct TArray<struct ULightningTypeManager_BP_C*> LightningSpawners; // 0xc8(0x10)
	enum class ETraceTypeQuery TraceChannel; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	SoftClassProperty LightningBlueprintClass; // 0xe0(0x28)
	struct AActor* ActorClassLightning; // 0x108(0x08)

	void RefreshSpawners(); // Function LightningComponent_BP.LightningComponent_BP_C.RefreshSpawners // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void TriggerLightning(struct FLightningTuningDataInfo InLightningTuningData, struct FDataTableRowHandle LIghtningTuningRowHandle); // Function LightningComponent_BP.LightningComponent_BP_C.TriggerLightning // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnLoaded_F74E9C45453486E2E848238F70929881(struct UObject* Loaded); // Function LightningComponent_BP.LightningComponent_BP_C.OnLoaded_F74E9C45453486E2E848238F70929881 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function LightningComponent_BP.LightningComponent_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnMatchPhaseChanged(struct FYMatchPhaseData newMatchPhaseData); // Function LightningComponent_BP.LightningComponent_BP_C.OnMatchPhaseChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnLightningDebugChanged(); // Function LightningComponent_BP.LightningComponent_BP_C.OnLightningDebugChanged // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_LightningComponent_BP(int32_t EntryPoint); // Function LightningComponent_BP.LightningComponent_BP_C.ExecuteUbergraph_LightningComponent_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

