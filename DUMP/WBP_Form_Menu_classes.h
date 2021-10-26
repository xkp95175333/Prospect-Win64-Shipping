// WidgetBlueprintGeneratedClass WBP_Form_Menu.WBP_Form_Menu_C
// Size: 0x468 (Inherited: 0x3a8)
struct UWBP_Form_Menu_C : UYWidgetView_CustomerSupport {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a8(0x08)
	struct UWidgetAnimation* ScreenIn_Anim; // 0x3b0(0x08)
	struct UMultiLineEditableText* EditTxtMulti_Description; // 0x3b8(0x08)
	struct UEditableTextBox* EditTxtSingle_Email; // 0x3c0(0x08)
	struct UEditableTextBox* EditTxtSingle_PlayerName; // 0x3c8(0x08)
	struct UImage* Gfx_Backer; // 0x3d0(0x08)
	struct UImage* Gfx_BG_DarkColor; // 0x3d8(0x08)
	struct UImage* Gfx_BG_LightColor; // 0x3e0(0x08)
	struct UImage* Gfx_Grid_Helper; // 0x3e8(0x08)
	struct UWBP_BlurFullScreenBacker_Panel_C* WBP_BlurFullScreenBacker_Panel; // 0x3f0(0x08)
	struct UWBP_Common_Btn_C* WBP_Common_Btn_Cancel; // 0x3f8(0x08)
	struct UWBP_Common_Btn_C* WBP_Common_Btn_Submit; // 0x400(0x08)
	struct UWBP_DividerHorizontal_Panel_C* WBP_DividerHorizontal_Panel; // 0x408(0x08)
	struct UWBP_Dropdown_Btn_C* WBP_Dropdown_Btn_ReportReason; // 0x410(0x08)
	struct UWBP_GenericContent_Panel_C* WBP_GenericContent_Panel; // 0x418(0x08)
	struct UWBP_Toast_C* WBP_Toast; // 0x420(0x08)
	struct FText FailureMissingText; // 0x428(0x18)
	struct FText FailureEmail; // 0x440(0x18)
	struct TArray<struct FString> ReportReasonTypes; // 0x458(0x10)

	void SetPlayerData(struct FYPlayerSupportReportRequestData Data); // Function WBP_Form_Menu.WBP_Form_Menu_C.SetPlayerData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetReportReasonOptions(); // Function WBP_Form_Menu.WBP_Form_Menu_C.SetReportReasonOptions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_Form_Menu.WBP_Form_Menu_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Common_Btn_ExitGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Form_Menu.WBP_Form_Menu_C.BndEvt__WBP_Common_Btn_ExitGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetHidden(); // Function WBP_Form_Menu.WBP_Form_Menu_C.BP_OnWidgetHidden // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Common_Btn_ReturnToStation_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Form_Menu.WBP_Form_Menu_C.BndEvt__WBP_Common_Btn_ReturnToStation_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetShown(); // Function WBP_Form_Menu.WBP_Form_Menu_C.BP_OnWidgetShown // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_OnReportData(struct FText primary, struct FText secondary, bool SUCCESS); // Function WBP_Form_Menu.WBP_Form_Menu_C.BP_OnReportData // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Form_Menu(int32_t EntryPoint); // Function WBP_Form_Menu.WBP_Form_Menu_C.ExecuteUbergraph_WBP_Form_Menu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

