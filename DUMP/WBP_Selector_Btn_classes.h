// WidgetBlueprintGeneratedClass WBP_Selector_Btn.WBP_Selector_Btn_C
// Size: 0x3a9 (Inherited: 0x2c8)
struct UWBP_Selector_Btn_C : UYWidget_Composite {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* Highlight_Anim; // 0x2d0(0x08)
	struct UWidgetAnimation* PressRight_Anim; // 0x2d8(0x08)
	struct UWidgetAnimation* PressLeft_Anim; // 0x2e0(0x08)
	struct UButton* Btn_InputLeft; // 0x2e8(0x08)
	struct UButton* Btn_InputRight; // 0x2f0(0x08)
	struct UImage* Gfx_Arrow_Left; // 0x2f8(0x08)
	struct UImage* Gfx_Arrow_Right; // 0x300(0x08)
	struct UImage* Gfx_Backer; // 0x308(0x08)
	struct UImage* Gfx_DecoGradient; // 0x310(0x08)
	struct UProgressBar* ProgressBar_SelectorValue; // 0x318(0x08)
	struct UTextBlock* Txt_SelectorValue; // 0x320(0x08)
	struct USizeBox* ValueHolder; // 0x328(0x08)
	struct UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x330(0x08)
	bool UseProgressBar; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct TArray<struct FStructure_SelectorData> SelectorData; // 0x340(0x10)
	float ValueMin; // 0x350(0x04)
	float ValueMax; // 0x354(0x04)
	float StepSize; // 0x358(0x04)
	int32_t SelectedIndex; // 0x35c(0x04)
	float SelectedValue; // 0x360(0x04)
	char pad_364[0x4]; // 0x364(0x04)
	struct FTimerHandle ValueChangeTimerHandle; // 0x368(0x08)
	struct FMulticastInlineDelegate OnValueChanged; // 0x370(0x10)
	float ValueDisplayMultiplier; // 0x380(0x04)
	char pad_384[0x4]; // 0x384(0x04)
	struct FDataTableRowHandle SoundFX_ButtonHover; // 0x388(0x10)
	struct FDataTableRowHandle SoundFX_ButtonPress; // 0x398(0x10)
	bool bAllowFloat; // 0x3a8(0x01)

	void UpdateValueFromMouse(struct FPointerEvent MouseEvent); // Function WBP_Selector_Btn.WBP_Selector_Btn_C.UpdateValueFromMouse // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Selector_Btn.WBP_Selector_Btn_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateValueFromPercent(float percent); // Function WBP_Selector_Btn.WBP_Selector_Btn_C.UpdateValueFromPercent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Selector_Btn.WBP_Selector_Btn_C.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Selector_Btn.WBP_Selector_Btn_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void IncreaseValue(); // Function WBP_Selector_Btn.WBP_Selector_Btn_C.IncreaseValue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void DecreaseValue(); // Function WBP_Selector_Btn.WBP_Selector_Btn_C.DecreaseValue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void HasPredefinedData(bool HasPredefinedData); // Function WBP_Selector_Btn.WBP_Selector_Btn_C.HasPredefinedData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void UpdateDisplay(struct FStructure_SelectorData Data); // Function WBP_Selector_Btn.WBP_Selector_Btn_C.UpdateDisplay // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateProgressBar(struct FStructure_SelectorData Data); // Function WBP_Selector_Btn.WBP_Selector_Btn_C.UpdateProgressBar // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetValueByName(struct FName Name); // Function WBP_Selector_Btn.WBP_Selector_Btn_C.SetValueByName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetValueByFloat(float Value); // Function WBP_Selector_Btn.WBP_Selector_Btn_C.SetValueByFloat // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetValueByIndex(int32_t Index); // Function WBP_Selector_Btn.WBP_Selector_Btn_C.SetValueByIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_Selector_Btn.WBP_Selector_Btn_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Selector_Btn.WBP_Selector_Btn_C.BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Selector_Btn.WBP_Selector_Btn_C.BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Selector_Btn.WBP_Selector_Btn_C.BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Selector_Btn.WBP_Selector_Btn_C.BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature(); // Function WBP_Selector_Btn.WBP_Selector_Btn_C.BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature(); // Function WBP_Selector_Btn.WBP_Selector_Btn_C.BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_Selector_Btn.WBP_Selector_Btn_C.BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_Selector_Btn.WBP_Selector_Btn_C.BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Selector_Btn(int32_t EntryPoint); // Function WBP_Selector_Btn.WBP_Selector_Btn_C.ExecuteUbergraph_WBP_Selector_Btn // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void OnValueChanged__DelegateSignature(struct UWBP_Selector_Btn_C* selector, struct FStructure_SelectorData Value); // Function WBP_Selector_Btn.WBP_Selector_Btn_C.OnValueChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

