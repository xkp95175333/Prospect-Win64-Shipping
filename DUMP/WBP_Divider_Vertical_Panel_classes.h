// WidgetBlueprintGeneratedClass WBP_Divider_Vertical_Panel.WBP_Divider_Vertical_Panel_C
// Size: 0x2e0 (Inherited: 0x2c0)
struct UWBP_Divider_Vertical_Panel_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UWidgetAnimation* ScreenIn_Anim; // 0x2c8(0x08)
	struct UImage* Gfx_VertDivide; // 0x2d0(0x08)
	struct UImage* Gfx_VertDivide_2; // 0x2d8(0x08)

	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_Divider_Vertical_Panel.WBP_Divider_Vertical_Panel_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_Divider_Vertical_Panel.WBP_Divider_Vertical_Panel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Divider_Vertical_Panel(int32_t EntryPoint); // Function WBP_Divider_Vertical_Panel.WBP_Divider_Vertical_Panel_C.ExecuteUbergraph_WBP_Divider_Vertical_Panel // (Final|UbergraphFunction) // @ game+0x1e02480
};

