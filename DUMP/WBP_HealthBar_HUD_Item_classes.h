// WidgetBlueprintGeneratedClass WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C
// Size: 0x2b8 (Inherited: 0x260)
struct UWBP_HealthBar_HUD_Item_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* HitFlash_AI; // 0x268(0x08)
	struct UWidgetAnimation* HitFlash; // 0x270(0x08)
	struct UProgressBar* HealthBarProgress_Delta; // 0x278(0x08)
	struct UProgressBar* HealthProgressBar; // 0x280(0x08)
	struct UYCharacterDBNOComponent* dbnoComp; // 0x288(0x08)
	float HealthTimeLeftUntilProgressDeltaStarts; // 0x290(0x04)
	float ShieldTimeLeftUntilProgressDeltaStarts; // 0x294(0x04)
	struct AYCharacter* Character; // 0x298(0x08)
	bool UseAIColorScheme; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct AActor* ActorOwner; // 0x2a8(0x08)
	float LastTImeDeltaBarTicked; // 0x2b0(0x04)
	float TimeThresholdSinceLastUpdateToResetDeltaProgression; // 0x2b4(0x04)

	void HealthDataChangedDelegate(struct FYHealthDataTableRow HealthData); // Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.HealthDataChangedDelegate // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void InitializeHealthBar(struct AActor* ActorOwner); // Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.InitializeHealthBar // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateDeltaBarVisibility(); // Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.UpdateDeltaBarVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnTakeDamage(struct FYDealtDamageData Data); // Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.OnTakeDamage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Refresh(); // Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.Refresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnCurrentHealthChanged(float CurrentHealth, struct AActor* Instigator); // Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.OnCurrentHealthChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void TickDeltaBars(float DeltaTime); // Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.TickDeltaBars // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ResetDeltaBars(); // Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.ResetDeltaBars // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_HealthBar_HUD_Item(int32_t EntryPoint); // Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.ExecuteUbergraph_WBP_HealthBar_HUD_Item // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

