// WidgetBlueprintGeneratedClass WBP_Settings_Menu.WBP_Settings_Menu_C
// Size: 0x439 (Inherited: 0x340)
struct UWBP_Settings_Menu_C : UYWidgetView_Settings {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UWidgetAnimation* InfoPanel_Anim; // 0x348(0x08)
	struct UWidgetAnimation* TabChange_Anim; // 0x350(0x08)
	struct UWidgetAnimation* ScreenIn_Anim; // 0x358(0x08)
	struct UImage* Gfx_Backer; // 0x360(0x08)
	struct UImage* Gfx_BottomEdge_ComplexPanel; // 0x368(0x08)
	struct UImage* Gfx_DarkenFill; // 0x370(0x08)
	struct UImage* Gfx_Grid_Helper; // 0x378(0x08)
	struct UImage* Gfx_Image; // 0x380(0x08)
	struct URichTextBlock* RichText_SettingDesc; // 0x388(0x08)
	struct USizeBox* SettingImage; // 0x390(0x08)
	struct UScaleBox* SettingInfoScaleBox; // 0x398(0x08)
	struct UWBP_BlurBacker_Panel_C* WBP_BlurBacker_Panel; // 0x3a0(0x08)
	struct UWBP_BlurFullScreenBacker_Panel_C* WBP_BlurFullScreenBacker_Panel; // 0x3a8(0x08)
	struct UWBP_Generic_Modal_C* WBP_Confirmation_Menu_TESTONLY; // 0x3b0(0x08)
	struct UWBP_BlurBacker_Panel_C* WBP_Deco_BlurPanel; // 0x3b8(0x08)
	struct UWBP_GenericContent_Panel_C* WBP_GenericContent_SettingInfo; // 0x3c0(0x08)
	struct UWBP_Header_Panel_C* WBP_Header_Panel; // 0x3c8(0x08)
	struct UWBP_Headline_Panel_C* WBP_Headline_Panel; // 0x3d0(0x08)
	struct UWBP_InputKeyNavigation_C* WBP_InputKeyNavigation; // 0x3d8(0x08)
	struct UWBP_SettingsContent_Audio_C* WBP_SettingsContent_Audio; // 0x3e0(0x08)
	struct UWBP_SettingsContent_Controls_C* WBP_SettingsContent_Controls; // 0x3e8(0x08)
	struct UWBP_SettingsContent_Game_C* WBP_SettingsContent_Game; // 0x3f0(0x08)
	struct UWBP_SettingsContent_Keybindings_C* WBP_SettingsContent_Keybindings; // 0x3f8(0x08)
	struct UWBP_SettingsContent_Video_C* WBP_SettingsContent_Video; // 0x400(0x08)
	struct UWBP_TabNavigation_C* WBP_TabNavigation_Header; // 0x408(0x08)
	struct UWBP_TabNavigation_C* WBP_TabNavigation_Primary; // 0x410(0x08)
	struct UWBP_Toast_C* WBP_Toast; // 0x418(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Settings; // 0x420(0x08)
	struct UYTextBlock* YTxt_SettingName; // 0x428(0x08)
	struct UWBP_Settings_Provider_C* SettingsProvider; // 0x430(0x08)
	bool IsSettingInfoActive; // 0x438(0x01)

	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_Settings_Menu.WBP_Settings_Menu_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_TabNavigation_Primary_K2Node_ComponentBoundEvent_1_OnTabChanged__DelegateSignature(int32_t Index, struct UWBP_TabElementBase_TabElem_C* TabElement); // Function WBP_Settings_Menu.WBP_Settings_Menu_C.BndEvt__WBP_TabNavigation_Primary_K2Node_ComponentBoundEvent_1_OnTabChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_InputKeyNavigation_K2Node_ComponentBoundEvent_0_OnInputKeyClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* InputKey, int32_t Index, struct FDataTableRowHandle InputActionRowHandle); // Function WBP_Settings_Menu.WBP_Settings_Menu_C.BndEvt__WBP_InputKeyNavigation_K2Node_ComponentBoundEvent_0_OnInputKeyClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetHidden(); // Function WBP_Settings_Menu.WBP_Settings_Menu_C.BP_OnWidgetHidden // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetStartShow(); // Function WBP_Settings_Menu.WBP_Settings_Menu_C.BP_OnWidgetStartShow // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetStartHide(); // Function WBP_Settings_Menu.WBP_Settings_Menu_C.BP_OnWidgetStartHide // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void OnRestoreDefaults(); // Function WBP_Settings_Menu.WBP_Settings_Menu_C.OnRestoreDefaults // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSettingInfoSet(struct FText Title, struct FText Description, struct TSoftObjectPtr<struct UTexture2D> Image); // Function WBP_Settings_Menu.WBP_Settings_Menu_C.OnSettingInfoSet // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnCloseSettingInfo(); // Function WBP_Settings_Menu.WBP_Settings_Menu_C.OnCloseSettingInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnKeyReassigned(struct FInputChord InputChord, struct FText oldKey, struct FText newKey); // Function WBP_Settings_Menu.WBP_Settings_Menu_C.OnKeyReassigned // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnResetSettingsPressed(); // Function WBP_Settings_Menu.WBP_Settings_Menu_C.OnResetSettingsPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetShown(); // Function WBP_Settings_Menu.WBP_Settings_Menu_C.BP_OnWidgetShown // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Settings_Menu(int32_t EntryPoint); // Function WBP_Settings_Menu.WBP_Settings_Menu_C.ExecuteUbergraph_WBP_Settings_Menu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

