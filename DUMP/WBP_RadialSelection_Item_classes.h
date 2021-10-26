// WidgetBlueprintGeneratedClass WBP_RadialSelection_Item.WBP_RadialSelection_Item_C
// Size: 0x39a (Inherited: 0x328)
struct UWBP_RadialSelection_Item_C : UYWidget_CommWheelItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* onClick_Anim; // 0x330(0x08)
	struct UWidgetAnimation* WidgetIn_Anim; // 0x338(0x08)
	struct UWidgetAnimation* Hover_Anim; // 0x340(0x08)
	struct UImage* Gfx_Backer; // 0x348(0x08)
	struct UImage* Gfx_Item; // 0x350(0x08)
	struct UScaleBox* IconScaleBox; // 0x358(0x08)
	struct USizeBox* SizeOvveride; // 0x360(0x08)
	struct UOverlay* StackAmount; // 0x368(0x08)
	struct UTextBlock* Txt_ItemName; // 0x370(0x08)
	struct UTextBlock* Txt_StackAmount; // 0x378(0x08)
	struct FText ItemName; // 0x380(0x18)
	bool Is Selected; // 0x398(0x01)
	bool ShowText; // 0x399(0x01)

	void SetupItem(struct FYBaseWheelEntry YBaseWheelEntry); // Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.SetupItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnPressed(); // Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.OnPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnIsSelected(bool IsSelected); // Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.OnIsSelected // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnCommWheelRowHandleSet(struct FYCommWheelEntry wheelEntry); // Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.OnCommWheelRowHandleSet // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void UpdateWidget(bool IsSelected); // Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.UpdateWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnItemDataTableWheelRowHandleSet(struct FYBaseWheelEntry wheelEntry); // Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.OnItemDataTableWheelRowHandleSet // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_SetConsumableInfo(struct FYInventoryItem inventoryItem); // Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.BP_SetConsumableInfo // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_RadialSelection_Item(int32_t EntryPoint); // Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.ExecuteUbergraph_WBP_RadialSelection_Item // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

