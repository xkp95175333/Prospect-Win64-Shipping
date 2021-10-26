// WidgetBlueprintGeneratedClass ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C
// Size: 0x409 (Inherited: 0x328)
struct UItemComponent_DragAndDropable_WBP_C : UYWidget_ItemComponentDragAndDropable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* DragDetectedAnim; // 0x330(0x08)
	struct UImage* DragUX; // 0x338(0x08)
	enum class EYPlayerSetType slotType; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	struct FMulticastInlineDelegate OnHover; // 0x348(0x10)
	struct FMulticastInlineDelegate OnUnhover; // 0x358(0x10)
	struct FMulticastInlineDelegate OnMouseUp; // 0x368(0x10)
	enum class EYInventoryPlace inventoryPlace; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct TArray<enum class EYItemType> CompatibleItemTypes; // 0x380(0x10)
	struct TArray<enum class EYDeviceClass> CompatibleDeviceTypes; // 0x390(0x10)
	struct FDataTableRowHandle UI_InventoryHover; // 0x3a0(0x10)
	struct FDataTableRowHandle UI_InventoryUnhover; // 0x3b0(0x10)
	struct FDataTableRowHandle SFX_CompatibleDragOverSoundEffect; // 0x3c0(0x10)
	enum class EYItemImprovementScreenSlotType uiSlotType; // 0x3d0(0x01)
	char pad_3D1[0x3]; // 0x3d1(0x03)
	int32_t inventoryId; // 0x3d4(0x04)
	bool dragUXOn; // 0x3d8(0x01)
	bool Test; // 0x3d9(0x01)
	char pad_3DA[0x6]; // 0x3da(0x06)
	struct FMulticastInlineDelegate OnDragDone; // 0x3e0(0x10)
	bool IsDraggable; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct FString instanceId; // 0x3f8(0x10)
	bool CreateNewItem; // 0x408(0x01)

	bool GetInventoryItem(struct FYInventoryItem ReturnItem, enum class EYPlayerSetType slotType); // Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.GetInventoryItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void OnDragDropDone(struct UDragDropOperation* Operation); // Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnDragDropDone // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void isCompatible(struct FYInventoryItem Item, bool isCompatible); // Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.isCompatible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void PlayDragOverEffectsIfCompatible(struct UDragDropOperation* DragDropOperation); // Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.PlayDragOverEffectsIfCompatible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	bool WantsToDropAmount(); // Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.WantsToDropAmount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void ShowDragUXForCompatibleItem(struct UDragDropOperation* DragDropOperation); // Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.ShowDragUXForCompatibleItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void HideDragUXForCompatibleItem(struct UDragDropOperation* self2); // Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.HideDragUXForCompatibleItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UDragDropOperation* BP_OnDragDetected(); // Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.BP_OnDragDetected // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnDragEnter // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void AssignDragDetectedDelagates(struct UDragDropOperation* DragNDropOperation); // Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.AssignDragDetectedDelagates // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDrop_Event_2(struct UDragDropOperation* Operation); // Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnDrop_Event_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDragCancelled_Event_2(struct UDragDropOperation* Operation); // Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnDragCancelled_Event_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Initialize Drag And Drop Data(int32_t inventoryComponentId, struct FYInventoryItem inventoryItem, enum class EYPlayerSetType playerSetType, enum class EYItemImprovementScreenSlotType uiSlotType); // Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.Initialize Drag And Drop Data // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_ItemComponent_DragAndDropable_WBP(int32_t EntryPoint); // Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.ExecuteUbergraph_ItemComponent_DragAndDropable_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void OnDragDone__DelegateSignature(); // Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnDragDone__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnMouseUp__DelegateSignature(); // Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnMouseUp__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnUnhover__DelegateSignature(); // Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnUnhover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnHover__DelegateSignature(); // Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnHover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

