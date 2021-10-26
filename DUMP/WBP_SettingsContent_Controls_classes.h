// WidgetBlueprintGeneratedClass WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C
// Size: 0x470 (Inherited: 0x340)
struct UWBP_SettingsContent_Controls_C : UWBP_SettingsContentBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UVerticalBox* VerticalBox_PerScopeSensitivity; // 0x348(0x08)
	struct UWBP_Selector_Btn_C* WBP_Selector_Btn_ADSSensitivity; // 0x350(0x08)
	struct UWBP_Selector_Btn_C* WBP_Selector_Btn_MouseSensitivity; // 0x358(0x08)
	struct UWBP_Selector_Btn_C* WBP_Selector_Btn_ScopedSensitivity; // 0x360(0x08)
	struct UWBP_Selector_Btn_C* WBP_Selector_Btn_ScopedSensitivity_16x; // 0x368(0x08)
	struct UWBP_Selector_Btn_C* WBP_Selector_Btn_ScopedSensitivity_1_5x; // 0x370(0x08)
	struct UWBP_Selector_Btn_C* WBP_Selector_Btn_ScopedSensitivity_2x; // 0x378(0x08)
	struct UWBP_Selector_Btn_C* WBP_Selector_Btn_ScopedSensitivity_4x; // 0x380(0x08)
	struct UWBP_Selector_Btn_C* WBP_Selector_Btn_ScopedSensitivity_8x; // 0x388(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_AdsSensitivity; // 0x390(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_CrouchToggle; // 0x398(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_EnablePerScopeSensitivity; // 0x3a0(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_FOVBasedSensitivity; // 0x3a8(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_InvertXAxis; // 0x3b0(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_InvertYAxis; // 0x3b8(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_LeaningToggle; // 0x3c0(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_MouseSmoothing; // 0x3c8(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_ScopedSensitivity; // 0x3d0(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_ScopedSensitivity_3; // 0x3d8(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_ScopedSensitivity_5; // 0x3e0(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_ScopedSensitivity_9; // 0x3e8(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_ScopedSensitivity_16; // 0x3f0(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_ScopedSensitivity_17; // 0x3f8(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_Sensitivity; // 0x400(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_SprintToggle; // 0x408(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_TargetingToggle; // 0x410(0x08)
	struct UWBP_SettingSectionHeader_Item_C* WBP_SettingSectionHeader_AimSensitivity; // 0x418(0x08)
	struct UWBP_SettingSectionHeader_Item_C* WBP_SettingSectionHeader_InputOptions; // 0x420(0x08)
	struct UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_CrouchToggle; // 0x428(0x08)
	struct UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_FOVBasedSensitivityScaling; // 0x430(0x08)
	struct UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_InvertX; // 0x438(0x08)
	struct UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_InvertY; // 0x440(0x08)
	struct UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_LeaningToggle; // 0x448(0x08)
	struct UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_MouseSmoothing; // 0x450(0x08)
	struct UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_PerScopeSensitivity; // 0x458(0x08)
	struct UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_SprintToggle; // 0x460(0x08)
	struct UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_TargettingToggle; // 0x468(0x08)

	void UpdateScopedSensitivityTexts(); // Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.UpdateScopedSensitivityTexts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Provider_OnDataChanged(struct FName DataName, struct FName dataType); // Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.Provider_OnDataChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Initialize(); // Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void RegisterWidgets(); // Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.RegisterWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateScopedSensitivityCategory(); // Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.UpdateScopedSensitivityCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Selector_Btn_MouseSensitivity_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(struct UWBP_Selector_Btn_C* selector, struct FStructure_SelectorData Value); // Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_Selector_Btn_MouseSensitivity_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Selector_Btn_ScopedSensitivity_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(struct UWBP_Selector_Btn_C* selector, struct FStructure_SelectorData Value); // Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_Selector_Btn_ScopedSensitivity_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Selector_Btn_ADSSensitivity_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(struct UWBP_Selector_Btn_C* selector, struct FStructure_SelectorData Value); // Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_Selector_Btn_ADSSensitivity_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ToggleText_Btn_CrouchToggle_K2Node_ComponentBoundEvent_3_OnToggleChanged__DelegateSignature(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_ToggleText_Btn_CrouchToggle_K2Node_ComponentBoundEvent_3_OnToggleChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ToggleText_Btn_FOVBasedSensitivityScaling_K2Node_ComponentBoundEvent_4_OnToggleChanged__DelegateSignature(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_ToggleText_Btn_FOVBasedSensitivityScaling_K2Node_ComponentBoundEvent_4_OnToggleChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ToggleText_Btn_InvertX_K2Node_ComponentBoundEvent_6_OnToggleChanged__DelegateSignature(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_ToggleText_Btn_InvertX_K2Node_ComponentBoundEvent_6_OnToggleChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ToggleText_Btn_InvertY_K2Node_ComponentBoundEvent_7_OnToggleChanged__DelegateSignature(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_ToggleText_Btn_InvertY_K2Node_ComponentBoundEvent_7_OnToggleChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ToggleText_Btn_MouseSmoothing_K2Node_ComponentBoundEvent_8_OnToggleChanged__DelegateSignature(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_ToggleText_Btn_MouseSmoothing_K2Node_ComponentBoundEvent_8_OnToggleChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ToggleText_Btn_PerScopeSensitivity_K2Node_ComponentBoundEvent_9_OnToggleChanged__DelegateSignature(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_ToggleText_Btn_PerScopeSensitivity_K2Node_ComponentBoundEvent_9_OnToggleChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ToggleText_Btn_SprintToggle_K2Node_ComponentBoundEvent_12_OnToggleChanged__DelegateSignature(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_ToggleText_Btn_SprintToggle_K2Node_ComponentBoundEvent_12_OnToggleChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ToggleText_Btn_TargettingToggle_K2Node_ComponentBoundEvent_13_OnToggleChanged__DelegateSignature(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_ToggleText_Btn_TargettingToggle_K2Node_ComponentBoundEvent_13_OnToggleChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Selector_Btn_ScopedSensitivity_1_5x_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature(struct UWBP_Selector_Btn_C* selector, struct FStructure_SelectorData Value); // Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_Selector_Btn_ScopedSensitivity_1_5x_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Selector_Btn_ScopedSensitivity_2x_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature(struct UWBP_Selector_Btn_C* selector, struct FStructure_SelectorData Value); // Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_Selector_Btn_ScopedSensitivity_2x_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Selector_Btn_ScopedSensitivity_4x_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature(struct UWBP_Selector_Btn_C* selector, struct FStructure_SelectorData Value); // Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_Selector_Btn_ScopedSensitivity_4x_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Selector_Btn_ScopedSensitivity_8x_K2Node_ComponentBoundEvent_18_OnValueChanged__DelegateSignature(struct UWBP_Selector_Btn_C* selector, struct FStructure_SelectorData Value); // Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_Selector_Btn_ScopedSensitivity_8x_K2Node_ComponentBoundEvent_18_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Selector_Btn_ScopedSensitivity_16x_K2Node_ComponentBoundEvent_19_OnValueChanged__DelegateSignature(struct UWBP_Selector_Btn_C* selector, struct FStructure_SelectorData Value); // Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_Selector_Btn_ScopedSensitivity_16x_K2Node_ComponentBoundEvent_19_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ToggleText_Btn_LeaningToggle_K2Node_ComponentBoundEvent_20_OnToggleChanged__DelegateSignature(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_ToggleText_Btn_LeaningToggle_K2Node_ComponentBoundEvent_20_OnToggleChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_SettingsContent_Controls(int32_t EntryPoint); // Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.ExecuteUbergraph_WBP_SettingsContent_Controls // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

