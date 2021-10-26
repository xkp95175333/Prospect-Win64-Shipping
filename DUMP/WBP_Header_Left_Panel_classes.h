// WidgetBlueprintGeneratedClass WBP_Header_Left_Panel.WBP_Header_Left_Panel_C
// Size: 0x328 (Inherited: 0x2c0)
struct UWBP_Header_Left_Panel_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UWidgetAnimation* Anim_FadeIn; // 0x2c8(0x08)
	struct UImage* Gfx_ArrowSmall; // 0x2d0(0x08)
	struct UImage* Gfx_Background_Gradient; // 0x2d8(0x08)
	struct UImage* Gfx_Chevrons; // 0x2e0(0x08)
	struct UImage* Gfx_SlantA; // 0x2e8(0x08)
	struct UImage* Gfx_SlantB; // 0x2f0(0x08)
	struct UImage* Gfx_SlantC; // 0x2f8(0x08)
	struct UNamedSlot* Slot_Right; // 0x300(0x08)
	struct UTextBlock* Txt_Headline; // 0x308(0x08)
	struct FText HeadlineLabel; // 0x310(0x18)

	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_Header_Left_Panel.WBP_Header_Left_Panel_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_Header_Left_Panel.WBP_Header_Left_Panel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_Header_Left_Panel.WBP_Header_Left_Panel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Header_Left_Panel(int32_t EntryPoint); // Function WBP_Header_Left_Panel.WBP_Header_Left_Panel_C.ExecuteUbergraph_WBP_Header_Left_Panel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

