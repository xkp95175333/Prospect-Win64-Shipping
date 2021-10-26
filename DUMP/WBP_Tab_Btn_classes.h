// WidgetBlueprintGeneratedClass WBP_Tab_Btn.WBP_Tab_Btn_C
// Size: 0x390 (Inherited: 0x2e0)
struct UWBP_Tab_Btn_C : UWBP_TabElementBase_TabElem_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UWidgetAnimation* HighlightSheen_Anim; // 0x2e8(0x08)
	struct UWidgetAnimation* Selected_Anim; // 0x2f0(0x08)
	struct UWidgetAnimation* Idle_Anim; // 0x2f8(0x08)
	struct UWidgetAnimation* HighlightBracket_Anim; // 0x300(0x08)
	struct UImage* Gfx_DecoGradient; // 0x308(0x08)
	struct UImage* Gfx_EdgeSelected_Selected; // 0x310(0x08)
	struct UImage* Gfx_UnderlineFill; // 0x318(0x08)
	struct UImage* Gfx_UnderlineFillStatic; // 0x320(0x08)
	struct UImage* Icn_Placeholder; // 0x328(0x08)
	struct USizeBox* Layout_Icon_SizeBox; // 0x330(0x08)
	struct USizeBox* notification; // 0x338(0x08)
	struct UTextBlock* Txt_Label; // 0x340(0x08)
	struct UTextBlock* Txt_Selected_Label; // 0x348(0x08)
	struct UBorder* Underline; // 0x350(0x08)
	struct UWBP_SelectionBracket_C* WBP_Deco_SelectionBracket; // 0x358(0x08)
	struct UWBP_SelectionHighlight_C* WBP_Deco_SelectionHighlight; // 0x360(0x08)
	struct UWBP_Notification_C* WBP_Notification; // 0x368(0x08)
	struct FStucture_TabData TabSetup; // 0x370(0x20)

	void SequenceEvent__ENTRYPOINTWBP_Tab_Btn_1(); // Function WBP_Tab_Btn.WBP_Tab_Btn_C.SequenceEvent__ENTRYPOINTWBP_Tab_Btn_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void TriggerHighlight(); // Function WBP_Tab_Btn.WBP_Tab_Btn_C.TriggerHighlight // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_Tab_Btn.WBP_Tab_Btn_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_Tab_Btn.WBP_Tab_Btn_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Hovered(); // Function WBP_Tab_Btn.WBP_Tab_Btn_C.Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Unhovered(); // Function WBP_Tab_Btn.WBP_Tab_Btn_C.Unhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSelected(); // Function WBP_Tab_Btn.WBP_Tab_Btn_C.OnSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDeselected(); // Function WBP_Tab_Btn.WBP_Tab_Btn_C.OnDeselected // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Tab_Btn(int32_t EntryPoint); // Function WBP_Tab_Btn.WBP_Tab_Btn_C.ExecuteUbergraph_WBP_Tab_Btn // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

