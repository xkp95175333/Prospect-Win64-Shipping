// WidgetBlueprintGeneratedClass WBP_Rewards_Popup.WBP_Rewards_Popup_C
// Size: 0x462 (Inherited: 0x320)
struct UWBP_Rewards_Popup_C : UYWidget_RewardsPopup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* LevelUp_Anim; // 0x328(0x08)
	struct UWidgetAnimation* BackgroundIn_Anim; // 0x330(0x08)
	struct UWidgetAnimation* ScreenIn_Anim; // 0x338(0x08)
	struct UVerticalBox* ContractsRewards; // 0x340(0x08)
	struct UImage* Gfx_BackerHeader; // 0x348(0x08)
	struct UImage* Gfx_BackerHeader_Secondary; // 0x350(0x08)
	struct UImage* Gfx_BackerHeaderFull; // 0x358(0x08)
	struct UImage* Gfx_BackerLvlUp; // 0x360(0x08)
	struct UImage* Gfx_BackerLvlUp_Flash; // 0x368(0x08)
	struct UImage* Gfx_BackerLvlUp_Full; // 0x370(0x08)
	struct UImage* Gfx_BackerLvlUp_Full_DotPattern; // 0x378(0x08)
	struct UImage* Gfx_BackerLvlUp_Full_Flash; // 0x380(0x08)
	struct UImage* Gfx_BackerLvlUp_Full_Stroke; // 0x388(0x08)
	struct UImage* Gfx_BackerLvlUp_GradientBacker; // 0x390(0x08)
	struct UImage* Gfx_BackerLvlUp_Secondary; // 0x398(0x08)
	struct UImage* Gfx_BackerLvlUp_Stroke; // 0x3a0(0x08)
	struct UImage* Gfx_Grid_Helper; // 0x3a8(0x08)
	struct USizeBox* LevelMaxSize; // 0x3b0(0x08)
	struct UWrapBox* RewardItemsContainer; // 0x3b8(0x08)
	struct UWrapBox* RewardList_Contracts; // 0x3c0(0x08)
	struct UYTextBlock* Txt_FactionLevelUp; // 0x3c8(0x08)
	struct UYTextBlock* Txt_Level; // 0x3d0(0x08)
	struct UYTextBlock* Txt_LevelLarge; // 0x3d8(0x08)
	struct UYTextBlock* Txt_RewardsContracts; // 0x3e0(0x08)
	struct UYTextBlock* Txt_RewardsItems; // 0x3e8(0x08)
	struct UYTextBlock* Txt_Title; // 0x3f0(0x08)
	struct UWBP_Common_Btn_C* WBP_Accept_Btn; // 0x3f8(0x08)
	struct UWBP_BlurFullScreenBacker_Panel_C* WBP_BlurFullScreenBacker_Panel; // 0x400(0x08)
	struct UWBP_CelebrationBacker_Panel_C* WBP_CelebrationBacker_Panel; // 0x408(0x08)
	struct UWBP_CelebrationBacker_Panel_B_C* WBP_CelebrationBacker_Panel_B; // 0x410(0x08)
	struct UWBP_CelebrationBacker_Panel_C_C* WBP_CelebrationBacker_Panel_C; // 0x418(0x08)
	struct UWBP_DividerHorizontal_Panel_C* WBP_DividerHorizontal_Panel_2; // 0x420(0x08)
	struct UWBP_Footer_A_Panel_C* WBP_Footer_A_Panel; // 0x428(0x08)
	struct UWBP_GenericContent_Panel_C* WBP_GenericContent_Panel; // 0x430(0x08)
	struct UWelcomePackage_Category_Item_C* WelcomePackage_Category_Item; // 0x438(0x08)
	struct FDataTableRowHandle SoundFX_ScreenIn; // 0x440(0x10)
	struct FDataTableRowHandle SoundFX_LevelUp; // 0x450(0x10)
	bool UseArrowsAnim; // 0x460(0x01)
	bool UseCelebrationBackerC; // 0x461(0x01)

	void SequenceEvent__ENTRYPOINTWBP_Rewards_Popup_2(struct UWBP_CelebrationBacker_Panel_B_C* WBP_CelebrationBacker_Panel_B); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.SequenceEvent__ENTRYPOINTWBP_Rewards_Popup_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SequenceEvent__ENTRYPOINTWBP_Rewards_Popup_1(struct UWBP_CelebrationBacker_Panel_B_C* WBP_CelebrationBacker_Panel_B); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.SequenceEvent__ENTRYPOINTWBP_Rewards_Popup_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void CelebrationBackerC(bool Condition); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.CelebrationBackerC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ArrowsAnim(bool Condition); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.ArrowsAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Handle Daily Crate Opened(); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.Handle Daily Crate Opened // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ShowPlayerQuarterUnlocks(); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.ShowPlayerQuarterUnlocks // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void HandleUnlocks(struct FYUnlocksPopupUiData YUnlocksPopupUiData); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.HandleUnlocks // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void HideHeadlines(); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.HideHeadlines // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ShowRewardsPopup(); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.ShowRewardsPopup // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UYWidget_FactionContract* BP_CreateUnlockedContract(struct FYContractRow contractConfigData); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.BP_CreateUnlockedContract // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UYWidget_ItemContainer* BP_CreateUnlockedItem(struct FYInventoryItem Item); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.BP_CreateUnlockedItem // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UYWidget_ItemContainer* BP_CreateInventoryItem(struct FYInventoryItem Item); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.BP_CreateInventoryItem // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void WBP_CelebrationBacker_Panel_B_ScreenOut(struct UWBP_CelebrationBacker_Panel_B_C* WBP_CelebrationBacker_Panel_B); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.WBP_CelebrationBacker_Panel_B_ScreenOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_ClearAddedRewardEntries(); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.BP_ClearAddedRewardEntries // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_ShowRewardsPopup(); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.BP_ShowRewardsPopup // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_ShowUnlocksPopup(struct FYUnlocksPopupUiData unlocksPopupUiData); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.BP_ShowUnlocksPopup // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Common_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.BndEvt__WBP_Common_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void WBP_CelebrationBacker_Panel_B_ScreenIn(struct UWBP_CelebrationBacker_Panel_B_C* WBP_CelebrationBacker_Panel_B); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.WBP_CelebrationBacker_Panel_B_ScreenIn // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void LevelUpAnimFinished(); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.LevelUpAnimFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_ShowCollectedDailyCratePopup(); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.BP_ShowCollectedDailyCratePopup // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Rewards_Popup(int32_t EntryPoint); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.ExecuteUbergraph_WBP_Rewards_Popup // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

