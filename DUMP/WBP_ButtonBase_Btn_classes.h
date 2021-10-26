// WidgetBlueprintGeneratedClass WBP_ButtonBase_Btn.WBP_ButtonBase_Btn_C
// Size: 0x391 (Inherited: 0x2c8)
struct UWBP_ButtonBase_Btn_C : UYWidget_Button {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x2d0(0x10)
	struct FMulticastInlineDelegate OnDoubleClicked; // 0x2e0(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x2f0(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x300(0x10)
	struct FDataTableRowHandle ClickedSound; // 0x310(0x10)
	struct FDataTableRowHandle HoveredSound; // 0x320(0x10)
	struct FDataTableRowHandle UnhoveredSound; // 0x330(0x10)
	struct FDataTableRowHandle PressedSound; // 0x340(0x10)
	struct FDataTableRowHandle ReleasedSound; // 0x350(0x10)
	struct FDataTableRowHandle DoubleClickedSound; // 0x360(0x10)
	struct FString BIEventName; // 0x370(0x10)
	struct FString BIEventLocation; // 0x380(0x10)
	bool ConstructBIEventLocation; // 0x390(0x01)

	void TrySendBIEvent(); // Function WBP_ButtonBase_Btn.WBP_ButtonBase_Btn_C.TrySendBIEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_ButtonBase_Btn.WBP_ButtonBase_Btn_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Clicked(); // Function WBP_ButtonBase_Btn.WBP_ButtonBase_Btn_C.Clicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Hovered(); // Function WBP_ButtonBase_Btn.WBP_ButtonBase_Btn_C.Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Unhovered(); // Function WBP_ButtonBase_Btn.WBP_ButtonBase_Btn_C.Unhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Pressed(); // Function WBP_ButtonBase_Btn.WBP_ButtonBase_Btn_C.Pressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Released(); // Function WBP_ButtonBase_Btn.WBP_ButtonBase_Btn_C.Released // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void DoubleClicked(); // Function WBP_ButtonBase_Btn.WBP_ButtonBase_Btn_C.DoubleClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Base_Clicked(); // Function WBP_ButtonBase_Btn.WBP_ButtonBase_Btn_C.Base_Clicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Base_Hovered(); // Function WBP_ButtonBase_Btn.WBP_ButtonBase_Btn_C.Base_Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Base_Unhovered(); // Function WBP_ButtonBase_Btn.WBP_ButtonBase_Btn_C.Base_Unhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Base_Pressed(); // Function WBP_ButtonBase_Btn.WBP_ButtonBase_Btn_C.Base_Pressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Base_Released(); // Function WBP_ButtonBase_Btn.WBP_ButtonBase_Btn_C.Base_Released // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Base_DoubleClicked(); // Function WBP_ButtonBase_Btn.WBP_ButtonBase_Btn_C.Base_DoubleClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_ButtonBase_Btn(int32_t EntryPoint); // Function WBP_ButtonBase_Btn.WBP_ButtonBase_Btn_C.ExecuteUbergraph_WBP_ButtonBase_Btn // (Final|UbergraphFunction) // @ game+0x1e02480
	void OnUnhovered__DelegateSignature(); // Function WBP_ButtonBase_Btn.WBP_ButtonBase_Btn_C.OnUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnHovered__DelegateSignature(); // Function WBP_ButtonBase_Btn.WBP_ButtonBase_Btn_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDoubleClicked__DelegateSignature(); // Function WBP_ButtonBase_Btn.WBP_ButtonBase_Btn_C.OnDoubleClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_ButtonBase_Btn.WBP_ButtonBase_Btn_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

