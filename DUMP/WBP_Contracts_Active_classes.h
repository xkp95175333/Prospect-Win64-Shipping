// WidgetBlueprintGeneratedClass WBP_Contracts_Active.WBP_Contracts_Active_C
// Size: 0x34b (Inherited: 0x2c0)
struct UWBP_Contracts_Active_C : UYWidget_ActiveContracts {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UWidgetAnimation* WidgetIn_Anim; // 0x2c8(0x08)
	struct UOverlay* Background; // 0x2d0(0x08)
	struct UVerticalBox* ContractEntries; // 0x2d8(0x08)
	struct UImage* Gfx_Edge; // 0x2e0(0x08)
	struct UOverlay* Header; // 0x2e8(0x08)
	struct UOverlay* HeaderRightAlign; // 0x2f0(0x08)
	struct UVerticalBox* Layout_Panel; // 0x2f8(0x08)
	struct UTextBlock* Txt_ContractLimit; // 0x300(0x08)
	struct UTextBlock* Txt_ContractLimit_2; // 0x308(0x08)
	struct UWBP_BlurBacker_Panel_C* WBP_BlurBacker_Panel; // 0x310(0x08)
	struct UWBP_Contract_Active_Entry_C* WBP_Contract_Active_Entry_ICA; // 0x318(0x08)
	struct UWBP_Contract_Active_Entry_C* WBP_Contract_Active_Entry_Korolev; // 0x320(0x08)
	struct UWBP_Contract_Active_Entry_C* WBP_Contract_Active_Entry_Osiris; // 0x328(0x08)
	struct UWBP_Header_Left_Panel_C* WBP_Header_Left_Panel; // 0x330(0x08)
	struct UWBP_Header_Panel_C* WBP_Header_Panel; // 0x338(0x08)
	struct UYControllerContractsActivesDataComponent* ContractComponent; // 0x340(0x08)
	bool ShowDescriptions; // 0x348(0x01)
	bool UseAlternateHeader; // 0x349(0x01)
	bool HideInfoTooltip; // 0x34a(0x01)

	void On Player Initialized(struct FYRuntimeInitializationContext Result); // Function WBP_Contracts_Active.WBP_Contracts_Active_C.On Player Initialized // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Hide Active Contract Tooltip(bool HideIcon); // Function WBP_Contracts_Active.WBP_Contracts_Active_C.Hide Active Contract Tooltip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	int32_t Get Current Num Of Active Contracts(); // Function WBP_Contracts_Active.WBP_Contracts_Active_C.Get Current Num Of Active Contracts // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Update Alternate Backer Visibility(); // Function WBP_Contracts_Active.WBP_Contracts_Active_C.Update Alternate Backer Visibility // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Update Number Of Contracts(int32_t NumOfActiveContracts); // Function WBP_Contracts_Active.WBP_Contracts_Active_C.Update Number Of Contracts // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Setup Dummy Data(); // Function WBP_Contracts_Active.WBP_Contracts_Active_C.Setup Dummy Data // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_Contracts_Active.WBP_Contracts_Active_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Update Objective Progress(struct FYContractRow contractConfigData, struct UWBP_Contract_Active_Entry_C* WBP_Contract_Entry, int32_t ObjectiveProgress, int32_t objectiveIndex); // Function WBP_Contracts_Active.WBP_Contracts_Active_C.Update Objective Progress // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Show Active Contract Widget(struct FYActiveContractUIData ActiveContr, struct FYContractRow ContractConfigDat, struct UWBP_Contract_Active_Entry_C* WBP_Contract_Entr); // Function WBP_Contracts_Active.WBP_Contracts_Active_C.Show Active Contract Widget // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Hide Active Contract Widget(struct UWBP_Contract_Active_Entry_C* WBP_Contract_Entry); // Function WBP_Contracts_Active.WBP_Contracts_Active_C.Hide Active Contract Widget // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Handle Active Contract Progress Updated(struct FString contractId, struct TArray<int32_t> objectivesProgress); // Function WBP_Contracts_Active.WBP_Contracts_Active_C.Handle Active Contract Progress Updated // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Handle Active Contracts Progress Updated(struct FYContractsProgress clampedProgress); // Function WBP_Contracts_Active.WBP_Contracts_Active_C.Handle Active Contracts Progress Updated // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Handle Active Contract Status Changed(struct FYActiveContractUIData ActiveContractData); // Function WBP_Contracts_Active.WBP_Contracts_Active_C.Handle Active Contract Status Changed // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Handle Active Contracts Status Changed(struct FYActiveContractsUIData activeContractsUIData); // Function WBP_Contracts_Active.WBP_Contracts_Active_C.Handle Active Contracts Status Changed // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_Contracts_Active.WBP_Contracts_Active_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnInitialized(); // Function WBP_Contracts_Active.WBP_Contracts_Active_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Contracts_Active(int32_t EntryPoint); // Function WBP_Contracts_Active.WBP_Contracts_Active_C.ExecuteUbergraph_WBP_Contracts_Active // (Final|UbergraphFunction) // @ game+0x1e02480
};

