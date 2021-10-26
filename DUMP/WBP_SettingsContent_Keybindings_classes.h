// WidgetBlueprintGeneratedClass WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C
// Size: 0x388 (Inherited: 0x338)
struct UWBP_SettingsContent_Keybindings_C : UYWidgetView_Keybindings {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UImage* Gfx_Controller; // 0x340(0x08)
	struct UVerticalBox* KeybindingList; // 0x348(0x08)
	struct UTextBlock* Txt_Gamepad; // 0x350(0x08)
	struct UTextBlock* Txt_Input; // 0x358(0x08)
	struct UTextBlock* Txt_Primary; // 0x360(0x08)
	struct UTextBlock* Txt_Secondary; // 0x368(0x08)
	struct UWBP_DividerHorizontal_Panel_C* WBP_DividerHorizontal_Panel; // 0x370(0x08)
	struct UWBP_Keybinding_Btn_C* WBP_Keybinding_Btn; // 0x378(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_Default; // 0x380(0x08)

	void UpdateWidget(struct UWBP_Keybinding_Btn_C* KeybindingButton); // Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.UpdateWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void InitializeWidgets(); // Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.InitializeWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnInitialized(); // Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_RegisterChildren(); // Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.BP_RegisterChildren // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void OnKeySet(struct FYKeybindingData Key); // Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.OnKeySet // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_SettingsContent_Keybindings(int32_t EntryPoint); // Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.ExecuteUbergraph_WBP_SettingsContent_Keybindings // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

