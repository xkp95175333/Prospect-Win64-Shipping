// WidgetBlueprintGeneratedClass WBP_InputKeyPC.WBP_InputKeyPC_C
// Size: 0x291 (Inherited: 0x260)
struct UWBP_InputKeyPC_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Gfx_PCBacker; // 0x268(0x08)
	struct UTextBlock* Txt_PCKey; // 0x270(0x08)
	struct FText Label; // 0x278(0x18)
	bool isLight; // 0x290(0x01)

	void PreConstruct(bool IsDesignTime); // Function WBP_InputKeyPC.WBP_InputKeyPC_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void SetBrightness(bool isLight); // Function WBP_InputKeyPC.WBP_InputKeyPC_C.SetBrightness // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_InputKeyPC(int32_t EntryPoint); // Function WBP_InputKeyPC.WBP_InputKeyPC_C.ExecuteUbergraph_WBP_InputKeyPC // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

