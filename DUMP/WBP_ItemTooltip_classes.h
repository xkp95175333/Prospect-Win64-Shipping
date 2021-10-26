// WidgetBlueprintGeneratedClass WBP_ItemTooltip.WBP_ItemTooltip_C
// Size: 0x3ba (Inherited: 0x338)
struct UWBP_ItemTooltip_C : UYWidgetView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UWidgetAnimation* ScreenIn_Anim; // 0x340(0x08)
	struct UImage* Gfx_BottomEdge; // 0x348(0x08)
	struct UImage* Gfx_BottomEdge_Triangle; // 0x350(0x08)
	struct UImage* Gfx_BottomEdge_Triangle_Outer; // 0x358(0x08)
	struct UImage* Gfx_Shadow; // 0x360(0x08)
	struct UImage* Gfx_TopEdge; // 0x368(0x08)
	struct UImage* Gfx_TopEdge_Triangle; // 0x370(0x08)
	struct UImage* Gfx_TopEdge_Triangle_Outer; // 0x378(0x08)
	struct UImage* m_Gfx_Item_Dynamic_2; // 0x380(0x08)
	struct UWBP_BlurBacker_Panel_C* WBP_Deco_BlurPanel; // 0x388(0x08)
	struct UWBP_InputKeyNavigation_C* WBP_InputKeyNavigation; // 0x390(0x08)
	struct UWBP_ItemDetails_C* WBP_ItemDetails; // 0x398(0x08)
	struct UYWidget_ItemContainer* parentItemContainer; // 0x3a0(0x08)
	struct FDataTableRowHandle AttachmentScreenRebindableInput; // 0x3a8(0x10)
	bool bShowAttachmentScreenKey; // 0x3b8(0x01)
	bool CanBeCleared; // 0x3b9(0x01)

	bool CanClearTooltipResources(); // Function WBP_ItemTooltip.WBP_ItemTooltip_C.CanClearTooltipResources // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SequenceEvent__ENTRYPOINTWBP_ItemTooltip_1(); // Function WBP_ItemTooltip.WBP_ItemTooltip_C.SequenceEvent__ENTRYPOINTWBP_ItemTooltip_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Reset(); // Function WBP_ItemTooltip.WBP_ItemTooltip_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateFromItemContainer(); // Function WBP_ItemTooltip.WBP_ItemTooltip_C.UpdateFromItemContainer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetParentItemContainer(struct UYWidget_ItemContainer* itemContainer); // Function WBP_ItemTooltip.WBP_ItemTooltip_C.SetParentItemContainer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_ItemTooltip.WBP_ItemTooltip_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void AnimIn(); // Function WBP_ItemTooltip.WBP_ItemTooltip_C.AnimIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ShowRelevantSections(struct FDataTableRowHandle itemRowHandle, bool IsInventoryItem); // Function WBP_ItemTooltip.WBP_ItemTooltip_C.ShowRelevantSections // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetDataFromShopItem(); // Function WBP_ItemTooltip.WBP_ItemTooltip_C.SetDataFromShopItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetDataFromItemContainer(struct UYWidget_ItemContainer* itemContainer); // Function WBP_ItemTooltip.WBP_ItemTooltip_C.SetDataFromItemContainer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SequenceEvent_1(); // Function WBP_ItemTooltip.WBP_ItemTooltip_C.SequenceEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_ItemTooltip.WBP_ItemTooltip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void AddSellTooltipInfo(struct FStructure_InputKeyNav newItem, bool ClearDefaultNavItems); // Function WBP_ItemTooltip.WBP_ItemTooltip_C.AddSellTooltipInfo // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ClearTooltipResources(); // Function WBP_ItemTooltip.WBP_ItemTooltip_C.ClearTooltipResources // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_ItemTooltip(int32_t EntryPoint); // Function WBP_ItemTooltip.WBP_ItemTooltip_C.ExecuteUbergraph_WBP_ItemTooltip // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

