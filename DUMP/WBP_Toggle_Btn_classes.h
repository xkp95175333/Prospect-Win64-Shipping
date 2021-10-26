// WidgetBlueprintGeneratedClass WBP_Toggle_Btn.WBP_Toggle_Btn_C
// Size: 0x421 (Inherited: 0x391)
struct UWBP_Toggle_Btn_C : UWBP_ButtonBase_Btn_C {
	char pad_391[0x7]; // 0x391(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct UWidgetAnimation* HighlightSheen_Anim; // 0x3a0(0x08)
	struct UWidgetAnimation* Selected_Anim; // 0x3a8(0x08)
	struct UWidgetAnimation* Idle_Anim; // 0x3b0(0x08)
	struct UWidgetAnimation* HighlightBracket_Anim; // 0x3b8(0x08)
	struct UImage* Gfx_DecoGradient; // 0x3c0(0x08)
	struct UImage* Gfx_Edge; // 0x3c8(0x08)
	struct UImage* Gfx_Fill; // 0x3d0(0x08)
	struct UImage* Gfx_SelectedFill; // 0x3d8(0x08)
	struct UImage* Gfx_Stroke; // 0x3e0(0x08)
	struct UImage* Icn_Selected; // 0x3e8(0x08)
	struct UWBP_SelectionHighlight_C* WBP_Deco_SelectionHighlight; // 0x3f0(0x08)
	struct UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x3f8(0x08)
	struct FLinearColor ButtonColorPrimary; // 0x400(0x10)
	struct FLinearColor ButtonColorSecondary; // 0x410(0x10)
	bool Selected; // 0x420(0x01)

	void SetSelected(bool Selected); // Function WBP_Toggle_Btn.WBP_Toggle_Btn_C.SetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void TriggerAnim(); // Function WBP_Toggle_Btn.WBP_Toggle_Btn_C.TriggerAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_Toggle_Btn.WBP_Toggle_Btn_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Hovered(); // Function WBP_Toggle_Btn.WBP_Toggle_Btn_C.Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Unhovered(); // Function WBP_Toggle_Btn.WBP_Toggle_Btn_C.Unhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Clicked(); // Function WBP_Toggle_Btn.WBP_Toggle_Btn_C.Clicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Toggle_Btn(int32_t EntryPoint); // Function WBP_Toggle_Btn.WBP_Toggle_Btn_C.ExecuteUbergraph_WBP_Toggle_Btn // (Final|UbergraphFunction) // @ game+0x1e02480
};

