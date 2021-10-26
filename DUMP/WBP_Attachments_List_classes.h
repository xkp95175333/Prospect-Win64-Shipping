// WidgetBlueprintGeneratedClass WBP_Attachments_List.WBP_Attachments_List_C
// Size: 0x610 (Inherited: 0x448)
struct UWBP_Attachments_List_C : UYWidget_Inventory_Base {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x08)
	struct UWBP_FullMessage_C* WBP_FullMessage; // 0x450(0x08)
	struct UWBP_Inventory_PlayerSet_DropArea_Attachments_C* WBP_Inventory_PlayerSet_DropArea_Attachments; // 0x458(0x08)
	struct UWrapBox* WrapBox_1; // 0x460(0x08)
	bool IsTooltip; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)
	struct TMap<enum class EYModificationSlotType, struct UWBP_Item_Preview_Attachments_Btn_C*> ModificationSlotItemContainers; // 0x470(0x50)
	struct FYItemModsInfo CachedModsInfo; // 0x4c0(0x60)
	struct FYInventoryItem CachedInventoryItem; // 0x520(0x98)
	enum class EYInsuranceStatus CachedIsParentWeaponInsured; // 0x5b8(0x01)
	char pad_5B9[0x7]; // 0x5b9(0x07)
	struct TMap<int32_t, enum class EYModificationSlotType> ExecutionData; // 0x5c0(0x50)

	void HasCreatedAttachmentWidgets(bool HasCreatedWidgets); // Function WBP_Attachments_List.WBP_Attachments_List_C.HasCreatedAttachmentWidgets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void UpdateItemModsInfo(); // Function WBP_Attachments_List.WBP_Attachments_List_C.UpdateItemModsInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void CreateAttachment(struct FYResourceManagerRequestEntry Data); // Function WBP_Attachments_List.WBP_Attachments_List_C.CreateAttachment // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnAttachmentMoved(struct UDragDropOperation* DragDropOperation); // Function WBP_Attachments_List.WBP_Attachments_List_C.OnAttachmentMoved // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ModItemDragDoneCallback(); // Function WBP_Attachments_List.WBP_Attachments_List_C.ModItemDragDoneCallback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetItemModsInfo(struct FYItemModsInfo InItemModsInfo, struct FYInventoryItem inInventoryItem); // Function WBP_Attachments_List.WBP_Attachments_List_C.SetItemModsInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	bool BP_CanMoveItem(struct FYInventoryItem inventoryItem, struct UUserWidget* InWidget); // Function WBP_Attachments_List.WBP_Attachments_List_C.BP_CanMoveItem // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void CreateModAttachmentItemPlates(); // Function WBP_Attachments_List.WBP_Attachments_List_C.CreateModAttachmentItemPlates // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_Attachments_List.WBP_Attachments_List_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_Attachments_List.WBP_Attachments_List_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnInitialized(); // Function WBP_Attachments_List.WBP_Attachments_List_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnInvalidDragDropOperationDetected(); // Function WBP_Attachments_List.WBP_Attachments_List_C.OnInvalidDragDropOperationDetected // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnValidDragDropOperationDetected(); // Function WBP_Attachments_List.WBP_Attachments_List_C.OnValidDragDropOperationDetected // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteSpawnAction(struct FYResourceManagerRequestEntry Data); // Function WBP_Attachments_List.WBP_Attachments_List_C.ExecuteSpawnAction // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Attachments_List(int32_t EntryPoint); // Function WBP_Attachments_List.WBP_Attachments_List_C.ExecuteUbergraph_WBP_Attachments_List // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

