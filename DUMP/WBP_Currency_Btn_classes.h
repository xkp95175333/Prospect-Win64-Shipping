// WidgetBlueprintGeneratedClass WBP_Currency_Btn.WBP_Currency_Btn_C
// Size: 0x4c1 (Inherited: 0x391)
struct UWBP_Currency_Btn_C : UWBP_ButtonBase_Btn_C {
	char pad_391[0x7]; // 0x391(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct UWidgetAnimation* Release_Anim; // 0x3a0(0x08)
	struct UWidgetAnimation* Press_Anim; // 0x3a8(0x08)
	struct UWidgetAnimation* HighlightSheen_Anim; // 0x3b0(0x08)
	struct UWidgetAnimation* Selected_Anim; // 0x3b8(0x08)
	struct UWidgetAnimation* Idle_Anim; // 0x3c0(0x08)
	struct UWidgetAnimation* Highlight_Anim; // 0x3c8(0x08)
	struct USizeBox* CurrencyIcon; // 0x3d0(0x08)
	struct UImage* Gfx_DecoGradient; // 0x3d8(0x08)
	struct UImage* Gfx_Edge; // 0x3e0(0x08)
	struct UImage* Gfx_FillDark; // 0x3e8(0x08)
	struct UImage* Gfx_FillLight; // 0x3f0(0x08)
	struct UImage* Gfx_Underline; // 0x3f8(0x08)
	struct UImage* Icn_Placeholder; // 0x400(0x08)
	struct UTextBlock* Txt_Value; // 0x408(0x08)
	struct UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x410(0x08)
	struct UWBP_SelectionHighlight_C* WBP_SelectionHighlight; // 0x418(0x08)
	struct FText LabelPrimary; // 0x420(0x18)
	struct FSlateBrush Image; // 0x438(0x88)
	enum class EYCurrencyType currencyType; // 0x4c0(0x01)

	void SequenceEvent__ENTRYPOINTWBP_Currency_Btn_1(); // Function WBP_Currency_Btn.WBP_Currency_Btn_C.SequenceEvent__ENTRYPOINTWBP_Currency_Btn_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void On Local Currencies Receivedd(); // Function WBP_Currency_Btn.WBP_Currency_Btn_C.On Local Currencies Receivedd // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Setup WBP_Currency_Btn(); // Function WBP_Currency_Btn.WBP_Currency_Btn_C.Setup WBP_Currency_Btn // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Currency_Btn_HighlightSheen(); // Function WBP_Currency_Btn.WBP_Currency_Btn_C.Currency_Btn_HighlightSheen // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_Currency_Btn.WBP_Currency_Btn_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Hovered(); // Function WBP_Currency_Btn.WBP_Currency_Btn_C.Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Unhovered(); // Function WBP_Currency_Btn.WBP_Currency_Btn_C.Unhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Pressed(); // Function WBP_Currency_Btn.WBP_Currency_Btn_C.Pressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Released(); // Function WBP_Currency_Btn.WBP_Currency_Btn_C.Released // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnLocalCurrenciesReceived(); // Function WBP_Currency_Btn.WBP_Currency_Btn_C.OnLocalCurrenciesReceived // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_Currency_Btn.WBP_Currency_Btn_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Currency_Btn(int32_t EntryPoint); // Function WBP_Currency_Btn.WBP_Currency_Btn_C.ExecuteUbergraph_WBP_Currency_Btn // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

