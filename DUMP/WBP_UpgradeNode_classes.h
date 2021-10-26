// WidgetBlueprintGeneratedClass WBP_UpgradeNode.WBP_UpgradeNode_C
// Size: 0x4f0 (Inherited: 0x2c0)
struct UWBP_UpgradeNode_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UWidgetAnimation* inProgress_Anim; // 0x2c8(0x08)
	struct UWidgetAnimation* Selected_Anim; // 0x2d0(0x08)
	struct UWidgetAnimation* ScreenIn_Anim; // 0x2d8(0x08)
	struct UWidgetAnimation* onHover_Anim; // 0x2e0(0x08)
	struct UImage* Gfx_Bg_Fill; // 0x2e8(0x08)
	struct UImage* Gfx_Bg_Highlight_Gradient; // 0x2f0(0x08)
	struct UImage* Gfx_Bg_Lock; // 0x2f8(0x08)
	struct UImage* Gfx_Bg_MaxLevel_Highlight; // 0x300(0x08)
	struct UImage* Gfx_Bg_Stroke; // 0x308(0x08)
	struct UImage* Gfx_Bg_Stroke_Selected; // 0x310(0x08)
	struct UImage* Gfx_EmptyState_Line; // 0x318(0x08)
	struct UImage* Gfx_inProgress_Highlight; // 0x320(0x08)
	struct UImage* Gfx_Tier_Bg; // 0x328(0x08)
	struct UImage* Gfx_Timer_Bg; // 0x330(0x08)
	struct UImage* Gfx_Timer_Icn; // 0x338(0x08)
	struct UImage* GfX_Upgrade_Icn; // 0x340(0x08)
	struct UOverlay* Node; // 0x348(0x08)
	struct UOverlay* Tier; // 0x350(0x08)
	struct UTextBlock* TierNumber; // 0x358(0x08)
	struct UCanvasPanel* Timer; // 0x360(0x08)
	struct UTextBlock* TimerTxt; // 0x368(0x08)
	struct USizeBox* UpgradeNode; // 0x370(0x08)
	struct UProgressBar* UpgradeProgressBar; // 0x378(0x08)
	struct UWBP_DragAndDrop_HighlightArea_C* WBP_DragAndDrop_HighlightArea; // 0x380(0x08)
	struct UWBP_Dummy_Btn_C* WBP_Dummy_Btn_237; // 0x388(0x08)
	struct UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x390(0x08)
	bool IsLocked; // 0x398(0x01)
	bool IsEmpty; // 0x399(0x01)
	char pad_39A[0x6]; // 0x39a(0x06)
	struct FText TierTxt; // 0x3a0(0x18)
	bool IsDisabled; // 0x3b8(0x01)
	bool isInProgress; // 0x3b9(0x01)
	char pad_3BA[0x6]; // 0x3ba(0x06)
	struct FYTechTreeNodeType Node Data; // 0x3c0(0xc8)
	struct FMulticastInlineDelegate OnNodeClicked; // 0x488(0x10)
	bool IsSelected; // 0x498(0x01)
	char pad_499[0x3]; // 0x499(0x03)
	float UpdateTimer; // 0x49c(0x04)
	bool ShowName; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	struct UWBP_Generic_ToolTip_C* Tooltip; // 0x4a8(0x08)
	struct FText TooltipUpgradeName; // 0x4b0(0x18)
	bool ShowTooltip; // 0x4c8(0x01)
	bool isMaxLevel; // 0x4c9(0x01)
	char pad_4CA[0x6]; // 0x4ca(0x06)
	struct FDataTableRowHandle onboardingRowHandle; // 0x4d0(0x10)
	struct FDataTableRowHandle onboardingNodesRowHandle; // 0x4e0(0x10)

	bool IsOnOnboarding(); // Function WBP_UpgradeNode.WBP_UpgradeNode_C.IsOnOnboarding // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void TryHighlightTechtreeNodeForOnboarding(); // Function WBP_UpgradeNode.WBP_UpgradeNode_C.TryHighlightTechtreeNodeForOnboarding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void MaxLevelState(bool Condition); // Function WBP_UpgradeNode.WBP_UpgradeNode_C.MaxLevelState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetFormattedTime(struct FTimespan InTimespan, struct FText Result); // Function WBP_UpgradeNode.WBP_UpgradeNode_C.GetFormattedTime // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UWidget* GetTooltipWidget_1(); // Function WBP_UpgradeNode.WBP_UpgradeNode_C.GetTooltipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void RefreshProgress(); // Function WBP_UpgradeNode.WBP_UpgradeNode_C.RefreshProgress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SelectedState(bool Condition, struct FYTechTreeNodeType nodeData); // Function WBP_UpgradeNode.WBP_UpgradeNode_C.SelectedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void RefreshNode(); // Function WBP_UpgradeNode.WBP_UpgradeNode_C.RefreshNode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ShowTier(bool shouldBeVisible); // Function WBP_UpgradeNode.WBP_UpgradeNode_C.ShowTier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetupPreviewNode(struct FYTechTreeNodeType nodeData, bool ShowNodeName); // Function WBP_UpgradeNode.WBP_UpgradeNode_C.SetupPreviewNode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetupNode(struct FYTechTreeNodeType nodeData); // Function WBP_UpgradeNode.WBP_UpgradeNode_C.SetupNode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_UpgradeNode.WBP_UpgradeNode_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void inProgressState(bool Condition); // Function WBP_UpgradeNode.WBP_UpgradeNode_C.inProgressState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void DisabledState(bool Condition); // Function WBP_UpgradeNode.WBP_UpgradeNode_C.DisabledState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetTier(struct FText SetText); // Function WBP_UpgradeNode.WBP_UpgradeNode_C.SetTier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void EmptyState(bool Condition); // Function WBP_UpgradeNode.WBP_UpgradeNode_C.EmptyState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void LockedState(bool Condition); // Function WBP_UpgradeNode.WBP_UpgradeNode_C.LockedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_UpgradeNode.WBP_UpgradeNode_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_UpgradeNode.WBP_UpgradeNode_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_UpgradeNode.WBP_UpgradeNode_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Dummy_Btn_236_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature(); // Function WBP_UpgradeNode.WBP_UpgradeNode_C.BndEvt__WBP_Dummy_Btn_236_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Dummy_Btn_236_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature(); // Function WBP_UpgradeNode.WBP_UpgradeNode_C.BndEvt__WBP_Dummy_Btn_236_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_UpgradeNode_WBP_Dummy_Btn_236_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_UpgradeNode.WBP_UpgradeNode_C.BndEvt__WBP_UpgradeNode_WBP_Dummy_Btn_236_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void OnOnboardingStepCreated(struct FYMissionRuntimeData uiMissionLineStepInfo); // Function WBP_UpgradeNode.WBP_UpgradeNode_C.OnOnboardingStepCreated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_UpgradeNode(int32_t EntryPoint); // Function WBP_UpgradeNode.WBP_UpgradeNode_C.ExecuteUbergraph_WBP_UpgradeNode // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void OnNodeClicked__DelegateSignature(struct FName nodeId, struct UWBP_UpgradeNode_C* clickedNode); // Function WBP_UpgradeNode.WBP_UpgradeNode_C.OnNodeClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

