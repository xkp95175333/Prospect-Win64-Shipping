// WidgetBlueprintGeneratedClass UI_MasterBackButton_WBP.UI_MasterBackButton_WBP_C
// Size: 0x320 (Inherited: 0x2c0)
struct UUI_MasterBackButton_WBP_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UYButton* Button_Back; // 0x2c8(0x08)
	struct UYTextBlock* buttonPromptYTextBlock; // 0x2d0(0x08)
	struct FText DefaultBackText_ToStation; // 0x2d8(0x18)
	struct FText DefaultBackText_Generic; // 0x2f0(0x18)
	struct FText DefaultBackText_ToQuickMenu; // 0x308(0x18)

	void Construct(); // Function UI_MasterBackButton_WBP.UI_MasterBackButton_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnStackDataChanged_Event_1(enum class EYInputUIStackType Type); // Function UI_MasterBackButton_WBP.UI_MasterBackButton_WBP_C.OnStackDataChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__Button_61_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_MasterBackButton_WBP.UI_MasterBackButton_WBP_C.BndEvt__Button_61_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_UI_MasterBackButton_WBP(int32_t EntryPoint); // Function UI_MasterBackButton_WBP.UI_MasterBackButton_WBP_C.ExecuteUbergraph_UI_MasterBackButton_WBP // (Final|UbergraphFunction) // @ game+0x1e02480
};

