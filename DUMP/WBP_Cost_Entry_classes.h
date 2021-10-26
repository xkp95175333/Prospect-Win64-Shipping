// WidgetBlueprintGeneratedClass WBP_Cost_Entry.WBP_Cost_Entry_C
// Size: 0x379 (Inherited: 0x2c0)
struct UWBP_Cost_Entry_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UNamedSlot* CostImageSlot; // 0x2c8(0x08)
	struct USizeBox* CostItem; // 0x2d0(0x08)
	struct UImage* Gfx_Backer; // 0x2d8(0x08)
	struct UImage* Gfx_ResourcePlaceholder; // 0x2e0(0x08)
	struct UTextBlock* Txt_CostAmount; // 0x2e8(0x08)
	struct USizeBox* VertDivide; // 0x2f0(0x08)
	struct UWBP_Divider_Vertical_Panel_C* WBP_Divider_Vertical_Panel; // 0x2f8(0x08)
	bool ShowDivide; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct FText Value; // 0x308(0x18)
	bool ShowTooltip; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct UWBP_Generic_ToolTip_C* Tooltip; // 0x328(0x08)
	struct FText TooltipHeader; // 0x330(0x18)
	struct FText TooltipDescription; // 0x348(0x18)
	struct FText TooltipAdditionalHeaderText; // 0x360(0x18)
	bool ShowDisabled; // 0x378(0x01)

	void SetShowDisabled(bool Disabled); // Function WBP_Cost_Entry.WBP_Cost_Entry_C.SetShowDisabled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetupTooltipData(struct FText Header, struct FText Description, struct FText AdditionalHeaderText); // Function WBP_Cost_Entry.WBP_Cost_Entry_C.SetupTooltipData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UWidget* Get_CostItem_ToolTipWidget_1(); // Function WBP_Cost_Entry.WBP_Cost_Entry_C.Get_CostItem_ToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void ShouldShowDivider(bool shouldShowDivide); // Function WBP_Cost_Entry.WBP_Cost_Entry_C.ShouldShowDivider // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Setup Contract Reward Faction Progression(enum class EYFaction faction, int32_t RewardAmount); // Function WBP_Cost_Entry.WBP_Cost_Entry_C.Setup Contract Reward Faction Progression // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Setup Contract Reward(struct FString contractId, struct FYContractReward contractReward, bool showDivider); // Function WBP_Cost_Entry.WBP_Cost_Entry_C.Setup Contract Reward // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_Cost_Entry.WBP_Cost_Entry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void SetValue(struct FText Value); // Function WBP_Cost_Entry.WBP_Cost_Entry_C.SetValue // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetImage(struct TSoftObjectPtr<struct UTexture2D> SoftTexture); // Function WBP_Cost_Entry.WBP_Cost_Entry_C.SetImage // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Cost_Entry(int32_t EntryPoint); // Function WBP_Cost_Entry.WBP_Cost_Entry_C.ExecuteUbergraph_WBP_Cost_Entry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

