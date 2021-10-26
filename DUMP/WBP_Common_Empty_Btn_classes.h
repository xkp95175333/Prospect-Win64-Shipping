// WidgetBlueprintGeneratedClass WBP_Common_Empty_Btn.WBP_Common_Empty_Btn_C
// Size: 0x441 (Inherited: 0x391)
struct UWBP_Common_Empty_Btn_C : UWBP_ButtonBase_Btn_C {
	char pad_391[0x7]; // 0x391(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct UWidgetAnimation* Release_Anim; // 0x3a0(0x08)
	struct UWidgetAnimation* Press_Anim; // 0x3a8(0x08)
	struct UWidgetAnimation* HighlightSheen_Anim; // 0x3b0(0x08)
	struct UWidgetAnimation* Selected_Anim; // 0x3b8(0x08)
	struct UWidgetAnimation* Idle_Anim; // 0x3c0(0x08)
	struct UWidgetAnimation* HighlightBracket_Anim; // 0x3c8(0x08)
	struct UImage* Gfx_DecoGradient; // 0x3d0(0x08)
	struct UImage* Gfx_Edge; // 0x3d8(0x08)
	struct UImage* Gfx_Fill; // 0x3e0(0x08)
	struct UImage* Gfx_FillDisabled; // 0x3e8(0x08)
	struct UImage* Gfx_Stroke; // 0x3f0(0x08)
	struct UImage* Icn_Lock; // 0x3f8(0x08)
	struct UOverlay* Layout_ButtonDisabled; // 0x400(0x08)
	struct UNamedSlot* Layout_ContentSlot; // 0x408(0x08)
	struct UWBP_SelectionHighlight_C* WBP_Deco_SelectionHighlight; // 0x410(0x08)
	struct UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x418(0x08)
	struct FLinearColor ButtonColorPrimary; // 0x420(0x10)
	struct FLinearColor ButtonColorSecondary; // 0x430(0x10)
	bool IsDisabled; // 0x440(0x01)

	void SequenceEvent__ENTRYPOINTWBP_Common_Empty_Btn_1(); // Function WBP_Common_Empty_Btn.WBP_Common_Empty_Btn_C.SequenceEvent__ENTRYPOINTWBP_Common_Empty_Btn_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void IsButtonDisabled(bool IsDisabled); // Function WBP_Common_Empty_Btn.WBP_Common_Empty_Btn_C.IsButtonDisabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void EmptyBtn_TriggerAnim(); // Function WBP_Common_Empty_Btn.WBP_Common_Empty_Btn_C.EmptyBtn_TriggerAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_Common_Empty_Btn.WBP_Common_Empty_Btn_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Clicked(); // Function WBP_Common_Empty_Btn.WBP_Common_Empty_Btn_C.Clicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Unhovered(); // Function WBP_Common_Empty_Btn.WBP_Common_Empty_Btn_C.Unhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Hovered(); // Function WBP_Common_Empty_Btn.WBP_Common_Empty_Btn_C.Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Pressed(); // Function WBP_Common_Empty_Btn.WBP_Common_Empty_Btn_C.Pressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Released(); // Function WBP_Common_Empty_Btn.WBP_Common_Empty_Btn_C.Released // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Common_Empty_Btn(int32_t EntryPoint); // Function WBP_Common_Empty_Btn.WBP_Common_Empty_Btn_C.ExecuteUbergraph_WBP_Common_Empty_Btn // (Final|UbergraphFunction) // @ game+0x1e02480
};

