// WidgetBlueprintGeneratedClass WBP_Bug_Form_Menu.WBP_Bug_Form_Menu_C
// Size: 0x414 (Inherited: 0x338)
struct UWBP_Bug_Form_Menu_C : UYWidgetView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UWidgetAnimation* ScreenIn_Anim; // 0x340(0x08)
	struct UMultiLineEditableText* EditTxtMulti_PlayerBehaviour; // 0x348(0x08)
	struct UMultiLineEditableText* EditTxtMulti_ReproSteps; // 0x350(0x08)
	struct UEditableTextBox* EditTxtSingle_BugSummary; // 0x358(0x08)
	struct UImage* Gfx_Backer_2; // 0x360(0x08)
	struct UImage* Gfx_Backer_3; // 0x368(0x08)
	struct UImage* Gfx_BG_DarkColor; // 0x370(0x08)
	struct UImage* Gfx_BG_LightColor; // 0x378(0x08)
	struct UImage* Gfx_Grid_Helper; // 0x380(0x08)
	struct UImage* HACKCLICKBLOCK; // 0x388(0x08)
	struct UOverlay* LoadingOverlay; // 0x390(0x08)
	struct UWBP_BlurFullScreenBacker_Panel_C* WBP_BlurFullScreenBacker_Panel; // 0x398(0x08)
	struct UWBP_Common_Btn_C* WBP_Common_Btn_AttachFile; // 0x3a0(0x08)
	struct UWBP_Common_Btn_C* WBP_Common_Btn_Cancel; // 0x3a8(0x08)
	struct UWBP_Common_Btn_C* WBP_Common_Btn_Submit; // 0x3b0(0x08)
	struct UWBP_DividerHorizontal_Panel_C* WBP_DividerHorizontal_Panel; // 0x3b8(0x08)
	struct UWBP_Dropdown_Btn_C* WBP_Dropdown_Btn; // 0x3c0(0x08)
	struct UWBP_GenericContent_Panel_C* WBP_GenericContent_Panel; // 0x3c8(0x08)
	struct UWBP_Toast_C* WBP_Toast; // 0x3d0(0x08)
	struct UWBP_BugReporter_Provider_C* BugReporterProvider; // 0x3d8(0x08)
	struct FText FailureAlphanumeric; // 0x3e0(0x18)
	struct FText FailureMissingText; // 0x3f8(0x18)
	float SuccessAnimDelay; // 0x410(0x04)

	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_Bug_Form_Menu.WBP_Bug_Form_Menu_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Common_Btn_ReturnToStation_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Bug_Form_Menu.WBP_Bug_Form_Menu_C.BndEvt__WBP_Common_Btn_ReturnToStation_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetHidden(); // Function WBP_Bug_Form_Menu.WBP_Bug_Form_Menu_C.BP_OnWidgetHidden // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Common_Btn_ExitGame_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Bug_Form_Menu.WBP_Bug_Form_Menu_C.BndEvt__WBP_Common_Btn_ExitGame_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetStartShow(); // Function WBP_Bug_Form_Menu.WBP_Bug_Form_Menu_C.BP_OnWidgetStartShow // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Common_Btn_AttachFile_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Bug_Form_Menu.WBP_Bug_Form_Menu_C.BndEvt__WBP_Common_Btn_AttachFile_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Bug_Form_Menu(int32_t EntryPoint); // Function WBP_Bug_Form_Menu.WBP_Bug_Form_Menu_C.ExecuteUbergraph_WBP_Bug_Form_Menu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

