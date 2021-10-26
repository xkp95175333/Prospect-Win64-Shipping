// WidgetBlueprintGeneratedClass SoftCurrencyDisplay_WBP.SoftCurrencyDisplay_WBP_C
// Size: 0x310 (Inherited: 0x2d8)
struct USoftCurrencyDisplay_WBP_C : UYWidget_SoftCurrencyDisplay {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UImage* Border; // 0x2e0(0x08)
	struct UImage* border_red; // 0x2e8(0x08)
	struct UCanvasPanel* maxContainer; // 0x2f0(0x08)
	struct UYTextBlock* ToolTip_Text; // 0x2f8(0x08)
	struct UYButton* YButton; // 0x300(0x08)
	struct UWBP_Generic_ToolTip_C* Button_ToolTipWidget; // 0x308(0x08)

	struct UWidget* Get_YButton_ToolTipWidget(); // Function SoftCurrencyDisplay_WBP.SoftCurrencyDisplay_WBP_C.Get_YButton_ToolTipWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void BndEvt__YButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function SoftCurrencyDisplay_WBP.SoftCurrencyDisplay_WBP_C.BndEvt__YButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__YButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function SoftCurrencyDisplay_WBP.SoftCurrencyDisplay_WBP_C.BndEvt__YButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_OnSetUpperCap(int32_t Value); // Function SoftCurrencyDisplay_WBP.SoftCurrencyDisplay_WBP_C.BP_OnSetUpperCap // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_SoftCurrencyDisplay_WBP(int32_t EntryPoint); // Function SoftCurrencyDisplay_WBP.SoftCurrencyDisplay_WBP_C.ExecuteUbergraph_SoftCurrencyDisplay_WBP // (Final|UbergraphFunction) // @ game+0x1e02480
};

