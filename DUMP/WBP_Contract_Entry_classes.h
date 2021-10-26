// WidgetBlueprintGeneratedClass WBP_Contract_Entry.WBP_Contract_Entry_C
// Size: 0x5b0 (Inherited: 0x340)
struct UWBP_Contract_Entry_C : UYWidget_FactionContract {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UWidgetAnimation* ActiveButtonState_Anim; // 0x348(0x08)
	struct UWidgetAnimation* InActiveState_Anim; // 0x350(0x08)
	struct UWidgetAnimation* Clear_Anim; // 0x358(0x08)
	struct UWidgetAnimation* ActiveState_Anim; // 0x360(0x08)
	struct UWidgetAnimation* CompletedState_Anim; // 0x368(0x08)
	struct UWidgetAnimation* LockedState_Anim; // 0x370(0x08)
	struct UWidgetAnimation* ScreenIn_Anim; // 0x378(0x08)
	struct UUI_ImageBase_WBP_C* BackgroundImage; // 0x380(0x08)
	struct UOverlay* ButtonHolder; // 0x388(0x08)
	struct UOverlay* CompletedHighlight; // 0x390(0x08)
	struct UOverlay* ContractActiveHighlight; // 0x398(0x08)
	struct UHorizontalBox* ContractCostHolder; // 0x3a0(0x08)
	struct UHorizontalBox* ContractCostHolder_2; // 0x3a8(0x08)
	struct USizeBox* ContractEntrySize; // 0x3b0(0x08)
	struct UOverlay* ContractFailed; // 0x3b8(0x08)
	struct USizeBox* ContractImageSize; // 0x3c0(0x08)
	struct UOverlay* ContractLock_Layout; // 0x3c8(0x08)
	struct USizeBox* Description; // 0x3d0(0x08)
	struct UImage* Gfx_Completed_L; // 0x3d8(0x08)
	struct UImage* Gfx_Completed_R; // 0x3e0(0x08)
	struct UImage* Gfx_Contract_Icn; // 0x3e8(0x08)
	struct UImage* Gfx_FactionLogo; // 0x3f0(0x08)
	struct UImage* Gfx_Fail_Bg; // 0x3f8(0x08)
	struct UImage* Gfx_Lock_Bg; // 0x400(0x08)
	struct UImage* Gfx_Lock_Bg_Highlight_2; // 0x408(0x08)
	struct UImage* Gfx_Notch; // 0x410(0x08)
	struct UImage* Gfx_ResourcePlaceholder; // 0x418(0x08)
	struct UImage* Gfx_ResourcePlaceholder_2; // 0x420(0x08)
	struct UImage* Icn_Info; // 0x428(0x08)
	struct UImage* Icn_Info_Pulse; // 0x430(0x08)
	struct UImage* Icn_Lock; // 0x438(0x08)
	struct UImage* Icn_Swap; // 0x440(0x08)
	struct UImage* Icn_Timer; // 0x448(0x08)
	struct UImage* Image_26; // 0x450(0x08)
	struct USizeBox* InfoButton; // 0x458(0x08)
	struct UVerticalBox* ObjectivesList; // 0x460(0x08)
	struct UHorizontalBox* RewardList; // 0x468(0x08)
	struct UVerticalBox* RewardsList; // 0x470(0x08)
	struct USizeBox* RightSide; // 0x478(0x08)
	struct USpacer* SwapBtnSpacer; // 0x480(0x08)
	struct UHorizontalBox* TimerHolder; // 0x488(0x08)
	struct UTextBlock* Txt_BtnLabel; // 0x490(0x08)
	struct UTextBlock* Txt_ContractName; // 0x498(0x08)
	struct UTextBlock* Txt_ContractUnavailable; // 0x4a0(0x08)
	struct UTextBlock* Txt_CostCurrencyLabel; // 0x4a8(0x08)
	struct UTextBlock* Txt_CostCurrencyLabel_2; // 0x4b0(0x08)
	struct UTextBlock* Txt_Difficulty; // 0x4b8(0x08)
	struct UTextBlock* Txt_Failed; // 0x4c0(0x08)
	struct UTextBlock* Txt_LockedReason; // 0x4c8(0x08)
	struct UTextBlock* Txt_LockedReasonNumber; // 0x4d0(0x08)
	struct UTextBlock* Txt_Refresh; // 0x4d8(0x08)
	struct UTextBlock* Txt_Rewards; // 0x4e0(0x08)
	struct UTextBlock* Txt_Timer; // 0x4e8(0x08)
	struct UWBP_BlurBackerSimple_Panel_C* WBP_BlurBackerSimple_Panel; // 0x4f0(0x08)
	struct UWBP_Common_Empty_Btn_C* WBP_ContractAction_Btn; // 0x4f8(0x08)
	struct UWBP_Common_Empty_Btn_C* WBP_ContractSwap_Btn; // 0x500(0x08)
	struct UWBP_DividerHorizontal_VarA_Panel_C* WBP_DividerHorizontal_VarA_Panel; // 0x508(0x08)
	struct UWBP_Cost_Entry_C* WBP_FactionProgression_Entry; // 0x510(0x08)
	struct UWBP_HeaderComplex_Panel_C* WBP_HeaderComplex_Panel; // 0x518(0x08)
	struct UYTextBlock* YTxt_ContractDescription; // 0x520(0x08)
	struct FText ContractLabel; // 0x528(0x18)
	bool ShowButton; // 0x540(0x01)
	bool ShowInfoButton; // 0x541(0x01)
	char pad_542[0x6]; // 0x542(0x06)
	struct FText DifficultyLabel; // 0x548(0x18)
	bool is Locked; // 0x560(0x01)
	char pad_561[0x3]; // 0x561(0x03)
	struct FLinearColor ButtonStateColorInactiveOrCompleted; // 0x564(0x10)
	struct FLinearColor ButtonStateColorActive; // 0x574(0x10)
	struct FLinearColor ButtonStateColorInactiveNotPurchasable; // 0x584(0x10)
	bool ShowImage; // 0x594(0x01)
	bool ShowFactionIcon; // 0x595(0x01)
	bool ShowDescription; // 0x596(0x01)
	bool ShowRewards; // 0x597(0x01)
	int32_t ContractCost_Cached; // 0x598(0x04)
	bool ShowObjectives; // 0x59c(0x01)
	bool ContractIsLocked; // 0x59d(0x01)
	char pad_59E[0x2]; // 0x59e(0x02)
	struct FMulticastInlineDelegate PressedClaimButton; // 0x5a0(0x10)

