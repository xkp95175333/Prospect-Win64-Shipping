// BlueprintGeneratedClass LightningTypeManager_BP.LightningTypeManager_BP_C
// Size: 0x7c (Inherited: 0x28)
struct ULightningTypeManager_BP_C : UObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x28(0x08)
	struct FLightningTuningDataInfo LightningTuningData; // 0x30(0x20)
	bool IsLightningActive; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct ULightningComponent_BP_C* LightningComponent; // 0x58(0x08)
	struct FDataTableRowHandle LightningRowHandle; // 0x60(0x10)
	struct FTimerHandle TimerHandle_InitialDelay; // 0x70(0x08)
	float CurrentPhaseBlendDuration; // 0x78(0x04)

	void DetermineInitialActivationDelay(float Delay); // Function LightningTypeManager_BP.LightningTypeManager_BP_C.DetermineInitialActivationDelay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetShouldBeActive(struct TArray<struct FDataTableRowHandle> LightningStrikeTypesToBeActive, bool Result); // Function LightningTypeManager_BP.LightningTypeManager_BP_C.GetShouldBeActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetupTimer(); // Function LightningTypeManager_BP.LightningTypeManager_BP_C.SetupTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnTimer(); // Function LightningTypeManager_BP.LightningTypeManager_BP_C.OnTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Initialize(struct FDataTableRowHandle LightningRowHandle); // Function LightningTypeManager_BP.LightningTypeManager_BP_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnInitialTimerElapsed(); // Function LightningTypeManager_BP.LightningTypeManager_BP_C.OnInitialTimerElapsed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StartLightningStrikes(); // Function LightningTypeManager_BP.LightningTypeManager_BP_C.StartLightningStrikes // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StopLightningStrikes(); // Function LightningTypeManager_BP.LightningTypeManager_BP_C.StopLightningStrikes // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetIsLightningStrikesActive(bool IsActive); // Function LightningTypeManager_BP.LightningTypeManager_BP_C.SetIsLightningStrikesActive // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void RefreshIsActiveStatus(struct TArray<struct FDataTableRowHandle> LightningStrikeTypesToBeActive, float CurrentPhaseBlendDuration); // Function LightningTypeManager_BP.LightningTypeManager_BP_C.RefreshIsActiveStatus // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_LightningTypeManager_BP(int32_t EntryPoint); // Function LightningTypeManager_BP.LightningTypeManager_BP_C.ExecuteUbergraph_LightningTypeManager_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

