// WidgetBlueprintGeneratedClass WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C
// Size: 0x3d9 (Inherited: 0x340)
struct UWBP_Contract_Active_Entry_C : UYWidget_FactionContract {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UOverlay* ContractExpired; // 0x348(0x08)
	struct UVerticalBox* ContractObjectives; // 0x350(0x08)
	struct USizeBox* Description; // 0x358(0x08)
	struct UImage* Gfx_AlternativeBacker; // 0x360(0x08)
	struct UImage* Gfx_Expired_Backer; // 0x368(0x08)
	struct UImage* Icn_Faction; // 0x370(0x08)
	struct UImage* Icn_Timer; // 0x378(0x08)
	struct UImage* Icn_TimerExpired; // 0x380(0x08)
	struct USizeBox* InfoIcon; // 0x388(0x08)
	struct UHorizontalBox* TimerHolder; // 0x390(0x08)
	struct UTextBlock* Txt_ContractName; // 0x398(0x08)
	struct UTextBlock* Txt_Expired; // 0x3a0(0x08)
	struct UTextBlock* Txt_Timer; // 0x3a8(0x08)
	struct UWBP_Headline_Panel_C* WBP_Headline_Panel; // 0x3b0(0x08)
	struct UWBP_ProgressBarNameValue_C* WBP_ProgressBarNameValue; // 0x3b8(0x08)
	struct UWBP_ProgressBarNameValue_C* WBP_ProgressBarNameValue_2; // 0x3c0(0x08)
	struct UWBP_ProgressBarNameValue_C* WBP_ProgressBarNameValue_3; // 0x3c8(0x08)
	struct UYTextBlock* YTxt_ContractDescription; // 0x3d0(0x08)
	bool UseAlternateBacker; // 0x3d8(0x01)

	void Get Contract Data for Tooltip(bool IsValidData, struct FYContractUiData YContractUiData); // Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.Get Contract Data for Tooltip // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UWidget* Get Contract Entry Tooltip(); // Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.Get Contract Entry Tooltip // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void Set Info Icon Visibility(bool Is Visible); // Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.Set Info Icon Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Set Alternate Backer Visibility(bool Is Alternate Backer Enabled); // Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.Set Alternate Backer Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Setup Contract(struct FYContractUiData YContractUiData); // Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.Setup Contract // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Setup Objectives(struct TArray<struct FYContractObjective> objectives, struct TArray<int32_t> ObjectivePerProgress); // Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.Setup Objectives // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Setup Base Info(struct FYContractRow Contract Config Data); // Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.Setup Base Info // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UYWidget* BP_CreateSetAndAddContractReward(struct FYContractReward contractReward, bool showDivider); // Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.BP_CreateSetAndAddContractReward // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_SetupContract(struct FYContractUiData contractUiData); // Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.BP_SetupContract // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Contract_Active_Entry(int32_t EntryPoint); // Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.ExecuteUbergraph_WBP_Contract_Active_Entry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

