// WidgetBlueprintGeneratedClass WBP_Tutorial_Menu.WBP_Tutorial_Menu_C
// Size: 0x2f0 (Inherited: 0x260)
struct UWBP_Tutorial_Menu_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Escape_Anim; // 0x268(0x08)
	struct UWidgetAnimation* Died_Anim; // 0x270(0x08)
	struct UWidgetAnimation* ScreenIn_Anim; // 0x278(0x08)
	struct UImage* Gfx_Backer; // 0x280(0x08)
	struct UImage* Gfx_Exclaim; // 0x288(0x08)
	struct UImage* Gfx_Vignette; // 0x290(0x08)
	struct URichTextBlock* Txt_Rich_TutorialDetails; // 0x298(0x08)
	struct UTextBlock* Txt_TutorialDetails; // 0x2a0(0x08)
	struct UTextBlock* Txt_TutorialMain; // 0x2a8(0x08)
	struct UWBP_CelebrationBacker_Panel_B_C* WBP_CelebrationBacker_Panel_B; // 0x2b0(0x08)
	struct UWBP_DividerHorizontal_Panel_C* WBP_DividerHorizontal_Panel; // 0x2b8(0x08)
	struct UWBP_FlashFeedback_C* WBP_FlashFeedback; // 0x2c0(0x08)
	struct UWBP_Generic_Modal_C* WBP_Generic_Modal; // 0x2c8(0x08)
	struct FDataTableRowHandle SoundFX_ScreenIn; // 0x2d0(0x10)
	struct FDataTableRowHandle SoundFX_Transition; // 0x2e0(0x10)

	void SequenceEvent__ENTRYPOINTWBP_Tutorial_Menu_2(); // Function WBP_Tutorial_Menu.WBP_Tutorial_Menu_C.SequenceEvent__ENTRYPOINTWBP_Tutorial_Menu_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SequenceEvent__ENTRYPOINTWBP_Tutorial_Menu_1(); // Function WBP_Tutorial_Menu.WBP_Tutorial_Menu_C.SequenceEvent__ENTRYPOINTWBP_Tutorial_Menu_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnIntroAnimationFinished(); // Function WBP_Tutorial_Menu.WBP_Tutorial_Menu_C.OnIntroAnimationFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PlayIntroAnimation(float DelayToStartDropPodSequence); // Function WBP_Tutorial_Menu.WBP_Tutorial_Menu_C.PlayIntroAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_Tutorial_Menu.WBP_Tutorial_Menu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void SetupEndOfMatchTutorial(); // Function WBP_Tutorial_Menu.WBP_Tutorial_Menu_C.SetupEndOfMatchTutorial // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void TutorialTransition(); // Function WBP_Tutorial_Menu.WBP_Tutorial_Menu_C.TutorialTransition // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Tutorial_Menu_WBP_Generic_Modal_K2Node_ComponentBoundEvent_0_OnButtonPrimary__DelegateSignature(); // Function WBP_Tutorial_Menu.WBP_Tutorial_Menu_C.BndEvt__WBP_Tutorial_Menu_WBP_Generic_Modal_K2Node_ComponentBoundEvent_0_OnButtonPrimary__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Tutorial_Menu_WBP_Generic_Modal_K2Node_ComponentBoundEvent_1_OnButtonSecondary__DelegateSignature(); // Function WBP_Tutorial_Menu.WBP_Tutorial_Menu_C.BndEvt__WBP_Tutorial_Menu_WBP_Generic_Modal_K2Node_ComponentBoundEvent_1_OnButtonSecondary__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void TravelBackToStationNow(); // Function WBP_Tutorial_Menu.WBP_Tutorial_Menu_C.TravelBackToStationNow // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void FlashFeedback(); // Function WBP_Tutorial_Menu.WBP_Tutorial_Menu_C.FlashFeedback // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetVisibilityWithLog(enum class ESlateVisibility InVisibility, struct FString Context); // Function WBP_Tutorial_Menu.WBP_Tutorial_Menu_C.SetVisibilityWithLog // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Tutorial_Menu(int32_t EntryPoint); // Function WBP_Tutorial_Menu.WBP_Tutorial_Menu_C.ExecuteUbergraph_WBP_Tutorial_Menu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

