// WidgetBlueprintGeneratedClass WBP_LegalAgreements_Menu.WBP_LegalAgreements_Menu_C
// Size: 0x358 (Inherited: 0x300)
struct UWBP_LegalAgreements_Menu_C : UYWidget_LegalAgreements {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UWidgetAnimation* LegalIn_Anim; // 0x308(0x08)
	struct UWidgetAnimation* LegalOut_Anim; // 0x310(0x08)
	struct UImage* Gfx_BackgroundFill; // 0x318(0x08)
	struct UWBP_LanguageSelection_C* languageSelection; // 0x320(0x08)
	struct UOverlay* SelectionAction; // 0x328(0x08)
	struct UWBP_Common_Btn_C* WBP_Common_Btn_Accept; // 0x330(0x08)
	struct UWBP_Common_Btn_C* WBP_Common_Btn_Cancel; // 0x338(0x08)
	struct UWBP_LoadingOverlay_C* WBP_LoadingOverlay; // 0x340(0x08)
	struct UWBP_SingleRowScroll_Panel_C* WBP_SingleRowScroll_Panel; // 0x348(0x08)
	struct UWBP_Toggle_Btn_C* WBP_Toggle_Btn; // 0x350(0x08)

	struct UWidgetAnimation* BP_AnimateOut(); // Function WBP_LegalAgreements_Menu.WBP_LegalAgreements_Menu_C.BP_AnimateOut // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnAnimateOutFinished(); // Function WBP_LegalAgreements_Menu.WBP_LegalAgreements_Menu_C.OnAnimateOutFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_LegalAgreements_Menu.WBP_LegalAgreements_Menu_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_LegalAgreements_Menu.WBP_LegalAgreements_Menu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Common_Btn_Accept_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_LegalAgreements_Menu.WBP_LegalAgreements_Menu_C.BndEvt__WBP_Common_Btn_Accept_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Common_Btn_Cancel_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_LegalAgreements_Menu.WBP_LegalAgreements_Menu_C.BndEvt__WBP_Common_Btn_Cancel_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_LegalAgreements_Menu(int32_t EntryPoint); // Function WBP_LegalAgreements_Menu.WBP_LegalAgreements_Menu_C.ExecuteUbergraph_WBP_LegalAgreements_Menu // (Final|UbergraphFunction) // @ game+0x1e02480
};

