// WidgetBlueprintGeneratedClass WBP_Contract_Tooltip.WBP_Contract_Tooltip_C
// Size: 0x3d0 (Inherited: 0x340)
struct UWBP_Contract_Tooltip_C : UYWidget_FactionContract {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UWidgetAnimation* WidgetIn_Anim; // 0x348(0x08)
	struct UImage* Gfx_BottomEdge; // 0x350(0x08)
	struct UImage* Gfx_BottomEdge_Triangle; // 0x358(0x08)
	struct UImage* Gfx_BottomEdge_Triangle_Outer; // 0x360(0x08)
	struct UImage* Gfx_Shadow; // 0x368(0x08)
	struct UImage* Gfx_TopEdge; // 0x370(0x08)
	struct UImage* Gfx_TopEdge_Triangle; // 0x378(0x08)
	struct UImage* Gfx_TopEdge_Triangle_Outer; // 0x380(0x08)
	struct UHorizontalBox* RewardList; // 0x388(0x08)
	struct UVerticalBox* RewardsList; // 0x390(0x08)
	struct UTextBlock* Txt_Rewards; // 0x398(0x08)
	struct UTextBlock* Txt_TooltipHeader; // 0x3a0(0x08)
	struct UWBP_Common_Btn_C* WBP_Cancel_Btn; // 0x3a8(0x08)
	struct UWBP_BlurBacker_Panel_C* WBP_Deco_BlurPanel; // 0x3b0(0x08)
	struct UWBP_Cost_Entry_C* WBP_FactionProgression_Entry; // 0x3b8(0x08)
	struct UWBP_InputKeyNavigation_C* WBP_InputKeyNavigation; // 0x3c0(0x08)
	struct UYTextBlock* YTxt_ContractDescription; // 0x3c8(0x08)

	void Handle User Requested Contract Cancel(); // Function WBP_Contract_Tooltip.WBP_Contract_Tooltip_C.Handle User Requested Contract Cancel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Setup Dummy Data(); // Function WBP_Contract_Tooltip.WBP_Contract_Tooltip_C.Setup Dummy Data // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Setup Tooltip Contract(struct FYContractUiData contractUiData); // Function WBP_Contract_Tooltip.WBP_Contract_Tooltip_C.Setup Tooltip Contract // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UYWidget* BP_CreateSetAndAddContractReward(struct FYContractReward contractReward, bool showDivider); // Function WBP_Contract_Tooltip.WBP_Contract_Tooltip_C.BP_CreateSetAndAddContractReward // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_SetupContract(struct FYContractUiData contractUiData); // Function WBP_Contract_Tooltip.WBP_Contract_Tooltip_C.BP_SetupContract // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_Contract_Tooltip.WBP_Contract_Tooltip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_Contract_Tooltip.WBP_Contract_Tooltip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Contract_Tooltip(int32_t EntryPoint); // Function WBP_Contract_Tooltip.WBP_Contract_Tooltip_C.ExecuteUbergraph_WBP_Contract_Tooltip // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

