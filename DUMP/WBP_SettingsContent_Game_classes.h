// WidgetBlueprintGeneratedClass WBP_SettingsContent_Game.WBP_SettingsContent_Game_C
// Size: 0x430 (Inherited: 0x340)
struct UWBP_SettingsContent_Game_C : UWBP_SettingsContentBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UWBP_Dropdown_Btn_C* WBP_Dropdown_Btn_Language; // 0x348(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_ChatEnabled; // 0x350(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_FOVMovementChanges; // 0x358(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_JoinBrazilianPortugueseChannel; // 0x360(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_JoinChineseChannel; // 0x368(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_JoinEnglishChannel; // 0x370(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_JoinFrenchChannel; // 0x378(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_JoinGermanChannel; // 0x380(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_JoinPolishChannel; // 0x388(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_JoinRussianChannel; // 0x390(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_JoinSpanishChannel; // 0x398(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_JoinTurkishChannel; // 0x3a0(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_Language; // 0x3a8(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_RotateMinimap; // 0x3b0(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_Subtitles; // 0x3b8(0x08)
	struct UWBP_SettingSectionHeader_Item_C* WBP_SettingSectionHeader_Chat; // 0x3c0(0x08)
	struct UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_BrazilianPortugueseChannel; // 0x3c8(0x08)
	struct UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_ChatEnabled; // 0x3d0(0x08)
	struct UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_ChineseChannel; // 0x3d8(0x08)
	struct UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_EnglishChannel; // 0x3e0(0x08)
	struct UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_FOVMovementChanges; // 0x3e8(0x08)
	struct UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_FrenchChannel; // 0x3f0(0x08)
	struct UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_GermanChannel; // 0x3f8(0x08)
	struct UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_PolishChannel; // 0x400(0x08)
	struct UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_RotateMinimap; // 0x408(0x08)
	struct UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_RussianChannel; // 0x410(0x08)
	struct UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_SpanishChannel; // 0x418(0x08)
	struct UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_Subtitles; // 0x420(0x08)
	struct UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_TurkishChannel; // 0x428(0x08)

	void UpdateChatToggles(); // Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.UpdateChatToggles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Provider_OnDataChanged(struct FName DataName, struct FName dataType); // Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.Provider_OnDataChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateLanguages(); // Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.UpdateLanguages // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Initialize(); // Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void RegisterWidgets(); // Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.RegisterWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ToggleText_Btn_BrazilianPortugueseChannel_K2Node_ComponentBoundEvent_1_OnToggleChanged__DelegateSignature(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_BrazilianPortugueseChannel_K2Node_ComponentBoundEvent_1_OnToggleChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ToggleText_Btn_ChatEnabled_K2Node_ComponentBoundEvent_2_OnToggleChanged__DelegateSignature(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_ChatEnabled_K2Node_ComponentBoundEvent_2_OnToggleChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ToggleText_Btn_ChineseChannel_K2Node_ComponentBoundEvent_3_OnToggleChanged__DelegateSignature(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_ChineseChannel_K2Node_ComponentBoundEvent_3_OnToggleChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ToggleText_Btn_EnglishChannel_K2Node_ComponentBoundEvent_4_OnToggleChanged__DelegateSignature(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_EnglishChannel_K2Node_ComponentBoundEvent_4_OnToggleChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ToggleText_Btn_FOVMovementChanges_K2Node_ComponentBoundEvent_5_OnToggleChanged__DelegateSignature(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_FOVMovementChanges_K2Node_ComponentBoundEvent_5_OnToggleChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ToggleText_Btn_FrenchChannel_K2Node_ComponentBoundEvent_6_OnToggleChanged__DelegateSignature(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_FrenchChannel_K2Node_ComponentBoundEvent_6_OnToggleChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ToggleText_Btn_GermanChannel_K2Node_ComponentBoundEvent_7_OnToggleChanged__DelegateSignature(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_GermanChannel_K2Node_ComponentBoundEvent_7_OnToggleChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ToggleText_Btn_PolishChannel_K2Node_ComponentBoundEvent_8_OnToggleChanged__DelegateSignature(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_PolishChannel_K2Node_ComponentBoundEvent_8_OnToggleChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ToggleText_Btn_RotateMinimap_K2Node_ComponentBoundEvent_9_OnToggleChanged__DelegateSignature(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_RotateMinimap_K2Node_ComponentBoundEvent_9_OnToggleChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ToggleText_Btn_RussianChannel_K2Node_ComponentBoundEvent_10_OnToggleChanged__DelegateSignature(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_RussianChannel_K2Node_ComponentBoundEvent_10_OnToggleChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ToggleText_Btn_SpanishChannel_K2Node_ComponentBoundEvent_16_OnToggleChanged__DelegateSignature(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_SpanishChannel_K2Node_ComponentBoundEvent_16_OnToggleChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ToggleText_Btn_Subtitles_K2Node_ComponentBoundEvent_17_OnToggleChanged__DelegateSignature(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_Subtitles_K2Node_ComponentBoundEvent_17_OnToggleChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ToggleText_Btn_TurkishChannel_K2Node_ComponentBoundEvent_18_OnToggleChanged__DelegateSignature(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_TurkishChannel_K2Node_ComponentBoundEvent_18_OnToggleChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Dropdown_Btn_Language_K2Node_ComponentBoundEvent_0_OnSelectedOptionDelegate__DelegateSignature(struct UWBP_DropdownBase_Btn_C* Dropdown, struct FString Option, int32_t Index); // Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_Dropdown_Btn_Language_K2Node_ComponentBoundEvent_0_OnSelectedOptionDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_SettingsContent_Game(int32_t EntryPoint); // Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.ExecuteUbergraph_WBP_SettingsContent_Game // (Final|UbergraphFunction) // @ game+0x1e02480
};

