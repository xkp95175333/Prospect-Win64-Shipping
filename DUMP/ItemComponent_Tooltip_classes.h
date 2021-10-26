// WidgetBlueprintGeneratedClass ItemComponent_Tooltip.ItemComponent_Tooltip_C
// Size: 0x31d (Inherited: 0x300)
struct UItemComponent_Tooltip_C : UYWidget_ItemComponentBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UWBP_ItemTooltip_C* Tooltip; // 0x308(0x08)
	bool AddSellInfo; // 0x310(0x01)
	bool AddPriceInfo; // 0x311(0x01)
	char pad_312[0x2]; // 0x312(0x02)
	struct FName factionId; // 0x314(0x08)
	bool AddAttachmentScreenInfo; // 0x31c(0x01)

	void SetFactionId(struct FName factionId); // Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.SetFactionId // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetAddPriceInfo(bool Value); // Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.SetAddPriceInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetTooltipWidget(struct UWBP_ItemTooltip_C* Tooltip); // Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.GetTooltipWidget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct UWBP_ItemTooltip_C* GetTooltipWidgetFactionShop(); // Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.GetTooltipWidgetFactionShop // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct UWBP_ItemTooltip_C* GetTooltipWidgetLoadout(); // Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.GetTooltipWidgetLoadout // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct UWBP_ItemTooltip_C* GetTooltipWidgetStash(); // Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.GetTooltipWidgetStash // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void BP_ItemHoveredChanged(bool Hovered); // Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.BP_ItemHoveredChanged // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_HandleSetItem(); // Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.BP_HandleSetItem // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void AddSellTooltipInfo(bool AddSellInfo); // Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.AddSellTooltipInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_HandleResetItem(); // Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.BP_HandleResetItem // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_ItemComponent_Tooltip(int32_t EntryPoint); // Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.ExecuteUbergraph_ItemComponent_Tooltip // (Final|UbergraphFunction) // @ game+0x1e02480
};

