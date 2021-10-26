// WidgetBlueprintGeneratedClass DialogContainer_WBP.DialogContainer_WBP_C
// Size: 0x358 (Inherited: 0x320)
struct UDialogContainer_WBP_C : UYDialogContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWBP_Form_Menu_C* CustomerSupportForm; // 0x328(0x08)
	struct UWBP_Generic_Modal_C* ExitGameConfirmationModal; // 0x330(0x08)
	struct UWBP_Generic_Modal_C* ExitGameSurveyConfirmationModal; // 0x338(0x08)
	struct UWBP_Generic_Modal_C* OkCancelConfirmationModal; // 0x340(0x08)
	struct UWBP_LoadingOverlay_C* WBP_LoadingOverlay; // 0x348(0x08)
	struct UWBP_StartupMessagesContainer_C* WBP_StartupMessagesContainer; // 0x350(0x08)

	struct UYWidget_ConfirmationModal* BP_GetDialogOKAndCancelModal(); // Function DialogContainer_WBP.DialogContainer_WBP_C.BP_GetDialogOKAndCancelModal // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UYWidget_ConfirmationModal* BP_RequestDialogOKAndCancel(struct FText headline, struct FText Message, struct FText okButtonText, struct FText cancelButtonText); // Function DialogContainer_WBP.DialogContainer_WBP_C.BP_RequestDialogOKAndCancel // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnOkCancelModalIntermittentCollapseFinished(); // Function DialogContainer_WBP.DialogContainer_WBP_C.OnOkCancelModalIntermittentCollapseFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	bool BP_CloseDialogContainers(); // Function DialogContainer_WBP.DialogContainer_WBP_C.BP_CloseDialogContainers // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UYWidget_ConfirmationModal* BP_RequestDialogExitGameAlternative(); // Function DialogContainer_WBP.DialogContainer_WBP_C.BP_RequestDialogExitGameAlternative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_ShowCustomerSupportWidget(struct FYPlayerSupportReportRequestData Data); // Function DialogContainer_WBP.DialogContainer_WBP_C.BP_ShowCustomerSupportWidget // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ExitGameSurveyConfirmationModal_K2Node_ComponentBoundEvent_0_OnButtonPrimary__DelegateSignature(); // Function DialogContainer_WBP.DialogContainer_WBP_C.BndEvt__ExitGameSurveyConfirmationModal_K2Node_ComponentBoundEvent_0_OnButtonPrimary__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_ShowWelcomeModal(); // Function DialogContainer_WBP.DialogContainer_WBP_C.BP_ShowWelcomeModal // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_ShowLoadingOverlay(struct FText Message); // Function DialogContainer_WBP.DialogContainer_WBP_C.BP_ShowLoadingOverlay // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BP_HideLoadingOverlay(); // Function DialogContainer_WBP.DialogContainer_WBP_C.BP_HideLoadingOverlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_DialogContainer_WBP(int32_t EntryPoint); // Function DialogContainer_WBP.DialogContainer_WBP_C.ExecuteUbergraph_DialogContainer_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

