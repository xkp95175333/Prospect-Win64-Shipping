// WidgetBlueprintGeneratedClass WBP_Item_Preview_Attachments_Btn.WBP_Item_Preview_Attachments_Btn_C
// Size: 0x71f (Inherited: 0x5d8)
struct UWBP_Item_Preview_Attachments_Btn_C : UWBP_ItemTileBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d8(0x08)
	struct UWidgetAnimation* Release_Anim; // 0x5e0(0x08)
	struct UWidgetAnimation* Press_Anim; // 0x5e8(0x08)
	struct UWidgetAnimation* HighlightSheen_Anim; // 0x5f0(0x08)
	struct UWidgetAnimation* Selected_Anim; // 0x5f8(0x08)
	struct UWidgetAnimation* Idle_Anim; // 0x600(0x08)
	struct UWidgetAnimation* Highlight_Anim; // 0x608(0x08)
	struct USizeBox* AttachmentName; // 0x610(0x08)
	struct UOverlay* CollapsedComponents; // 0x618(0x08)
	struct UOverlay* ComponentsContainer; // 0x620(0x08)
	struct UImage* Gfx_Add; // 0x628(0x08)
	struct UImage* Gfx_Edge; // 0x630(0x08)
	struct UImage* Gfx_FillEdge; // 0x638(0x08)
	struct UImage* Gfx_Gradient; // 0x640(0x08)
	struct UImage* Gfx_Stroke; // 0x648(0x08)
	struct UImage* Gfx_StrokeSelected; // 0x650(0x08)
	struct UImage* Gfx_Triangle; // 0x658(0x08)
	struct UScaleBox* Image_Centered; // 0x660(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x668(0x08)
	struct UItemComponent_Highlight_Stash_WBP_C* ItemComponent_Highlight_Stash_WBP_84; // 0x670(0x08)
	struct UItemComponent_Image_WBP_C* ItemComponent_Image_WBP; // 0x678(0x08)
	struct UItemComponent_RarityColor_C* ItemComponent_RarityColor; // 0x680(0x08)
	struct UOverlay* Layout_ButtonArtwork; // 0x688(0x08)
	struct UCanvasPanel* Layout_ButtonImageContent; // 0x690(0x08)
	struct USizeBox* Layout_ButtonSizeBox; // 0x698(0x08)
	struct UOverlay* Layout_EmptySlot; // 0x6a0(0x08)
	struct USizeBox* Layout_HighlightsSizeBox; // 0x6a8(0x08)
	struct UOverlay* Layout_UnavailableSlot; // 0x6b0(0x08)
	struct UButton* m_button; // 0x6b8(0x08)
	struct UImage* m_Image_ItemCenter; // 0x6c0(0x08)
	struct USizeBox* rarity; // 0x6c8(0x08)
	struct UBorder* RarityBorder; // 0x6d0(0x08)
	struct UNamedSlot* Slot_AdditionalComponents; // 0x6d8(0x08)
	struct UTextBlock* Txt_AttachmentName; // 0x6e0(0x08)
	struct UWBP_Item_InsuranceTag_C* WBP_Item_InsuranceTag; // 0x6e8(0x08)
	struct UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x6f0(0x08)
	struct UWBP_SelectionHighlight_C* WBP_SelectionHighlight; // 0x6f8(0x08)
	struct FText AttachmentLabel; // 0x700(0x18)
	bool UseTooltipVariant; // 0x718(0x01)
	bool ShowEmptySlot; // 0x719(0x01)
	bool ShowUnavailableSlot; // 0x71a(0x01)
	bool IsDisabled; // 0x71b(0x01)
	enum class EYPlayerSetType slotType; // 0x71c(0x01)
	enum class EY_AttachmentItemState VisibilityState; // 0x71d(0x01)
	enum class EYModificationSlotType modType; // 0x71e(0x01)

	void SequenceEvent__ENTRYPOINTWBP_Item_Preview_Attachments_Btn_1(); // Function WBP_Item_Preview_Attachments_Btn.WBP_Item_Preview_Attachments_Btn_C.SequenceEvent__ENTRYPOINTWBP_Item_Preview_Attachments_Btn_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetEmptySlotTexture(struct TSoftObjectPtr<struct UTexture2D> NewTexture); // Function WBP_Item_Preview_Attachments_Btn.WBP_Item_Preview_Attachments_Btn_C.GetEmptySlotTexture // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void UpdateSlotPreviewVisibility(); // Function WBP_Item_Preview_Attachments_Btn.WBP_Item_Preview_Attachments_Btn_C.UpdateSlotPreviewVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetAdditionalInfoVisibility(bool shouldBeVisible); // Function WBP_Item_Preview_Attachments_Btn.WBP_Item_Preview_Attachments_Btn_C.SetAdditionalInfoVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateImageToShow(); // Function WBP_Item_Preview_Attachments_Btn.WBP_Item_Preview_Attachments_Btn_C.UpdateImageToShow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateLayoutVisibility(); // Function WBP_Item_Preview_Attachments_Btn.WBP_Item_Preview_Attachments_Btn_C.UpdateLayoutVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ItemReset(); // Function WBP_Item_Preview_Attachments_Btn.WBP_Item_Preview_Attachments_Btn_C.ItemReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ItemSet(); // Function WBP_Item_Preview_Attachments_Btn.WBP_Item_Preview_Attachments_Btn_C.ItemSet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Clicked_2(); // Function WBP_Item_Preview_Attachments_Btn.WBP_Item_Preview_Attachments_Btn_C.Clicked_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_Image_WBP_K2Node_ComponentBoundEvent_2_OnItemComponentImageLoaded__DelegateSignature(struct UTexture2D* Texture); // Function WBP_Item_Preview_Attachments_Btn.WBP_Item_Preview_Attachments_Btn_C.BndEvt__ItemComponent_Image_WBP_K2Node_ComponentBoundEvent_2_OnItemComponentImageLoaded__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_RarityColor_K2Node_ComponentBoundEvent_3_OnItemRarityColorSet__DelegateSignature(struct FSlateColor rarityColor); // Function WBP_Item_Preview_Attachments_Btn.WBP_Item_Preview_Attachments_Btn_C.BndEvt__ItemComponent_RarityColor_K2Node_ComponentBoundEvent_3_OnItemRarityColorSet__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void Released(); // Function WBP_Item_Preview_Attachments_Btn.WBP_Item_Preview_Attachments_Btn_C.Released // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void DragDone(); // Function WBP_Item_Preview_Attachments_Btn.WBP_Item_Preview_Attachments_Btn_C.DragDone // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Pressed(bool StartedDragging, bool IsRightMouseButton); // Function WBP_Item_Preview_Attachments_Btn.WBP_Item_Preview_Attachments_Btn_C.Pressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Unhovered(); // Function WBP_Item_Preview_Attachments_Btn.WBP_Item_Preview_Attachments_Btn_C.Unhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Hovered(); // Function WBP_Item_Preview_Attachments_Btn.WBP_Item_Preview_Attachments_Btn_C.Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_AddItemComponent(struct UYWidget_ItemComponentBase* itemComponentClass, bool Visible); // Function WBP_Item_Preview_Attachments_Btn.WBP_Item_Preview_Attachments_Btn_C.BP_AddItemComponent // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void SetSellValues(struct FText CurrencyReturn, struct FText FactionProgressionIncrement, struct FString factionRowId); // Function WBP_Item_Preview_Attachments_Btn.WBP_Item_Preview_Attachments_Btn_C.SetSellValues // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_Item_Preview_Attachments_Btn.WBP_Item_Preview_Attachments_Btn_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Trigger_AttachmentPreviewHighlightAnimation(); // Function WBP_Item_Preview_Attachments_Btn.WBP_Item_Preview_Attachments_Btn_C.Trigger_AttachmentPreviewHighlightAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetTooltipVariant(bool UseTooltipVariant); // Function WBP_Item_Preview_Attachments_Btn.WBP_Item_Preview_Attachments_Btn_C.SetTooltipVariant // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateItemState(enum class EY_AttachmentItemState NewItemState); // Function WBP_Item_Preview_Attachments_Btn.WBP_Item_Preview_Attachments_Btn_C.UpdateItemState // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnInitialized(); // Function WBP_Item_Preview_Attachments_Btn.WBP_Item_Preview_Attachments_Btn_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void SetInsuredStatus(enum class EYInsuranceStatus InsuranceStatus); // Function WBP_Item_Preview_Attachments_Btn.WBP_Item_Preview_Attachments_Btn_C.SetInsuredStatus // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Item_Preview_Attachments_Btn(int32_t EntryPoint); // Function WBP_Item_Preview_Attachments_Btn.WBP_Item_Preview_Attachments_Btn_C.ExecuteUbergraph_WBP_Item_Preview_Attachments_Btn // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

