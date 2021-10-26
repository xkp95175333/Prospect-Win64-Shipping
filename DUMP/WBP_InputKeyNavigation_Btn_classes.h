// WidgetBlueprintGeneratedClass WBP_InputKeyNavigation_Btn.WBP_InputKeyNavigation_Btn_C
// Size: 0x430 (Inherited: 0x391)
struct UWBP_InputKeyNavigation_Btn_C : UWBP_ButtonBase_Btn_C {
	char pad_391[0x7]; // 0x391(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct UWidgetAnimation* Release_Anim; // 0x3a0(0x08)
	struct UWidgetAnimation* Press_Anim; // 0x3a8(0x08)
	struct UWidgetAnimation* Selected_Anim; // 0x3b0(0x08)
	struct UWidgetAnimation* HighlightBracket_Anim; // 0x3b8(0x08)
	struct UImage* Gfx_HighlightBottom; // 0x3c0(0x08)
	struct UImage* Gfx_HighlightTop; // 0x3c8(0x08)
	struct UTextBlock* TxtLabel; // 0x3d0(0x08)
	struct UWBP_InputKey_C* WBP_InputKeyCombo; // 0x3d8(0x08)
	struct UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x3e0(0x08)
	struct FStructure_InputKeyNav NavItemSetup; // 0x3e8(0x48)

	void SetHighlight(bool Top, bool Bottom); // Function WBP_InputKeyNavigation_Btn.WBP_InputKeyNavigation_Btn_C.SetHighlight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Clicked(); // Function WBP_InputKeyNavigation_Btn.WBP_InputKeyNavigation_Btn_C.Clicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Hovered(); // Function WBP_InputKeyNavigation_Btn.WBP_InputKeyNavigation_Btn_C.Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Unhovered(); // Function WBP_InputKeyNavigation_Btn.WBP_InputKeyNavigation_Btn_C.Unhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Pressed(); // Function WBP_InputKeyNavigation_Btn.WBP_InputKeyNavigation_Btn_C.Pressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Released(); // Function WBP_InputKeyNavigation_Btn.WBP_InputKeyNavigation_Btn_C.Released // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_InputKeyNavigation_Btn.WBP_InputKeyNavigation_Btn_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_InputKeyNavigation_Btn.WBP_InputKeyNavigation_Btn_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_InputKeyNavigation_Btn(int32_t EntryPoint); // Function WBP_InputKeyNavigation_Btn.WBP_InputKeyNavigation_Btn_C.ExecuteUbergraph_WBP_InputKeyNavigation_Btn // (Final|UbergraphFunction) // @ game+0x1e02480
};

