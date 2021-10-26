// WidgetBlueprintGeneratedClass WBP_Keybinding_Btn.WBP_Keybinding_Btn_C
// Size: 0x3f0 (Inherited: 0x2c0)
struct UWBP_Keybinding_Btn_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UInputKeySelector* AlternateKeyBinding; // 0x2c8(0x08)
	struct UInputKeySelector* GamepadKeyBinding; // 0x2d0(0x08)
	struct UImage* Gfx_DecoGradientLeft; // 0x2d8(0x08)
	struct UImage* Gfx_DecoGradientRight; // 0x2e0(0x08)
	struct UImage* Gfx_DecoGradientRight_2; // 0x2e8(0x08)
	struct UInputKeySelector* MainKeyBinding; // 0x2f0(0x08)
	struct UWBP_InputKey_C* WBP_InputKey_Gamepad; // 0x2f8(0x08)
	struct UWBP_InputKey_C* WBP_InputKey_GamepadAlternate; // 0x300(0x08)
	struct UWBP_InputKey_C* WBP_InputKey_Main; // 0x308(0x08)
	struct UWBP_SelectionBracket_C* WBP_SelectionBracketGamepad; // 0x310(0x08)
	struct UWBP_SelectionBracket_C* WBP_SelectionBracketMain; // 0x318(0x08)
	struct UWBP_SelectionBracket_C* WBP_SelectionBracketSecondary; // 0x320(0x08)
	struct FName MappingName; // 0x328(0x08)
	struct FDataTableRowHandle SoundFX_ButtonSelect; // 0x330(0x10)
	struct FDataTableRowHandle SoundFX_ButtonChanged; // 0x340(0x10)
	struct FDataTableRowHandle SoundFX_ButtonHover; // 0x350(0x10)
	struct FYKeybindingData Keybindings; // 0x360(0x90)

	void SetKey(enum class EYInputKeybindingType KeySelector, struct FInputChord keybinding); // Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.SetKey // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateKeybindings(); // Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.UpdateKeybindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetKeybindings(struct FYKeybindingData Keybindings); // Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.SetKeybindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateText(struct UInputKeySelector* KeySelector, struct FInputChord InputChord); // Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateTextSecondary(struct FInputChord InputChord); // Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.UpdateTextSecondary // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateTextPrimary(struct FInputChord InputChord); // Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.UpdateTextPrimary // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__MainKeyBinding_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.BndEvt__MainKeyBinding_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__MainKeyBinding_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature(); // Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.BndEvt__MainKeyBinding_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__AlternateKeyBinding_K2Node_ComponentBoundEvent_2_OnIsSelectingKeyChanged__DelegateSignature(); // Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.BndEvt__AlternateKeyBinding_K2Node_ComponentBoundEvent_2_OnIsSelectingKeyChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__AlternateKeyBinding_K2Node_ComponentBoundEvent_3_OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.BndEvt__AlternateKeyBinding_K2Node_ComponentBoundEvent_3_OnKeySelected__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Keybinding_Btn(int32_t EntryPoint); // Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.ExecuteUbergraph_WBP_Keybinding_Btn // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

