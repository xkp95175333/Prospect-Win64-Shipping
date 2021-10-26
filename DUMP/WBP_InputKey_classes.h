// WidgetBlueprintGeneratedClass WBP_InputKey.WBP_InputKey_C
// Size: 0x2b8 (Inherited: 0x260)
struct UWBP_InputKey_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Feedback_Anim; // 0x268(0x08)
	struct UTextBlock* TxtDivide; // 0x270(0x08)
	struct UWBP_InputKeyGamepad_C* WBP_InputKeyGamepad; // 0x278(0x08)
	struct UWBP_InputKeyPC_C* WBP_InputKeyPC; // 0x280(0x08)
	bool Gamepad; // 0x288(0x01)
	bool Keyboard; // 0x289(0x01)
	bool Divide; // 0x28a(0x01)
	bool isLight; // 0x28b(0x01)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct FText LabelOverride; // 0x290(0x18)
	struct FDataTableRowHandle InputHandle; // 0x2a8(0x10)

	void UpdateInput(); // Function WBP_InputKey.WBP_InputKey_C.UpdateInput // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetInput(struct FDataTableRowHandle rowHandle); // Function WBP_InputKey.WBP_InputKey_C.SetInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_InputKey.WBP_InputKey_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnInitialized(); // Function WBP_InputKey.WBP_InputKey_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Destruct(); // Function WBP_InputKey.WBP_InputKey_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnKeybindingDataChanged(); // Function WBP_InputKey.WBP_InputKey_C.OnKeybindingDataChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_InputKey(int32_t EntryPoint); // Function WBP_InputKey.WBP_InputKey_C.ExecuteUbergraph_WBP_InputKey // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

