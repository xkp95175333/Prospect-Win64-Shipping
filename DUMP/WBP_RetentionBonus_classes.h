// WidgetBlueprintGeneratedClass WBP_RetentionBonus.WBP_RetentionBonus_C
// Size: 0x448 (Inherited: 0x338)
struct UWBP_RetentionBonus_C : UYWidgetView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UWidgetAnimation* DummyPlayAudio_Anim; // 0x340(0x08)
	struct UWidgetAnimation* ScreenIn_Anim; // 0x348(0x08)
	struct UImage* Gfx_BackerHeaderFull; // 0x350(0x08)
	struct UImage* Gfx_Bg; // 0x358(0x08)
	struct UImage* Gfx_Bg_GradientFade; // 0x360(0x08)
	struct UImage* Gfx_Deco; // 0x368(0x08)
	struct UImage* Gfx_GlowBacker; // 0x370(0x08)
	struct UImage* Gfx_Gradient; // 0x378(0x08)
	struct UImage* Image; // 0x380(0x08)
	struct UImage* Image_2; // 0x388(0x08)
	struct UImage* Image_3; // 0x390(0x08)
	struct UImage* Image_85; // 0x398(0x08)
	struct UImage* Image_238; // 0x3a0(0x08)
	struct UTextBlock* Txt_DaysLoggedIn; // 0x3a8(0x08)
	struct UTextBlock* Txt_Description; // 0x3b0(0x08)
	struct UTextBlock* Txt_Header; // 0x3b8(0x08)
	struct UWBP_CelebrationBacker_Panel_B_C* WBP_CelebrationBacker_Panel_B; // 0x3c0(0x08)
	struct UWBP_Common_Btn_C* WBP_Common_Btn; // 0x3c8(0x08)
	struct UWBP_Footer_C_Panel_C* WBP_Footer_C_Panel; // 0x3d0(0x08)
	struct UWBP_GenericContent_Panel_C* WBP_GenericContent_Panel; // 0x3d8(0x08)
	struct UWBP_ProgressBar_C* WBP_ProgressBar_2; // 0x3e0(0x08)
	struct UWBP_RetentionBonusItem_C* WBP_Retention_Day1; // 0x3e8(0x08)
	struct UWBP_RetentionBonusItem_C* WBP_Retention_Day2; // 0x3f0(0x08)
	struct UWBP_RetentionBonusItem_C* WBP_Retention_Day3; // 0x3f8(0x08)
	struct UWBP_RetentionBonusItem_C* WBP_Retention_Day4; // 0x400(0x08)
	struct UWBP_RetentionBonusItem_C* WBP_Retention_Day5; // 0x408(0x08)
	struct UWBP_RetentionBonusItem_C* WBP_Retention_Day6; // 0x410(0x08)
	struct UWBP_RetentionBonusItem_C* WBP_Retention_Day7; // 0x418(0x08)
	struct FMulticastInlineDelegate OnDismissed; // 0x420(0x10)
	bool IsAnyRewardClaimed; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct FDataTableRowHandle ClaimedSoundFx; // 0x438(0x10)

	void SequenceEvent__ENTRYPOINTWBP_RetentionBonus_1(); // Function WBP_RetentionBonus.WBP_RetentionBonus_C.SequenceEvent__ENTRYPOINTWBP_RetentionBonus_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_RetentionBonus.WBP_RetentionBonus_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void InitRewards(struct FYRetentionProgress progress); // Function WBP_RetentionBonus.WBP_RetentionBonus_C.InitRewards // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void FillOutRewardsWidgets(struct TArray<struct FYRetentionBonusEntry> entries, struct FYRetentionProgress progress); // Function WBP_RetentionBonus.WBP_RetentionBonus_C.FillOutRewardsWidgets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SequenceEvent_1(); // Function WBP_RetentionBonus.WBP_RetentionBonus_C.SequenceEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_RetentionBonus_WBP_Common_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_RetentionBonus.WBP_RetentionBonus_C.BndEvt__WBP_RetentionBonus_WBP_Common_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void OnDataReceived(struct FYRetentionProgress progressData); // Function WBP_RetentionBonus.WBP_RetentionBonus_C.OnDataReceived // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetShown(); // Function WBP_RetentionBonus.WBP_RetentionBonus_C.BP_OnWidgetShown // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_RetentionBonus(int32_t EntryPoint); // Function WBP_RetentionBonus.WBP_RetentionBonus_C.ExecuteUbergraph_WBP_RetentionBonus // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void OnDismissed__DelegateSignature(); // Function WBP_RetentionBonus.WBP_RetentionBonus_C.OnDismissed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

