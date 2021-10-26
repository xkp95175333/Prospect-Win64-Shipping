// WidgetBlueprintGeneratedClass WBP_ToggleText_Btn.WBP_ToggleText_Btn_C
// Size: 0x390 (Inherited: 0x2c8)
struct UWBP_ToggleText_Btn_C : UYWidget_Composite {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* SelectionToggle_Anim; // 0x2d0(0x08)
	struct UWidgetAnimation* HighlightRight_Anim; // 0x2d8(0x08)
	struct UWidgetAnimation* HighlightLeft_Anim; // 0x2e0(0x08)
	struct UButton* Btn_InputLeft; // 0x2e8(0x08)
	struct UButton* Btn_InputRight; // 0x2f0(0x08)
	struct UImage* Gfx_ButtonBackerLeft; // 0x2f8(0x08)
	struct UImage* Gfx_ButtonBackerRight; // 0x300(0x08)
	struct UImage* Gfx_DecoGradientLeft; // 0x308(0x08)
	struct UImage* Gfx_DecoGradientRight; // 0x310(0x08)
	struct UImage* Gfx_SelectionBarLeft; // 0x318(0x08)
	struct UImage* Gfx_SelectionBarRight; // 0x320(0x08)
	struct UTextBlock* Txt_LeftValue; // 0x328(0x08)
	struct UTextBlock* Txt_RightValue; // 0x330(0x08)
	struct UWBP_SelectionBracket_C* WBP_SelectionBracketLeft; // 0x338(0x08)
	struct UWBP_SelectionBracket_C* WBP_SelectionBracketRight; // 0x340(0x08)
	struct TArray<struct FText> SelectorOptions; // 0x348(0x10)
	struct FMulticastInlineDelegate OnToggleChanged; // 0x358(0x10)
	bool toggled; // 0x368(0x01)
	char pad_369[0x7]; // 0x369(0x07)
	struct FDataTableRowHandle SoundFX_ButtonHover; // 0x370(0x10)
	struct FDataTableRowHandle SoundFX_ButtonPress; // 0x380(0x10)

	void SetToggled(bool NewToggled, bool CallDelegate); // Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.SetToggled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_ToggleText_Btn(int32_t EntryPoint); // Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.ExecuteUbergraph_WBP_ToggleText_Btn // (Final|UbergraphFunction) // @ game+0x1e02480
	void OnToggleChanged__DelegateSignature(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.OnToggleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

