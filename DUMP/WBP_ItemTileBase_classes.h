// WidgetBlueprintGeneratedClass WBP_ItemTileBase.WBP_ItemTileBase_C
// Size: 0x5d8 (Inherited: 0x580)
struct UWBP_ItemTileBase_C : UYWidget_ItemContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x580(0x08)
	struct FDataTableRowHandle DoubleLeftClickAudioHandle; // 0x588(0x10)
	struct FDataTableRowHandle RightClickAudioHandle; // 0x598(0x10)
	bool IsInInventoryView; // 0x5a8(0x01)
	char pad_5A9[0x7]; // 0x5a9(0x07)
	struct FMulticastInlineDelegate SellScreenDoubleClickOfStashItem; // 0x5b0(0x10)
	bool ItemWidgetIsPartOfSellList; // 0x5c0(0x01)
	char pad_5C1[0x7]; // 0x5c1(0x07)
	struct FMulticastInlineDelegate SellScreenDoubleClickOfSellListItem; // 0x5c8(0x10)

	void AutoMoveItemToTarget(int32_t Amount); // Function WBP_ItemTileBase.WBP_ItemTileBase_C.AutoMoveItemToTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	bool IsInteractable(); // Function WBP_ItemTileBase.WBP_ItemTileBase_C.IsInteractable // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1e02480
	void NotifyWeaponInspectionInteraction(); // Function WBP_ItemTileBase.WBP_ItemTileBase_C.NotifyWeaponInspectionInteraction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Notify Sell Screen Interaction(); // Function WBP_ItemTileBase.WBP_ItemTileBase_C.Notify Sell Screen Interaction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Should Show Alternate Icon(bool ShouldShowAlternateIcon); // Function WBP_ItemTileBase.WBP_ItemTileBase_C.Should Show Alternate Icon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void Find Target Component Id Based on Context(int32_t TargetInventoryId, enum class EYPlayerSetType targetSetType); // Function WBP_ItemTileBase.WBP_ItemTileBase_C.Find Target Component Id Based on Context // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_ItemTileBase.WBP_ItemTileBase_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent InMouseEvent); // Function WBP_ItemTileBase.WBP_ItemTileBase_C.OnMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Hovered(); // Function WBP_ItemTileBase.WBP_ItemTileBase_C.Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Unhovered(); // Function WBP_ItemTileBase.WBP_ItemTileBase_C.Unhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Pressed(bool StartedDragging, bool IsRightMouseButton); // Function WBP_ItemTileBase.WBP_ItemTileBase_C.Pressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Released(); // Function WBP_ItemTileBase.WBP_ItemTileBase_C.Released // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void DragDone(); // Function WBP_ItemTileBase.WBP_ItemTileBase_C.DragDone // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_ItemTileBase.WBP_ItemTileBase_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_ItemTileBase.WBP_ItemTileBase_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_ItemTileBase(int32_t EntryPoint); // Function WBP_ItemTileBase.WBP_ItemTileBase_C.ExecuteUbergraph_WBP_ItemTileBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void SellScreenDoubleClickOfSellListItem__DelegateSignature(struct UYWidget_ItemContainer* itemContainer); // Function WBP_ItemTileBase.WBP_ItemTileBase_C.SellScreenDoubleClickOfSellListItem__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SellScreenDoubleClickOfStashItem__DelegateSignature(struct UYWidget_ItemContainer* itemContainer); // Function WBP_ItemTileBase.WBP_ItemTileBase_C.SellScreenDoubleClickOfStashItem__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

