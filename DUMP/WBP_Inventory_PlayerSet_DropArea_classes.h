// WidgetBlueprintGeneratedClass WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C
// Size: 0x3b8 (Inherited: 0x260)
struct UWBP_Inventory_PlayerSet_DropArea_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* DragDetected; // 0x268(0x08)
	struct UImage* DropAreaImage; // 0x270(0x08)
	struct FDataTableRowHandle SFX_DropSound; // 0x278(0x10)
	struct FDataTableRowHandle SFX_CompatibleDragOverSoundEffect; // 0x288(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0x298(0x10)
	struct FYInventoryItem DragDropItem; // 0x2a8(0x98)
	int32_t DragDropItemComponentId; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct TArray<enum class EYItemType> StationUncompatibleItems; // 0x348(0x10)
	struct TArray<enum class EYItemType> MatchUncompatibleItems; // 0x358(0x10)
	struct UYWidget_Inventory_Base* ParentWidget; // 0x368(0x08)
	struct UUserWidget* ParentDropArea; // 0x370(0x08)
	struct FMulticastInlineDelegate OnItemDroppedWithDragDropOperation; // 0x378(0x10)
	struct FMulticastInlineDelegate OnInvalidDragDropOperationDetected; // 0x388(0x10)
	struct FMulticastInlineDelegate OnValidDragDropOperationDetected; // 0x398(0x10)
	struct FMulticastInlineDelegate OnItemSplitAfterDragBegun; // 0x3a8(0x10)

	void IsItemCompatible(struct FYInventoryItem inventoryItem, bool isCompatible); // Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.IsItemCompatible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void HideDragUX(); // Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.HideDragUX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void AssignDragAndDropOperationDelegates(struct UDragDropOperation* DragDropOperation); // Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.AssignDragAndDropOperationDelegates // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDragCancelledCallback(struct UDragDropOperation* Operation); // Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnDragCancelledCallback // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDropCallback(struct UDragDropOperation* Operation); // Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnDropCallback // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnDragEnter // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnInitialized(); // Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnDropStateChangedCallback(struct FYDragStateData State); // Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnDropStateChangedCallback // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSplitCurrentDraggingStack(); // Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnSplitCurrentDraggingStack // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnDragCancelled(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnDragCancelled // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void ListenForSplitAfterDrag(); // Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.ListenForSplitAfterDrag // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StopListeningForSplitAfterDrag(); // Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.StopListeningForSplitAfterDrag // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Inventory_PlayerSet_DropArea(int32_t EntryPoint); // Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.ExecuteUbergraph_WBP_Inventory_PlayerSet_DropArea // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void OnItemSplitAfterDragBegun__DelegateSignature(struct FYInventoryItem Item, int32_t localPlayerInventoryComponentId, int32_t inventoryItemComponentID); // Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnItemSplitAfterDragBegun__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnValidDragDropOperationDetected__DelegateSignature(); // Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnValidDragDropOperationDetected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnInvalidDragDropOperationDetected__DelegateSignature(); // Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnInvalidDragDropOperationDetected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnItemDroppedWithDragDropOperation__DelegateSignature(struct UDragDropOperation* InDragDropOperation); // Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnItemDroppedWithDragDropOperation__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnItemDropped__DelegateSignature(int32_t localPlayerInventoryComponentId, int32_t inventoryItemComponentID, struct FYInventoryItem inventoryItem, int32_t amountToMove); // Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnItemDropped__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

