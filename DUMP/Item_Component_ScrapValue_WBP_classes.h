// WidgetBlueprintGeneratedClass Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C
// Size: 0x3b8 (Inherited: 0x300)
struct UItem_Component_ScrapValue_WBP_C : UYWidget_ItemComponentBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UHorizontalBox* HorizontalBox_3; // 0x308(0x08)
	struct UYTextBlock* scrapValue; // 0x310(0x08)
	struct UUI_ImageBase_WBP_C* UI_ImageBase_WBP; // 0x318(0x08)
	struct FYInventoryItem UpdatedInventoryItem; // 0x320(0x98)

	void GetFactionIncrementAsText(struct FText FactionIncrementValue); // Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.GetFactionIncrementAsText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetScrapReturnAsText(struct FText CurrencyReturn); // Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.GetScrapReturnAsText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void Construct(); // Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnItemSet(); // Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.OnItemSet // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetSellValuesOnItemPreview(struct FString factionRowId); // Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.SetSellValuesOnItemPreview // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnStashUpdated(struct UYStateInventoryComponent* stateInventoryComponent); // Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.OnStashUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnInitialized(); // Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnStashItemUpdatedCallback(struct UYStateInventoryComponent* stateInventoryComponent, struct FYInventoryItem Item); // Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.OnStashItemUpdatedCallback // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnPlayerSetItemUpdatedCallback(struct UYStateInventoryComponent* stateInventoryComponent, struct FYInventoryItem Item, enum class EYPlayerSetType equippedSetType); // Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.OnPlayerSetItemUpdatedCallback // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Refresh(); // Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.Refresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_Item_Component_ScrapValue_WBP(int32_t EntryPoint); // Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.ExecuteUbergraph_Item_Component_ScrapValue_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

