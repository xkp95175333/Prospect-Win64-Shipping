// WidgetBlueprintGeneratedClass WBP_Generic_Modal.WBP_Generic_Modal_C
// Size: 0x408 (Inherited: 0x2e8)
struct UWBP_Generic_Modal_C : UYWidget_ConfirmationModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* ScreenIn_Anim; // 0x2f0(0x08)
	struct UHorizontalBox* ButtonHolder; // 0x2f8(0x08)
	struct UCanvasPanel* ConfirmationLayout; // 0x300(0x08)
	struct UNamedSlot* CustomContentSlot; // 0x308(0x08)
	struct USizeBox* LoadingSpinner; // 0x310(0x08)
	struct URichTextBlock* RichTxt_Info; // 0x318(0x08)
	struct UWBP_BlurFullScreenBacker_Panel_C* WBP_BlurFullScreenBacker; // 0x320(0x08)
	struct UWBP_Common_Btn_C* WBP_Btn_Common_Primary; // 0x328(0x08)
	struct UWBP_Common_Btn_C* WBP_Btn_Common_Secondary; // 0x330(0x08)
	struct UWBP_Footer_B_Panel_C* WBP_Footer_B_Panel; // 0x338(0x08)
	struct UWBP_GenericContent_Panel_C* WBP_GenericContent_Panel_Confirmation; // 0x340(0x08)
	struct UWBP_LoadingSpinner_C* WBP_LoadingSpinner; // 0x348(0x08)
	struct UYTextBlock* YTxt_FauxHeadline; // 0x350(0x08)
	struct UYTextBlock* YTxt_Info_3; // 0x358(0x08)
	struct UYTextBlock* YTxt_Timer; // 0x360(0x08)
	struct FText HeadlineText; // 0x368(0x18)
	struct FText ContentText; // 0x380(0x18)
	bool ShowLoading; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct FText PrimaryButtonText; // 0x3a0(0x18)
	struct FText SecondaryButtonText; // 0x3b8(0x18)
	bool isConfirmationModal; // 0x3d0(0x01)
	bool isCancelationModal; // 0x3d1(0x01)
	bool isNoButtonModal; // 0x3d2(0x01)
	bool CloseOnClick; // 0x3d3(0x01)
	bool HideBackgroundBlur; // 0x3d4(0x01)
	char pad_3D5[0x3]; // 0x3d5(0x03)
	struct FString PrimaryButtonBIName; // 0x3d8(0x10)
	struct FString ButtonBILocation; // 0x3e8(0x10)
	struct FString SecondaryButtonBIName; // 0x3f8(0x10)

	void HasBIDataManuallySetUp(bool hasBIData); // Function WBP_Generic_Modal.WBP_Generic_Modal_C.HasBIDataManuallySetUp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_Generic_Modal.WBP_Generic_Modal_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	bool BP_HandleBackKey(); // Function WBP_Generic_Modal.WBP_Generic_Modal_C.BP_HandleBackKey // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetTexts(struct FText headline, struct FText Message, struct FText okButtonText, struct FText cancelButtonText); // Function WBP_Generic_Modal.WBP_Generic_Modal_C.SetTexts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_Generic_Modal.WBP_Generic_Modal_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Btn_Common_Primary_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Generic_Modal.WBP_Generic_Modal_C.BndEvt__WBP_Btn_Common_Primary_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Btn_Common_Secondary_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Generic_Modal.WBP_Generic_Modal_C.BndEvt__WBP_Btn_Common_Secondary_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetHidden(); // Function WBP_Generic_Modal.WBP_Generic_Modal_C.BP_OnWidgetHidden // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_SetupBIData(struct FString primaryButtonName, struct FString buttonLocation, struct FString secondaryButtonName); // Function WBP_Generic_Modal.WBP_Generic_Modal_C.BP_SetupBIData // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Generic_Modal(int32_t EntryPoint); // Function WBP_Generic_Modal.WBP_Generic_Modal_C.ExecuteUbergraph_WBP_Generic_Modal // (Final|UbergraphFunction) // @ game+0x1e02480
};

