// WidgetBlueprintGeneratedClass WBP_SelectionHighlight.WBP_SelectionHighlight_C
// Size: 0x280 (Inherited: 0x260)
struct UWBP_SelectionHighlight_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Idle_Anim; // 0x268(0x08)
	struct UImage* Gfx_HighlightLeft; // 0x270(0x08)
	struct UImage* Gfx_HighlightRight; // 0x278(0x08)

	void Construct(); // Function WBP_SelectionHighlight.WBP_SelectionHighlight_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_SelectionHighlight(int32_t EntryPoint); // Function WBP_SelectionHighlight.WBP_SelectionHighlight_C.ExecuteUbergraph_WBP_SelectionHighlight // (Final|UbergraphFunction) // @ game+0x1e02480
};

