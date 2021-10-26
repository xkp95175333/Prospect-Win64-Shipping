// WidgetBlueprintGeneratedClass WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C
// Size: 0x818 (Inherited: 0x5d8)
struct UWBP_Item_Preview_Btn_C : UWBP_ItemTileBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d8(0x08)
	struct UWidgetAnimation* Sell_Anim; // 0x5e0(0x08)
	struct UWidgetAnimation* Release_Anim; // 0x5e8(0x08)
	struct UWidgetAnimation* Press_Anim; // 0x5f0(0x08)
	struct UWidgetAnimation* HighlightSheen_Anim; // 0x5f8(0x08)
	struct UWidgetAnimation* Selected_Anim; // 0x600(0x08)
	struct UWidgetAnimation* Idle_Anim; // 0x608(0x08)
	struct UWidgetAnimation* Highlight_Anim; // 0x610(0x08)
	struct UCanvasPanel* AdditionalInfo; // 0x618(0x08)
	struct UHorizontalBox* AmountHB; // 0x620(0x08)
	struct UOverlay* CollapsedComponents; // 0x628(0x08)
	struct UOverlay* ComponentsContainer; // 0x630(0x08)
	struct UNamedSlot* ContentSlot_CenterImage; // 0x638(0x08)
	struct UTextBlock* CurrencyReturn; // 0x640(0x08)
	struct UTextBlock* FactionProgressionIncrement; // 0x648(0x08)
	struct UImage* Gfx_DurabilityIcon; // 0x650(0x08)
	struct UImage* Gfx_Edge; // 0x658(0x08)
	struct UImage* Gfx_FillEdge; // 0x660(0x08)
	struct UImage* Gfx_FillEdge_Old; // 0x668(0x08)
	struct UImage* Gfx_Gradient; // 0x670(0x08)
	struct UImage* Gfx_Stroke; // 0x678(0x08)
	struct UImage* Gfx_StrokeSelected; // 0x680(0x08)
	struct UImage* Gfx_Triangle; // 0x688(0x08)
	struct UImage* Icn_WeaponImage; // 0x690(0x08)
	struct UNamedSlot* Icon_Slot; // 0x698(0x08)
	struct USizeBox* IconDurabilitySizeBox; // 0x6a0(0x08)
	struct UScaleBox* Image_Centered; // 0x6a8(0x08)
	struct UScaleBox* ImageRotated; // 0x6b0(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x6b8(0x08)
	struct UItemComponent_AmmoAmountText_WBP_C* ItemComponent_AmmoAmountText_WBP; // 0x6c0(0x08)
	struct UItemComponent_Highlight_Stash_WBP_C* ItemComponent_Highlight_Stash_WBP_84; // 0x6c8(0x08)
	struct UItemComponent_Image_WBP_C* ItemComponent_Image_WBP; // 0x6d0(0x08)
	struct UItemComponent_ImageAmmoType_WBP_C* ItemComponent_ImageAmmoType_WBP; // 0x6d8(0x08)
	struct UItemComponent_Insured_C* ItemComponent_Insured; // 0x6e0(0x08)
	struct UItemComponent_LostOnDeath_C* ItemComponent_LostOnDeath; // 0x6e8(0x08)
	struct UItemComponent_RarityColor_C* ItemComponent_RarityColor; // 0x6f0(0x08)
	struct UItemComponent_TextName_WBP_C* ItemComponent_TextName_WBP; // 0x6f8(0x08)
	struct UItemComponent_Weight_C* ItemComponent_Weight; // 0x700(0x08)
	struct UOverlay* Layout_ButtonArtwork; // 0x708(0x08)
	struct UCanvasPanel* Layout_ButtonContent; // 0x710(0x08)
	struct UOverlay* Layout_ButtonDisabled; // 0x718(0x08)
	struct UOverlay* Layout_ButtonLoading; // 0x720(0x08)
	struct UOverlay* Layout_Searching; // 0x728(0x08)
	struct UButton* m_button; // 0x730(0x08)
	struct UImage* m_Gfx_AmmoIcon; // 0x738(0x08)
	struct UImage* m_Gfx_CurrencyIcon; // 0x740(0x08)
	struct UImage* m_Gfx_FactionIcon; // 0x748(0x08)
	struct UImage* m_Image_ItemCenter; // 0x750(0x08)
	struct USizeBox* rarity; // 0x758(0x08)
	struct UBorder* RarityBorder; // 0x760(0x08)
	struct UCanvasPanel* SellingInfo; // 0x768(0x08)
	struct USizeBox* SizeBox_Ammo; // 0x770(0x08)
	struct USizeBox* SizeBox_Currency; // 0x778(0x08)
	struct USizeBox* SizeBox_Faction; // 0x780(0x08)
	struct UNamedSlot* Slot_AdditionalComponents; // 0x788(0x08)
	struct UOverlay* Slot_TypePreview; // 0x790(0x08)
	struct UTextBlock* Txt_ItemRarity; // 0x798(0x08)
	struct UTextBlock* Txt_SearchingTime; // 0x7a0(0x08)
	struct UTextBlock* Txt_Value; // 0x7a8(0x08)
	struct UWBP_Item_Death_C* WBP_Item_Death; // 0x7b0(0x08)
	struct UWBP_Item_InsuranceTag_C* WBP_Item_InsuranceTag; // 0x7b8(0x08)
	struct UWBP_LoadingSpinner_C* WBP_LoadingSpinner; // 0x7c0(0x08)
	struct UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x7c8(0x08)
	struct UWBP_SelectionHighlight_C* WBP_SelectionHighlight; // 0x7d0(0x08)
	struct UWBP_Weight_C* WBP_Weight; // 0x7d8(0x08)
	struct UOverlay* weight; // 0x7e0(0x08)
	struct FLinearColor rarityColor; // 0x7e8(0x10)
	struct FText RarityLabel; // 0x7f8(0x18)
	bool IsDisabled; // 0x810(0x01)
	bool IsItemVisible; // 0x811(0x01)
	bool ShowAdditionalInfo; // 0x812(0x01)
	bool ShowRarity; // 0x813(0x01)
	bool ShowSlotPreview; // 0x814(0x01)
	bool ShowEmptySlot; // 0x815(0x01)
	enum class EYPlayerSetType slotType; // 0x816(0x01)
	bool InspectedWeaponOverride; // 0x817(0x01)

	void SequenceEvent__ENTRYPOINTWBP_Item_Preview_Btn_1(); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.SequenceEvent__ENTRYPOINTWBP_Item_Preview_Btn_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Manually Hide Weight For Crate Preview(); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Manually Hide Weight For Crate Preview // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Manually Set Amount For Crate Preview(struct FText Amount); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Manually Set Amount For Crate Preview // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void On Inspected Inventory Item Updated Callback(struct FYInventoryItem newInventoryItem); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.On Inspected Inventory Item Updated Callback // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Update Slot Preview Visibility(); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Update Slot Preview Visibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Set Additional Info Visibility(bool shouldBeVisible); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Set Additional Info Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Update Image to Show(); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Update Image to Show // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Update Layout Visibility(); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Update Layout Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Item Set(); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Item Set // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Trigger_InventoryPreviewHighlightAnimation(); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Trigger_InventoryPreviewHighlightAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Clicked_2(); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Clicked_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_AmmoAmountText_WBP_K2Node_ComponentBoundEvent_0_OnItemComponentTextAmountUpdated__DelegateSignature(struct FText amountText); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BndEvt__ItemComponent_AmmoAmountText_WBP_K2Node_ComponentBoundEvent_0_OnItemComponentTextAmountUpdated__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_Image_WBP_K2Node_ComponentBoundEvent_2_OnItemComponentImageLoaded__DelegateSignature(struct UTexture2D* Texture); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BndEvt__ItemComponent_Image_WBP_K2Node_ComponentBoundEvent_2_OnItemComponentImageLoaded__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_RarityColor_K2Node_ComponentBoundEvent_3_OnItemRarityColorSet__DelegateSignature(struct FSlateColor rarityColor); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BndEvt__ItemComponent_RarityColor_K2Node_ComponentBoundEvent_3_OnItemRarityColorSet__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_Weight_K2Node_ComponentBoundEvent_1_OnWeightTextSet__DelegateSignature(struct FText WeightText); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BndEvt__ItemComponent_Weight_K2Node_ComponentBoundEvent_1_OnWeightTextSet__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void Released(); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Released // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void DragDone(); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.DragDone // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Pressed(bool StartedDragging, bool IsRightMouseButton); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Pressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Unhovered(); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Unhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Hovered(); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_AddItemComponent(struct UYWidget_ItemComponentBase* itemComponentClass, bool Visible); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BP_AddItemComponent // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_TextName_WBP_K2Node_ComponentBoundEvent_4_OnItemComponentTextSet__DelegateSignature(struct FText ItemName, enum class EYItemRarityType itemRarity); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BndEvt__ItemComponent_TextName_WBP_K2Node_ComponentBoundEvent_4_OnItemComponentTextSet__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_ImageAmmoType_WBP_K2Node_ComponentBoundEvent_5_OnItemComponentImageLoaded__DelegateSignature(struct UTexture2D* Texture); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BndEvt__ItemComponent_ImageAmmoType_WBP_K2Node_ComponentBoundEvent_5_OnItemComponentImageLoaded__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void SetSellValues(struct FText CurrencyReturn, struct FText FactionProgressionIncrement, struct FString factionRowId); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.SetSellValues // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_AmmoAmountText_WBP_K2Node_ComponentBoundEvent_6_OnVisibilityChangedEvent__DelegateSignature(enum class ESlateVisibility InVisibility); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BndEvt__ItemComponent_AmmoAmountText_WBP_K2Node_ComponentBoundEvent_6_OnVisibilityChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Item_Preview_Btn_ItemComponent_Insured_K2Node_ComponentBoundEvent_7_OnItemInsuredSet__DelegateSignature(bool isInsured); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BndEvt__WBP_Item_Preview_Btn_ItemComponent_Insured_K2Node_ComponentBoundEvent_7_OnItemInsuredSet__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void OnInitialized(); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Item_Preview_Btn_ItemComponent_LostOnDeath_K2Node_ComponentBoundEvent_8_OnItemLostOnDeathSet__DelegateSignature(); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BndEvt__WBP_Item_Preview_Btn_ItemComponent_LostOnDeath_K2Node_ComponentBoundEvent_8_OnItemLostOnDeathSet__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Item_Preview_Btn(int32_t EntryPoint); // Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.ExecuteUbergraph_WBP_Item_Preview_Btn // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

