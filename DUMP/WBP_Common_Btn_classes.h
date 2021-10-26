// WidgetBlueprintGeneratedClass WBP_Common_Btn.WBP_Common_Btn_C
// Size: 0x48c (Inherited: 0x391)
struct UWBP_Common_Btn_C : UWBP_ButtonBase_Btn_C {
	char pad_391[0x7]; // 0x391(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct UWidgetAnimation* ScreenIn_Anim; // 0x3a0(0x08)
	struct UWidgetAnimation* Release_Anim; // 0x3a8(0x08)
	struct UWidgetAnimation* Press_Anim; // 0x3b0(0x08)
	struct UWidgetAnimation* HighlightSheen_Anim; // 0x3b8(0x08)
	struct UWidgetAnimation* Selected_Anim; // 0x3c0(0x08)
	struct UWidgetAnimation* Idle_Anim; // 0x3c8(0x08)
	struct UWidgetAnimation* HighlightBracket_Anim; // 0x3d0(0x08)
	struct UImage* Gfx_BtnBacker; // 0x3d8(0x08)
	struct UImage* Gfx_Deco_TR; // 0x3e0(0x08)
	struct UImage* Gfx_DecoGradient; // 0x3e8(0x08)
	struct UImage* Gfx_Edge; // 0x3f0(0x08)
	struct UImage* Gfx_Fill; // 0x3f8(0x08)
	struct UImage* Gfx_FillDisabled; // 0x400(0x08)
	struct UImage* Gfx_Stroke; // 0x408(0x08)
	struct UImage* Icn_Lock; // 0x410(0x08)
	struct UImage* Icn_Placeholder; // 0x418(0x08)
	struct UOverlay* Layout_ButtonDisabled; // 0x420(0x08)
	struct UTextBlock* Txt_Label; // 0x428(0x08)
	struct UTextBlock* Txt_Label_Light; // 0x430(0x08)
	struct UWBP_SelectionHighlight_C* WBP_Deco_SelectionHighlight; // 0x438(0x08)
	struct UWBP_InputKey_C* WBP_InputKey; // 0x440(0x08)
	struct UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x448(0x08)
	struct FLinearColor ButtonColorPrimary; // 0x450(0x10)
	struct FLinearColor ButtonColorSecondary; // 0x460(0x10)
	struct FText BtnLabel; // 0x470(0x18)
	bool UseKeyBinding; // 0x488(0x01)
	bool UseIcon; // 0x489(0x01)
	bool IsDisabled; // 0x48a(0x01)
	bool UseLightText; // 0x48b(0x01)

	void SequenceEvent__ENTRYPOINTWBP_Common_Btn_1(); // Function WBP_Common_Btn.WBP_Common_Btn_C.SequenceEvent__ENTRYPOINTWBP_Common_Btn_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Set Button Enabled State(bool IsButtonDisabled); // Function WBP_Common_Btn.WBP_Common_Btn_C.Set Button Enabled State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_Common_Btn.WBP_Common_Btn_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Set Color(struct FLinearColor NewSecondaryButtonColor, struct FLinearColor NewPrimaryButtonColor); // Function WBP_Common_Btn.WBP_Common_Btn_C.Set Color // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetText(struct FText Text); // Function WBP_Common_Btn.WBP_Common_Btn_C.SetText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Hovered(); // Function WBP_Common_Btn.WBP_Common_Btn_C.Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Unhovered(); // Function WBP_Common_Btn.WBP_Common_Btn_C.Unhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Clicked(); // Function WBP_Common_Btn.WBP_Common_Btn_C.Clicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Pressed(); // Function WBP_Common_Btn.WBP_Common_Btn_C.Pressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Released(); // Function WBP_Common_Btn.WBP_Common_Btn_C.Released // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_Common_Btn.WBP_Common_Btn_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void TriggerAnim(); // Function WBP_Common_Btn.WBP_Common_Btn_C.TriggerAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Common_Btn(int32_t EntryPoint); // Function WBP_Common_Btn.WBP_Common_Btn_C.ExecuteUbergraph_WBP_Common_Btn // (Final|UbergraphFunction) // @ game+0x1e02480
};

