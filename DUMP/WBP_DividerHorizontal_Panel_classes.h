// WidgetBlueprintGeneratedClass WBP_DividerHorizontal_Panel.WBP_DividerHorizontal_Panel_C
// Size: 0x312 (Inherited: 0x2c0)
struct UWBP_DividerHorizontal_Panel_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UWidgetAnimation* ScreenIn_Anim; // 0x2c8(0x08)
	struct UImage* Edge; // 0x2d0(0x08)
	struct UImage* FillBase; // 0x2d8(0x08)
	struct UImage* FillOver; // 0x2e0(0x08)
	struct UImage* Gfx_Center; // 0x2e8(0x08)
	struct UImage* Gfx_CenterTrapezoid; // 0x2f0(0x08)
	struct UImage* Gfx_DecoBottom_Shape; // 0x2f8(0x08)
	struct UImage* Gfx_DecoTop_Shape; // 0x300(0x08)
	struct UImage* Gfx_DivideImage; // 0x308(0x08)
	bool ShowDecoBottom; // 0x310(0x01)
	bool ShowDecoTop; // 0x311(0x01)

	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_DividerHorizontal_Panel.WBP_DividerHorizontal_Panel_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_DividerHorizontal_Panel.WBP_DividerHorizontal_Panel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_DividerHorizontal_Panel.WBP_DividerHorizontal_Panel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_DividerHorizontal_Panel(int32_t EntryPoint); // Function WBP_DividerHorizontal_Panel.WBP_DividerHorizontal_Panel_C.ExecuteUbergraph_WBP_DividerHorizontal_Panel // (Final|UbergraphFunction) // @ game+0x1e02480
};

