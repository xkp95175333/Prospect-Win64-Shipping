// WidgetBlueprintGeneratedClass WBP_SettingsContent_Audio.WBP_SettingsContent_Audio_C
// Size: 0x420 (Inherited: 0x340)
struct UWBP_SettingsContent_Audio_C : UWBP_SettingsContentBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UWBP_Dropdown_Btn_C* WBP_Dropdown_Btn_InputDevice; // 0x348(0x08)
	struct UWBP_Dropdown_Btn_C* WBP_Dropdown_Btn_OutputDevice; // 0x350(0x08)
	struct UWBP_Selector_Btn_C* WBP_Selector_Btn_DialogueVolume; // 0x358(0x08)
	struct UWBP_Selector_Btn_C* WBP_Selector_Btn_HitmarkerVolume; // 0x360(0x08)
	struct UWBP_Selector_Btn_C* WBP_Selector_Btn_InputVolume; // 0x368(0x08)
	struct UWBP_Selector_Btn_C* WBP_Selector_Btn_MasterVolume; // 0x370(0x08)
	struct UWBP_Selector_Btn_C* WBP_Selector_Btn_MicrophoneSensitivity; // 0x378(0x08)
	struct UWBP_Selector_Btn_C* WBP_Selector_Btn_MusicVolume; // 0x380(0x08)
	struct UWBP_Selector_Btn_C* WBP_Selector_Btn_OutputVolume; // 0x388(0x08)
	struct UWBP_Selector_Btn_C* WBP_Selector_Btn_SfxVolume; // 0x390(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_DialogueVolume; // 0x398(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_HitmarkerVolume; // 0x3a0(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_InputDevice; // 0x3a8(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_InputVolume; // 0x3b0(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_MasterVolume; // 0x3b8(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_MicrophoneSensitivity; // 0x3c0(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_MusicVolume; // 0x3c8(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_MuteInputAudio; // 0x3d0(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_MuteOutputAudio; // 0x3d8(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_OutputDevice; // 0x3e0(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_OutputVolume; // 0x3e8(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_PushToTalk; // 0x3f0(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_SoundEffectsVolume; // 0x3f8(0x08)
	struct UWBP_SettingSectionHeader_Item_C* WBP_SettingSectionHeader_VoiceChat; // 0x400(0x08)
	struct UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_MuteInputAudio; // 0x408(0x08)
	struct UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_MuteOutputAudio; // 0x410(0x08)
	struct UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_PushToTalk; // 0x418(0x08)

	void UpdateRegisteredDropdowns(); // Function WBP_SettingsContent_Audio.WBP_SettingsContent_Audio_C.UpdateRegisteredDropdowns // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Selector_Btn_InputVolume_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(struct UWBP_Selector_Btn_C* selector, struct FStructure_SelectorData Value); // Function WBP_SettingsContent_Audio.WBP_SettingsContent_Audio_C.BndEvt__WBP_Selector_Btn_InputVolume_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Selector_Btn_MasterVolume_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(struct UWBP_Selector_Btn_C* selector, struct FStructure_SelectorData Value); // Function WBP_SettingsContent_Audio.WBP_SettingsContent_Audio_C.BndEvt__WBP_Selector_Btn_MasterVolume_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Selector_Btn_MicrophoneSensitivity_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature(struct UWBP_Selector_Btn_C* selector, struct FStructure_SelectorData Value); // Function WBP_SettingsContent_Audio.WBP_SettingsContent_Audio_C.BndEvt__WBP_Selector_Btn_MicrophoneSensitivity_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Selector_Btn_MusicVolume_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature(struct UWBP_Selector_Btn_C* selector, struct FStructure_SelectorData Value); // Function WBP_SettingsContent_Audio.WBP_SettingsContent_Audio_C.BndEvt__WBP_Selector_Btn_MusicVolume_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Selector_Btn_OutputVolume_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature(struct UWBP_Selector_Btn_C* selector, struct FStructure_SelectorData Value); // Function WBP_SettingsContent_Audio.WBP_SettingsContent_Audio_C.BndEvt__WBP_Selector_Btn_OutputVolume_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Selector_Btn_SfxVolume_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature(struct UWBP_Selector_Btn_C* selector, struct FStructure_SelectorData Value); // Function WBP_SettingsContent_Audio.WBP_SettingsContent_Audio_C.BndEvt__WBP_Selector_Btn_SfxVolume_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Selector_Btn_HitmarkerVolume_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(struct UWBP_Selector_Btn_C* selector, struct FStructure_SelectorData Value); // Function WBP_SettingsContent_Audio.WBP_SettingsContent_Audio_C.BndEvt__WBP_Selector_Btn_HitmarkerVolume_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ToggleText_Btn_MuteInputAudio_K2Node_ComponentBoundEvent_0_OnToggleChanged__DelegateSignature(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_SettingsContent_Audio.WBP_SettingsContent_Audio_C.BndEvt__WBP_ToggleText_Btn_MuteInputAudio_K2Node_ComponentBoundEvent_0_OnToggleChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ToggleText_Btn_MuteOutputAudio_K2Node_ComponentBoundEvent_9_OnToggleChanged__DelegateSignature(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_SettingsContent_Audio.WBP_SettingsContent_Audio_C.BndEvt__WBP_ToggleText_Btn_MuteOutputAudio_K2Node_ComponentBoundEvent_9_OnToggleChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ToggleText_Btn_PushToTalk_K2Node_ComponentBoundEvent_10_OnToggleChanged__DelegateSignature(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_SettingsContent_Audio.WBP_SettingsContent_Audio_C.BndEvt__WBP_ToggleText_Btn_PushToTalk_K2Node_ComponentBoundEvent_10_OnToggleChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Selector_Btn_DialogueVolume_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(struct UWBP_Selector_Btn_C* selector, struct FStructure_SelectorData Value); // Function WBP_SettingsContent_Audio.WBP_SettingsContent_Audio_C.BndEvt__WBP_Selector_Btn_DialogueVolume_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Dropdown_Btn_InputDevice_K2Node_ComponentBoundEvent_11_OnSelectedOptionDelegate__DelegateSignature(struct UWBP_DropdownBase_Btn_C* Dropdown, struct FString Option, int32_t Index); // Function WBP_SettingsContent_Audio.WBP_SettingsContent_Audio_C.BndEvt__WBP_Dropdown_Btn_InputDevice_K2Node_ComponentBoundEvent_11_OnSelectedOptionDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Dropdown_Btn_OutputDevice_K2Node_ComponentBoundEvent_12_OnSelectedOptionDelegate__DelegateSignature(struct UWBP_DropdownBase_Btn_C* Dropdown, struct FString Option, int32_t Index); // Function WBP_SettingsContent_Audio.WBP_SettingsContent_Audio_C.BndEvt__WBP_Dropdown_Btn_OutputDevice_K2Node_ComponentBoundEvent_12_OnSelectedOptionDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_SettingsContent_Audio(int32_t EntryPoint); // Function WBP_SettingsContent_Audio.WBP_SettingsContent_Audio_C.ExecuteUbergraph_WBP_SettingsContent_Audio // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

