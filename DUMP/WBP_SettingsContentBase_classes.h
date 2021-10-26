// WidgetBlueprintGeneratedClass WBP_SettingsContentBase.WBP_SettingsContentBase_C
// Size: 0x340 (Inherited: 0x338)
struct UWBP_SettingsContentBase_C : UYWidgetView {
	struct UWBP_Settings_Provider_C* SettingsProvider; // 0x338(0x08)

	void OnDropdownSelectionChanged(struct UWBP_DropdownBase_Btn_C* Dropdown, struct FString Option, int32_t Index); // Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.OnDropdownSelectionChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSelectorValueChanged(struct UWBP_Selector_Btn_C* selector, struct FStructure_SelectorData Value); // Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.OnSelectorValueChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void RegisterWidgets(); // Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.RegisterWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Provider_OnDataChanged(struct FName DataName, struct FName dataType); // Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.Provider_OnDataChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Initialize(); // Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggleChanged(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.OnToggleChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateRegisteredDropdowns(); // Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.UpdateRegisteredDropdowns // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateRegisteredSelectors(); // Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.UpdateRegisteredSelectors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateRegisteredToggles(); // Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.UpdateRegisteredToggles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateRegisteredWidgets(); // Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.UpdateRegisteredWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

