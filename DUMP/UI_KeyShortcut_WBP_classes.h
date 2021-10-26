// WidgetBlueprintGeneratedClass UI_KeyShortcut_WBP.UI_KeyShortcut_WBP_C
// Size: 0x300 (Inherited: 0x260)
struct UUI_KeyShortcut_WBP_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* m_background; // 0x268(0x08)
	struct UYTextBlock* TextBlock_Hold; // 0x270(0x08)
	struct UTextBlock* TextBlock_Key; // 0x278(0x08)
	struct FText keyText; // 0x280(0x18)
	bool ShowHoldHint; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct FDataTableRowHandle InputActions; // 0x2a0(0x10)
	struct TMap<struct FKey, struct FText> KeyToTextMap; // 0x2b0(0x50)

	void GetLocalizedKeyText(struct FKey Key, struct FText Text); // Function UI_KeyShortcut_WBP.UI_KeyShortcut_WBP_C.GetLocalizedKeyText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void AzertyHandling(struct FKey InputKey, struct FText translatedKey, bool isTranslated); // Function UI_KeyShortcut_WBP.UI_KeyShortcut_WBP_C.AzertyHandling // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function UI_KeyShortcut_WBP.UI_KeyShortcut_WBP_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function UI_KeyShortcut_WBP.UI_KeyShortcut_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void SetKeyShortcutText(struct FText keyText); // Function UI_KeyShortcut_WBP.UI_KeyShortcut_WBP_C.SetKeyShortcutText // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SettingText(); // Function UI_KeyShortcut_WBP.UI_KeyShortcut_WBP_C.SettingText // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SettingsUpdated(); // Function UI_KeyShortcut_WBP.UI_KeyShortcut_WBP_C.SettingsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_UI_KeyShortcut_WBP(int32_t EntryPoint); // Function UI_KeyShortcut_WBP.UI_KeyShortcut_WBP_C.ExecuteUbergraph_UI_KeyShortcut_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

