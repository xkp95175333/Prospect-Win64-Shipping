// WidgetBlueprintGeneratedClass WBP_InputKeyGamepad.WBP_InputKeyGamepad_C
// Size: 0x271 (Inherited: 0x260)
struct UWBP_InputKeyGamepad_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* m_Icn_Gamepad_Placeholder; // 0x268(0x08)
	bool isLight; // 0x270(0x01)

	void PreConstruct(bool IsDesignTime); // Function WBP_InputKeyGamepad.WBP_InputKeyGamepad_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void SetBrightness(bool isLight); // Function WBP_InputKeyGamepad.WBP_InputKeyGamepad_C.SetBrightness // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_InputKeyGamepad(int32_t EntryPoint); // Function WBP_InputKeyGamepad.WBP_InputKeyGamepad_C.ExecuteUbergraph_WBP_InputKeyGamepad // (Final|UbergraphFunction) // @ game+0x1e02480
};

