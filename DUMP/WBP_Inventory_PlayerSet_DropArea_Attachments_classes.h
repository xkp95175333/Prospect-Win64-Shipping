// WidgetBlueprintGeneratedClass WBP_Inventory_PlayerSet_DropArea_Attachments.WBP_Inventory_PlayerSet_DropArea_Attachments_C
// Size: 0x280 (Inherited: 0x260)
struct UWBP_Inventory_PlayerSet_DropArea_Attachments_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Inventory_PlayerSet_DropArea_C* UI_Inventory_PlayerSet_DropArea_WBP; // 0x268(0x08)
	struct FString weaponItemId; // 0x270(0x10)

	void OnItemDroppedCallback(int32_t localPlayerInventoryComponentId, int32_t inventoryItemComponentID, struct FYInventoryItem inventoryItem, int32_t amountToMove); // Function WBP_Inventory_PlayerSet_DropArea_Attachments.WBP_Inventory_PlayerSet_DropArea_Attachments_C.OnItemDroppedCallback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDropStateChanged(struct FYDragStateData State); // Function WBP_Inventory_PlayerSet_DropArea_Attachments.WBP_Inventory_PlayerSet_DropArea_Attachments_C.OnDropStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnInitialized(); // Function WBP_Inventory_PlayerSet_DropArea_Attachments.WBP_Inventory_PlayerSet_DropArea_Attachments_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Inventory_PlayerSet_DropArea_Attachments(int32_t EntryPoint); // Function WBP_Inventory_PlayerSet_DropArea_Attachments.WBP_Inventory_PlayerSet_DropArea_Attachments_C.ExecuteUbergraph_WBP_Inventory_PlayerSet_DropArea_Attachments // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

