// WidgetBlueprintGeneratedClass WBP_FullMessage.WBP_FullMessage_C
// Size: 0x309 (Inherited: 0x2c0)
struct UWBP_FullMessage_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UWidgetAnimation* WidgetIn_Anim; // 0x2c8(0x08)
	struct UImage* Gfx_ColorFeedback; // 0x2d0(0x08)
	struct UImage* Gfx_Shadow; // 0x2d8(0x08)
	struct UImage* Gfx_SlantSecondary; // 0x2e0(0x08)
	struct UTextBlock* Txt_PrimaryMessage; // 0x2e8(0x08)
	struct FText Message; // 0x2f0(0x18)
	bool bPlayAnimation; // 0x308(0x01)

	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_FullMessage.WBP_FullMessage_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_FullMessage.WBP_FullMessage_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_FullMessage.WBP_FullMessage_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_FullMessage(int32_t EntryPoint); // Function WBP_FullMessage.WBP_FullMessage_C.ExecuteUbergraph_WBP_FullMessage // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

