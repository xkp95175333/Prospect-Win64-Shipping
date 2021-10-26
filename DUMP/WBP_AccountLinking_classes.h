// WidgetBlueprintGeneratedClass WBP_AccountLinking.WBP_AccountLinking_C
// Size: 0x330 (Inherited: 0x2c0)
struct UWBP_AccountLinking_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x2c8(0x08)
	struct UWidgetSwitcher* ContentSwitcher; // 0x2d0(0x08)
	struct UWBP_Common_Btn_C* WBP_Common_Btn_EGS; // 0x2d8(0x08)
	struct UWBP_Common_Btn_C* WBP_Common_Btn_Steam; // 0x2e0(0x08)
	struct UWBP_Generic_Modal_C* WBP_Generic_Modal_ChooseAccount; // 0x2e8(0x08)
	struct UWBP_Generic_Modal_C* WBP_Generic_Modal_ConfirmLink; // 0x2f0(0x08)
	struct UWBP_Generic_Modal_C* WBP_Generic_Modal_LinkAccounts; // 0x2f8(0x08)
	struct UWBP_Generic_Modal_C* WBP_Generic_Modal_LinkingInProgress; // 0x300(0x08)
	struct UWBP_Generic_Modal_C* WBP_Generic_Modal_Result; // 0x308(0x08)
	struct UYTextBlock* YTextBlock_ProcessingTime; // 0x310(0x08)
	struct FName EGS_Platform_Selected; // 0x318(0x08)
	struct FName Steam_Platform_Selected; // 0x320(0x08)
	struct FName cachedPlatform; // 0x328(0x08)

	void SetTimoutThresholdText(); // Function WBP_AccountLinking.WBP_AccountLinking_C.SetTimoutThresholdText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BindDelegates(); // Function WBP_AccountLinking.WBP_AccountLinking_C.BindDelegates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PlatformSetup(); // Function WBP_AccountLinking.WBP_AccountLinking_C.PlatformSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnAccountLinkingProcessUpdate(bool isInProcess); // Function WBP_AccountLinking.WBP_AccountLinking_C.OnAccountLinkingProcessUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnAccountLinkingResult(enum class EYAccountLinkingResultCode resultCode); // Function WBP_AccountLinking.WBP_AccountLinking_C.OnAccountLinkingResult // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Generic_Modal_A_K2Node_ComponentBoundEvent_1_OnButtonPrimary__DelegateSignature(); // Function WBP_AccountLinking.WBP_AccountLinking_C.BndEvt__WBP_Generic_Modal_A_K2Node_ComponentBoundEvent_1_OnButtonPrimary__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Generic_Modal_B_K2Node_ComponentBoundEvent_4_OnButtonPrimary__DelegateSignature(); // Function WBP_AccountLinking.WBP_AccountLinking_C.BndEvt__WBP_Generic_Modal_B_K2Node_ComponentBoundEvent_4_OnButtonPrimary__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Common_Btn_EGS_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_AccountLinking.WBP_AccountLinking_C.BndEvt__WBP_Common_Btn_EGS_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Common_Btn_Steam_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_AccountLinking.WBP_AccountLinking_C.BndEvt__WBP_Common_Btn_Steam_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Generic_Modal_LinkAccounts_K2Node_ComponentBoundEvent_9_OnButtonSecondary__DelegateSignature(); // Function WBP_AccountLinking.WBP_AccountLinking_C.BndEvt__WBP_Generic_Modal_LinkAccounts_K2Node_ComponentBoundEvent_9_OnButtonSecondary__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Generic_Modal_ChooseAccount_K2Node_ComponentBoundEvent_10_OnButtonSecondary__DelegateSignature(); // Function WBP_AccountLinking.WBP_AccountLinking_C.BndEvt__WBP_Generic_Modal_ChooseAccount_K2Node_ComponentBoundEvent_10_OnButtonSecondary__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ConfirmLinkEGS_K2Node_ComponentBoundEvent_11_OnButtonSecondary__DelegateSignature(); // Function WBP_AccountLinking.WBP_AccountLinking_C.BndEvt__WBP_ConfirmLinkEGS_K2Node_ComponentBoundEvent_11_OnButtonSecondary__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_AccountLinking.WBP_AccountLinking_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_AccountLinking_WBP_Generic_Modal_Result_K2Node_ComponentBoundEvent_2_OnButtonPrimary__DelegateSignature(); // Function WBP_AccountLinking.WBP_AccountLinking_C.BndEvt__WBP_AccountLinking_WBP_Generic_Modal_Result_K2Node_ComponentBoundEvent_2_OnButtonPrimary__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_AccountLinking(int32_t EntryPoint); // Function WBP_AccountLinking.WBP_AccountLinking_C.ExecuteUbergraph_WBP_AccountLinking // (Final|UbergraphFunction) // @ game+0x1e02480
};

