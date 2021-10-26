// WidgetBlueprintGeneratedClass WBP_InputKeyNavigationBase.WBP_InputKeyNavigationBase_C
// Size: 0x280 (Inherited: 0x260)
struct UWBP_InputKeyNavigationBase_C : UUserWidget {
	struct TArray<struct UWBP_InputKeyNavigation_Btn_C*> InputKeys; // 0x260(0x10)
	struct FMulticastInlineDelegate OnInputKeyClicked; // 0x270(0x10)

	void OnButtonClicked(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_InputKeyNavigationBase.WBP_InputKeyNavigationBase_C.OnButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void AddInputKey(struct UWBP_InputKeyNavigation_Btn_C* Button); // Function WBP_InputKeyNavigationBase.WBP_InputKeyNavigationBase_C.AddInputKey // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ClearInputKeys(); // Function WBP_InputKeyNavigationBase.WBP_InputKeyNavigationBase_C.ClearInputKeys // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnInputKeyClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* InputKey, int32_t Index, struct FDataTableRowHandle InputActionRowHandle); // Function WBP_InputKeyNavigationBase.WBP_InputKeyNavigationBase_C.OnInputKeyClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

