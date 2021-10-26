// WidgetBlueprintGeneratedClass WBP_SettingEntry_Item.WBP_SettingEntry_Item_C
// Size: 0x3b1 (Inherited: 0x348)
struct UWBP_SettingEntry_Item_C : UYWidgetView_SettingEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* HighlightBracket_Anim; // 0x350(0x08)
	struct UButton* ButtonComponent; // 0x358(0x08)
	struct UNamedSlot* ButtonSlot; // 0x360(0x08)
	struct UImage* Gfx_BackerDisable; // 0x368(0x08)
	struct UImage* Gfx_BackerFill_Dark; // 0x370(0x08)
	struct UImage* Gfx_BackerFill_Light; // 0x378(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x380(0x08)
	struct UTextBlock* Txt_SettingLabel; // 0x388(0x08)
	struct UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x390(0x08)
	struct FText SettingLabel; // 0x398(0x18)
	bool Disabled; // 0x3b0(0x01)

	void SetText(struct FText Text); // Function WBP_SettingEntry_Item.WBP_SettingEntry_Item_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateEnabledVisuals(); // Function WBP_SettingEntry_Item.WBP_SettingEntry_Item_C.UpdateEnabledVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetEnabled(bool IsEnabled); // Function WBP_SettingEntry_Item.WBP_SettingEntry_Item_C.SetEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_SettingEntry_Item.WBP_SettingEntry_Item_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__Button_51_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_SettingEntry_Item.WBP_SettingEntry_Item_C.BndEvt__Button_51_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_SettingEntry_Item.WBP_SettingEntry_Item_C.BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_SettingEntry_Item.WBP_SettingEntry_Item_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_SettingEntry_Item(int32_t EntryPoint); // Function WBP_SettingEntry_Item.WBP_SettingEntry_Item_C.ExecuteUbergraph_WBP_SettingEntry_Item // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

