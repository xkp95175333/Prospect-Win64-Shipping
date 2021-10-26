// WidgetBlueprintGeneratedClass AICharacterPlate_WBP.AICharacterPlate_WBP_C
// Size: 0x470 (Inherited: 0x3a8)
struct UAICharacterPlate_WBP_C : UYWidget_ActorPlate {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a8(0x08)
	struct UWidgetAnimation* FadeOutOnDeath; // 0x3b0(0x08)
	struct UWidgetAnimation* FadeIn; // 0x3b8(0x08)
	struct UWidgetAnimation* FadeOut; // 0x3c0(0x08)
	struct UHorizontalBox* buffs; // 0x3c8(0x08)
	struct UCanvasPanel* CanvasPanel_DeathIcon; // 0x3d0(0x08)
	struct UCanvasPanel* ContentHolder; // 0x3d8(0x08)
	struct UImage* EvacIcon; // 0x3e0(0x08)
	struct UImage* HuntIcon; // 0x3e8(0x08)
	struct UHorizontalBox* Top; // 0x3f0(0x08)
	struct UWBP_HealthBar_HUD_Item_C* UI_HealthBarWithDelta_WBP; // 0x3f8(0x08)
	struct FLinearColor Color_Nameplate_Name; // 0x400(0x10)
	struct FString PerkString; // 0x410(0x10)
	struct TArray<struct UUI_ImageBase_WBP_C*> PerkIconContainers; // 0x420(0x10)
	struct TArray<struct TSoftObjectPtr<struct UTexture2D>> activePerkIcons; // 0x430(0x10)
	struct TArray<struct FDataTableRowHandle> AI_RanksToHide; // 0x440(0x10)
	struct FText String_Context; // 0x450(0x18)
	struct UYUserSettings* userSettings; // 0x468(0x08)

	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function AICharacterPlate_WBP.AICharacterPlate_WBP_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_InitializeFor(); // Function AICharacterPlate_WBP.AICharacterPlate_WBP_C.BP_InitializeFor // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_UpdatePerks(); // Function AICharacterPlate_WBP.AICharacterPlate_WBP_C.BP_UpdatePerks // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnCurrentHealthChanged(float CurrentHealth, struct AActor* Instigator); // Function AICharacterPlate_WBP.AICharacterPlate_WBP_C.OnCurrentHealthChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void RefreshGameplayTags(); // Function AICharacterPlate_WBP.AICharacterPlate_WBP_C.RefreshGameplayTags // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function AICharacterPlate_WBP.AICharacterPlate_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_AICharacterPlate_WBP(int32_t EntryPoint); // Function AICharacterPlate_WBP.AICharacterPlate_WBP_C.ExecuteUbergraph_AICharacterPlate_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

