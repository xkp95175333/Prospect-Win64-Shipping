// WidgetBlueprintGeneratedClass WBP_Disconnected_Menu.WBP_Disconnected_Menu_C
// Size: 0x310 (Inherited: 0x2e0)
struct UWBP_Disconnected_Menu_C : UYWidget_Disconnected {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UWBP_Common_Empty_Btn_C* Btn_GiveFeedback; // 0x2e8(0x08)
	struct UWBP_Common_Empty_Btn_C* Btn_JoinCommunity; // 0x2f0(0x08)
	struct UWBP_Common_Empty_Btn_C* Btn_VisitWebsite; // 0x2f8(0x08)
	struct UWBP_Common_Btn_C* WBP_ExitGame; // 0x300(0x08)
	struct FTimerHandle UpdateSecondsLeftTimer; // 0x308(0x08)

	void Refresh(); // Function WBP_Disconnected_Menu.WBP_Disconnected_Menu_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateRetryTimer(struct FTimerHandle logTimerHandle); // Function WBP_Disconnected_Menu.WBP_Disconnected_Menu_C.UpdateRetryTimer // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnUnrecoverableError(); // Function WBP_Disconnected_Menu.WBP_Disconnected_Menu_C.OnUnrecoverableError // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__Btn_VisitWebsite_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Disconnected_Menu.WBP_Disconnected_Menu_C.BndEvt__Btn_VisitWebsite_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__Btn_GiveFeedback_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Disconnected_Menu.WBP_Disconnected_Menu_C.BndEvt__Btn_GiveFeedback_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__Btn_JoinCommunity_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Disconnected_Menu.WBP_Disconnected_Menu_C.BndEvt__Btn_JoinCommunity_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Common_Btn_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Disconnected_Menu.WBP_Disconnected_Menu_C.BndEvt__WBP_Common_Btn_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Disconnected_Menu(int32_t EntryPoint); // Function WBP_Disconnected_Menu.WBP_Disconnected_Menu_C.ExecuteUbergraph_WBP_Disconnected_Menu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