	void Set Inactive Button Text(bool IsButtonEnabled); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.Set Inactive Button Text // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Show Contract As Locked(bool ContractIsLocked); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.Show Contract As Locked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Get Contract Data for Tooltip(bool IsValidData, struct FYContractUiData YContractUiData); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.Get Contract Data for Tooltip // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UWidget* Get Contract Entry Tooltip(); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.Get Contract Entry Tooltip // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void Send Request to Activate Contract(); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.Send Request to Activate Contract // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Update Objective(struct FYContractObjective objective, int32_t objectiveIndex, int32_t ObjectiveProgress); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.Update Objective // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Clear Animation(); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.Clear Animation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Set Objectives Visibility(bool Show); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.Set Objectives Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Set Image Visibility(bool Show); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.Set Image Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Set Description Visibility(bool Show); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.Set Description Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Set Rewards Visibility(bool RewardsAreVisible, float WidthOverride, float HeightOverride); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.Set Rewards Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Set Faction Icon Visibility(bool Show); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.Set Faction Icon Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Set Info Button Visibility(bool Show); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.Set Info Button Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Set Button Visibility(bool Show); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.Set Button Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UYWidget* BP_CreateSetAndAddContractReward(struct FYContractReward contractReward, bool showDivider); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.BP_CreateSetAndAddContractReward // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Update Objectives(struct TArray<struct FYContractObjective> objectives, struct TArray<int32_t> ObjectivePerProgress); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.Update Objectives // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Update Contract Progress(struct FString activeContractId, struct TArray<int32_t> activeContractCurrentProgressClamped); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.Update Contract Progress // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Claim Contract(); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.Claim Contract // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Cancel Active Contract(); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.Cancel Active Contract // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Received Backend Response For Contract Status Change(bool isFail, bool anActiveContractHasBeenCancelled); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.Received Backend Response For Contract Status Change // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Handle Contract State Change(); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.Handle Contract State Change // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Set Active Contract Button State(enum class EYContractStatus ContractState, struct FString callerContext); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.Set Active Contract Button State // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Update Inactive Contract Button State(bool IsButtonEnabled, struct FString callerContext); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.Update Inactive Contract Button State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Update Button Purchaseable State(); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.Update Button Purchaseable State // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Setup Dummy Data(); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.Setup Dummy Data // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Setup Objectives(struct TArray<struct FYContractObjective> objectives, struct TArray<int32_t> ObjectivePerProgress); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.Setup Objectives // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Setup Base Info(bool Is Design Time, struct FYContractRow Contract Config Data); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.Setup Base Info // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Setup Contract Board Entry(struct FYContractUiData contractUiData, bool IsDesignTime); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.Setup Contract Board Entry // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_SetupContract(struct FYContractUiData contractUiData); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.BP_SetupContract // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ContractAction_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.BndEvt__WBP_ContractAction_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_OnSuccessfullyCancelledContract(); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.BP_OnSuccessfullyCancelledContract // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Contract_Entry(int32_t EntryPoint); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.ExecuteUbergraph_WBP_Contract_Entry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void PressedClaimButton__DelegateSignature(); // Function WBP_Contract_Entry.WBP_Contract_Entry_C.PressedClaimButton__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

