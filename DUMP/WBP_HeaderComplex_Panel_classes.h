// WidgetBlueprintGeneratedClass WBP_HeaderComplex_Panel.WBP_HeaderComplex_Panel_C
// Size: 0x330 (Inherited: 0x2c0)
struct UWBP_HeaderComplex_Panel_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UWidgetAnimation* ScreenIn_Anim; // 0x2c8(0x08)
	struct UNamedSlot* ContentSlotLeft; // 0x2d0(0x08)
	struct UNamedSlot* ContentSlotRight; // 0x2d8(0x08)
	struct UImage* Gfx_ArrowSmall; // 0x2e0(0x08)
	struct UImage* Gfx_Background; // 0x2e8(0x08)
	struct UImage* Gfx_Deco; // 0x2f0(0x08)
	struct UImage* Gfx_SlantAccent; // 0x2f8(0x08)
	struct UImage* Gfx_SlantMain; // 0x300(0x08)
	struct UTextBlock* Txt_Headline; // 0x308(0x08)
	struct UTextBlock* Txt_Subline; // 0x310(0x08)
	struct FText HeadlineLabel; // 0x318(0x18)

	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_HeaderComplex_Panel.WBP_HeaderComplex_Panel_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_HeaderComplex_Panel.WBP_HeaderComplex_Panel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_HeaderComplex_Panel.WBP_HeaderComplex_Panel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_HeaderComplex_Panel(int32_t EntryPoint); // Function WBP_HeaderComplex_Panel.WBP_HeaderComplex_Panel_C.ExecuteUbergraph_WBP_HeaderComplex_Panel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

