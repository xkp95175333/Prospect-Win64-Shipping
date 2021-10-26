// WidgetBlueprintGeneratedClass WBP_SingleRowScroll_Panel.WBP_SingleRowScroll_Panel_C
// Size: 0x318 (Inherited: 0x2c0)
struct UWBP_SingleRowScroll_Panel_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UWidgetAnimation* WidgetIn_Anim; // 0x2c8(0x08)
	struct UNamedSlot* Content_Prefix; // 0x2d0(0x08)
	struct UNamedSlot* Content_Primary; // 0x2d8(0x08)
	struct UNamedSlot* Content_Secondary; // 0x2e0(0x08)
	struct UScrollBox* ScrollBox_1; // 0x2e8(0x08)
	struct UWBP_GenericContent_Panel_C* WBP_FactionItems_SingleRow; // 0x2f0(0x08)
	struct UWBP_Footer_B_Panel_C* WBP_Footer_B_Panel; // 0x2f8(0x08)
	struct FText HeadlineOverride; // 0x300(0x18)

	void SequenceEvent__ENTRYPOINTWBP_SingleRowScroll_Panel_1(); // Function WBP_SingleRowScroll_Panel.WBP_SingleRowScroll_Panel_C.SequenceEvent__ENTRYPOINTWBP_SingleRowScroll_Panel_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SequenceEvent_1(); // Function WBP_SingleRowScroll_Panel.WBP_SingleRowScroll_Panel_C.SequenceEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_SingleRowScroll_Panel.WBP_SingleRowScroll_Panel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_SingleRowScroll_Panel.WBP_SingleRowScroll_Panel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void SetHeadlineText(struct FText HeadlineOverride); // Function WBP_SingleRowScroll_Panel.WBP_SingleRowScroll_Panel_C.SetHeadlineText // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ScrollWidgetIntoView(struct UUserWidget* RelevantWidget); // Function WBP_SingleRowScroll_Panel.WBP_SingleRowScroll_Panel_C.ScrollWidgetIntoView // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_SingleRowScroll_Panel(int32_t EntryPoint); // Function WBP_SingleRowScroll_Panel.WBP_SingleRowScroll_Panel_C.ExecuteUbergraph_WBP_SingleRowScroll_Panel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

