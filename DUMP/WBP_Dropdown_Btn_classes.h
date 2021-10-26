// WidgetBlueprintGeneratedClass WBP_Dropdown_Btn.WBP_Dropdown_Btn_C
// Size: 0x340 (Inherited: 0x2f0)
struct UWBP_Dropdown_Btn_C : UWBP_DropdownBase_Btn_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UWidgetAnimation* Highlight_Anim; // 0x2f8(0x08)
	struct UImage* Gfx_DecoGradient; // 0x300(0x08)
	struct UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x308(0x08)
	struct FDataTableRowHandle SoundFX_ButtonHover; // 0x310(0x10)
	struct FDataTableRowHandle Ui Event Row Handle; // 0x320(0x10)
	struct FDataTableRowHandle SoundFX_ButtonPress; // 0x330(0x10)

	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Dropdown_Btn.WBP_Dropdown_Btn_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Dropdown_Btn.WBP_Dropdown_Btn_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__m_comboBox_K2Node_ComponentBoundEvent_0_OnOpeningEvent__DelegateSignature(); // Function WBP_Dropdown_Btn.WBP_Dropdown_Btn_C.BndEvt__m_comboBox_K2Node_ComponentBoundEvent_0_OnOpeningEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Dropdown_Btn(int32_t EntryPoint); // Function WBP_Dropdown_Btn.WBP_Dropdown_Btn_C.ExecuteUbergraph_WBP_Dropdown_Btn // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

