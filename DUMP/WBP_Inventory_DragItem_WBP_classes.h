// WidgetBlueprintGeneratedClass WBP_Inventory_DragItem_WBP.WBP_Inventory_DragItem_WBP_C
// Size: 0x3ac (Inherited: 0x260)
struct UWBP_Inventory_DragItem_WBP_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* OnDragStarted; // 0x268(0x08)
	struct UTextBlock* amountText; // 0x270(0x08)
	struct UImage* DragImage; // 0x278(0x08)
	struct UImage* Image_179; // 0x280(0x08)
	struct USizeBox* ImageSizeBox; // 0x288(0x08)
	struct FYInventoryItem Item; // 0x290(0x98)
	struct FDataTableRowHandle SFX_WeaponDragSound; // 0x328(0x10)
	struct FDataTableRowHandle SFX_ConsumableDragSound; // 0x338(0x10)
	struct FDataTableRowHandle SFX_MaterialDragSound; // 0x348(0x10)
	struct FDataTableRowHandle SFX_AmmoDragSound; // 0x358(0x10)
	struct FDataTableRowHandle SFX_GenericDragSound; // 0x368(0x10)
	bool DragAmount; // 0x378(0x01)
	char pad_379[0x3]; // 0x379(0x03)
	int32_t AmountToDrag; // 0x37c(0x04)
	struct TSoftObjectPtr<struct UTexture2D> LargeItemSoftReference; // 0x380(0x28)
	int32_t inventoryId; // 0x3a8(0x04)

	void EvaluateCancelDragDrop(struct FYInventoryItem RemovedInventoryItem); // Function WBP_Inventory_DragItem_WBP.WBP_Inventory_DragItem_WBP_C.EvaluateCancelDragDrop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct FText Get_AmountText_Text_1(); // Function WBP_Inventory_DragItem_WBP.WBP_Inventory_DragItem_WBP_C.Get_AmountText_Text_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void PlayDragSound(); // Function WBP_Inventory_DragItem_WBP.WBP_Inventory_DragItem_WBP_C.PlayDragSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnLoaded_DC0630EA454AD91B07AEA4A237A595F9(struct UObject* Loaded); // Function WBP_Inventory_DragItem_WBP.WBP_Inventory_DragItem_WBP_C.OnLoaded_DC0630EA454AD91B07AEA4A237A595F9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_Inventory_DragItem_WBP.WBP_Inventory_DragItem_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnPlayerSetItemRemovedCallback(struct UYStateInventoryComponent* stateInventoryComponent, struct FYInventoryItem Item, enum class EYPlayerSetType equippedSetType); // Function WBP_Inventory_DragItem_WBP.WBP_Inventory_DragItem_WBP_C.OnPlayerSetItemRemovedCallback // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnPlayerStashItemRemovedCallback(struct UYStateInventoryComponent* stateInventoryComponent, struct FYInventoryItem Item); // Function WBP_Inventory_DragItem_WBP.WBP_Inventory_DragItem_WBP_C.OnPlayerStashItemRemovedCallback // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Inventory_DragItem_WBP(int32_t EntryPoint); // Function WBP_Inventory_DragItem_WBP.WBP_Inventory_DragItem_WBP_C.ExecuteUbergraph_WBP_Inventory_DragItem_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

