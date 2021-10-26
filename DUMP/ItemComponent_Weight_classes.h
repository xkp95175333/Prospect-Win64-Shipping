// WidgetBlueprintGeneratedClass ItemComponent_Weight.ItemComponent_Weight_C
// Size: 0x3b0 (Inherited: 0x300)
struct UItemComponent_Weight_C : UYWidget_ItemComponentBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FMulticastInlineDelegate OnWeightTextSet; // 0x308(0x10)
	struct FYInventoryItem UpdatedInventoryItem; // 0x318(0x98)

	void BP_HandleSetItem(); // Function ItemComponent_Weight.ItemComponent_Weight_C.BP_HandleSetItem // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void OnInitialized(); // Function ItemComponent_Weight.ItemComponent_Weight_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnStashItemUpdatedCallback(struct UYStateInventoryComponent* stateInventoryComponent, struct FYInventoryItem Item); // Function ItemComponent_Weight.ItemComponent_Weight_C.OnStashItemUpdatedCallback // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Refresh(); // Function ItemComponent_Weight.ItemComponent_Weight_C.Refresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnPlayerSetItemUpdatedCallback(struct UYStateInventoryComponent* stateInventoryComponent, struct FYInventoryItem Item, enum class EYPlayerSetType equippedSetType); // Function ItemComponent_Weight.ItemComponent_Weight_C.OnPlayerSetItemUpdatedCallback // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_ItemComponent_Weight(int32_t EntryPoint); // Function ItemComponent_Weight.ItemComponent_Weight_C.ExecuteUbergraph_ItemComponent_Weight // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void OnWeightTextSet__DelegateSignature(struct FText WeightText); // Function ItemComponent_Weight.ItemComponent_Weight_C.OnWeightTextSet__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

