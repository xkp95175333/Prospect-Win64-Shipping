// WidgetBlueprintGeneratedClass WBP_Options_Menu.WBP_Options_Menu_C
// Size: 0x3d0 (Inherited: 0x340)
struct UWBP_Options_Menu_C : UYWidgetView_Options {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UWidgetAnimation* ScreenIn_Anim; // 0x348(0x08)
	struct UImage* Gfx_BG_DarkColor; // 0x350(0x08)
	struct UImage* Gfx_BG_LightColor; // 0x358(0x08)
	struct UImage* Gfx_Grid_Helper; // 0x360(0x08)
	struct UWBP_AccountLinking_C* WBP_AccountLinking; // 0x368(0x08)
	struct UWBP_BlurFullScreenBacker_Panel_C* WBP_BlurFullScreenBacker_Panel; // 0x370(0x08)
	struct UWBP_Common_Btn_C* WBP_Common_Btn_Credits; // 0x378(0x08)
	struct UWBP_Common_Btn_C* WBP_Common_Btn_CustomerService; // 0x380(0x08)
	struct UWBP_Common_Btn_C* WBP_Common_Btn_Debug; // 0x388(0x08)
	struct UWBP_Common_Btn_C* WBP_Common_Btn_ExitGame; // 0x390(0x08)
	struct UWBP_Common_Btn_C* WBP_Common_Btn_LinkAccounts; // 0x398(0x08)
	struct UWBP_Common_Btn_C* WBP_Common_Btn_ReportBug; // 0x3a0(0x08)
	struct UWBP_Common_Btn_C* WBP_Common_Btn_Resume; // 0x3a8(0x08)
	struct UWBP_Common_Btn_C* WBP_Common_Btn_ReturnToStation; // 0x3b0(0x08)
	struct UWBP_Common_Btn_C* WBP_Common_Btn_Settings; // 0x3b8(0x08)
	struct UWBP_GenericContent_Panel_C* WBP_GenericContent_Panel; // 0x3c0(0x08)
	struct UWBP_Options_Provider_C* OptionsProvider; // 0x3c8(0x08)

	void UpdateRegisteredWidgets(); // Function WBP_Options_Menu.WBP_Options_Menu_C.UpdateRegisteredWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void RegisterWidgets(); // Function WBP_Options_Menu.WBP_Options_Menu_C.RegisterWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_Options_Menu.WBP_Options_Menu_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Common_Btn_Resume_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Options_Menu.WBP_Options_Menu_C.BndEvt__WBP_Common_Btn_Resume_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetHidden(); // Function WBP_Options_Menu.WBP_Options_Menu_C.BP_OnWidgetHidden // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void OnWidgetsRegistered(); // Function WBP_Options_Menu.WBP_Options_Menu_C.OnWidgetsRegistered // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnButtonClicked(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Options_Menu.WBP_Options_Menu_C.OnButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Common_Btn_ReportBug_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Options_Menu.WBP_Options_Menu_C.BndEvt__WBP_Common_Btn_ReportBug_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Common_Btn_LinkAccounts_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Options_Menu.WBP_Options_Menu_C.BndEvt__WBP_Common_Btn_LinkAccounts_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetStartShow(); // Function WBP_Options_Menu.WBP_Options_Menu_C.BP_OnWidgetStartShow // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Options_Menu_WBP_Common_Btn_ReturnToStation_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Options_Menu.WBP_Options_Menu_C.BndEvt__WBP_Options_Menu_WBP_Common_Btn_ReturnToStation_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Options_Menu(int32_t EntryPoint); // Function WBP_Options_Menu.WBP_Options_Menu_C.ExecuteUbergraph_WBP_Options_Menu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

