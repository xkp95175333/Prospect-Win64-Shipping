// WidgetBlueprintGeneratedClass WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C
// Size: 0x418 (Inherited: 0x338)
struct UWBP_StartupMessagesContainer_C : UYWidgetView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UVerticalBox* Box_AddedBindings; // 0x340(0x08)
	struct UScrollBox* Box_Content; // 0x348(0x08)
	struct UVerticalBox* Box_RemovedBindings; // 0x350(0x08)
	struct UImage* HACK_InputBlocker; // 0x358(0x08)
	struct UImage* HACK_InputBlocker_2; // 0x360(0x08)
	struct UOverlay* Overlay_AddedBindings; // 0x368(0x08)
	struct UOverlay* Overlay_RemovedBindings; // 0x370(0x08)
	struct URichTextBlock* RichTxt_KeybindsInfo; // 0x378(0x08)
	struct UTextBlock* Txt_Added; // 0x380(0x08)
	struct UTextBlock* Txt_Removed; // 0x388(0x08)
	struct UWBP_DividerHorizontal_Panel_C* WBP_DividerHorizontal_Bottom; // 0x390(0x08)
	struct UWBP_DividerHorizontal_Panel_C* WBP_DividerHorizontal_Top; // 0x398(0x08)
	struct UWBP_Keybinding_Btn_C* WBP_Keybinding_Btn; // 0x3a0(0x08)
	struct UWBP_Keybinding_Btn_C* WBP_Keybinding_Btn_2; // 0x3a8(0x08)
	struct UWBP_Keybinding_Btn_C* WBP_Keybinding_Btn_3; // 0x3b0(0x08)
	struct UWBP_Keybinding_Btn_C* WBP_Keybinding_Btn_4; // 0x3b8(0x08)
	struct UWBP_Keybinding_Btn_C* WBP_Keybinding_Btn_5; // 0x3c0(0x08)
	struct UWBP_Keybinding_Btn_C* WBP_Keybinding_Btn_6; // 0x3c8(0x08)
	struct UWBP_Generic_Modal_C* WBP_Keybindings_Modal; // 0x3d0(0x08)
	struct UWBP_RetentionBonus_C* WBP_RetentionBonus; // 0x3d8(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item; // 0x3e0(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_2; // 0x3e8(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_3; // 0x3f0(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_4; // 0x3f8(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_5; // 0x400(0x08)
	struct UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_6; // 0x408(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_27; // 0x410(0x08)

	void CreateKeybindingWidget(struct FYKeybindingData keybinding, struct UWBP_SettingEntry_Item_C* Widget); // Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.CreateKeybindingWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetStartShow(); // Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.BP_OnWidgetStartShow // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetHidden(); // Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.BP_OnWidgetHidden // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void OnCompleteInitialization(struct FYRuntimeInitializationContext Result); // Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.OnCompleteInitialization // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_StartupMessagesContainer_WBP_Generic_Modal_K2Node_ComponentBoundEvent_2_OnButtonPrimary__DelegateSignature(); // Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.BndEvt__WBP_StartupMessagesContainer_WBP_Generic_Modal_K2Node_ComponentBoundEvent_2_OnButtonPrimary__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void OnWelcomeVisibilityChanged(enum class ESlateVisibility InVisibility); // Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.OnWelcomeVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnKeybindingsVisibilityChanged(enum class ESlateVisibility InVisibility); // Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.OnKeybindingsVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ShowKeybindingsModal(); // Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.ShowKeybindingsModal // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_StartupMessagesContainer_WBP_RetentionBonus_K2Node_ComponentBoundEvent_0_OnDismissed__DelegateSignature(); // Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.BndEvt__WBP_StartupMessagesContainer_WBP_RetentionBonus_K2Node_ComponentBoundEvent_0_OnDismissed__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_StartupMessagesContainer(int32_t EntryPoint); // Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.ExecuteUbergraph_WBP_StartupMessagesContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

