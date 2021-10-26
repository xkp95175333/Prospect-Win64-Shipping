// WidgetBlueprintGeneratedClass WBP_GenericContent_Panel.WBP_GenericContent_Panel_C
// Size: 0x320 (Inherited: 0x2c0)
struct UWBP_GenericContent_Panel_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UWidgetAnimation* ScreenIn_Anim; // 0x2c8(0x08)
	struct UImage* Gfx_Edge; // 0x2d0(0x08)
	struct UImage* Gfx_EdgeGradient; // 0x2d8(0x08)
	struct UNamedSlot* HeaderSlot; // 0x2e0(0x08)
	struct UNamedSlot* Layout_ContentSlot; // 0x2e8(0x08)
	struct UNamedSlot* Layout_FooterSlot; // 0x2f0(0x08)
	struct UWBP_BlurBacker_Panel_C* WBP_BlurBacker_Panel; // 0x2f8(0x08)
	struct UWBP_Header_Panel_C* WBP_Header_Panel; // 0x300(0x08)
	struct FText HeadlineMasterLabel; // 0x308(0x18)

	void SequenceEvent__ENTRYPOINTWBP_GenericContent_Panel_1(); // Function WBP_GenericContent_Panel.WBP_GenericContent_Panel_C.SequenceEvent__ENTRYPOINTWBP_GenericContent_Panel_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_GenericContent_Panel.WBP_GenericContent_Panel_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SequenceEvent_1(); // Function WBP_GenericContent_Panel.WBP_GenericContent_Panel_C.SequenceEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_GenericContent_Panel.WBP_GenericContent_Panel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_GenericContent_Panel.WBP_GenericContent_Panel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_GenericContent_Panel.WBP_GenericContent_Panel_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_GenericContent_Panel(int32_t EntryPoint); // Function WBP_GenericContent_Panel.WBP_GenericContent_Panel_C.ExecuteUbergraph_WBP_GenericContent_Panel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

