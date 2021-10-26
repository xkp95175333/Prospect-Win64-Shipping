// WidgetBlueprintGeneratedClass UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C
// Size: 0x298 (Inherited: 0x260)
struct UUI_PlayerHealthBar_WBP_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct USizeBox* BarContainerSizeBox; // 0x268(0x08)
	struct UProgressBar* DBNOProgressBar; // 0x270(0x08)
	struct UYTextBlock* TextBlock_DBNO; // 0x278(0x08)
	struct UWBP_HealthBar_HUD_Item_C* UI_HealthBarWithDelta_WBP; // 0x280(0x08)
	struct UYCharacterDBNOComponent* dbnoComp; // 0x288(0x08)
	struct AYPlayerCharacter* playerCharacter; // 0x290(0x08)

	void UpdateShowDeltaHealthDueNewDamage(float TimeLeftUntilProgressDeltaStarts_REEFERENCE, struct UProgressBar* ProgressBar_Delta, struct UProgressBar* ProgressBar, float DelayDeltaProgress); // Function UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C.UpdateShowDeltaHealthDueNewDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateDeltaProgress(float DeltaTime, struct UProgressBar* ProgressBar_Delta, struct UProgressBar* ProgressBar, float TimeLeftUntilProgressDeltaStarts_REFERENCE, float AdjustmentSpeed); // Function UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C.UpdateDeltaProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void InitializePlayerHealthBar(struct AYPlayerCharacter* Character); // Function UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C.InitializePlayerHealthBar // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StartDBNO(); // Function UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C.StartDBNO // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void EndDBNO(bool interupted); // Function UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C.EndDBNO // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void CurrentDBNOShieldHealthChangedDelegate(float CurrentHealth, struct AActor* Instigator); // Function UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C.CurrentDBNOShieldHealthChangedDelegate // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_UI_PlayerHealthBar_WBP(int32_t EntryPoint); // Function UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C.ExecuteUbergraph_UI_PlayerHealthBar_WBP // (Final|UbergraphFunction) // @ game+0x1e02480
};

