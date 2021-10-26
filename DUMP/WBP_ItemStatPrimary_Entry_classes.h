// WidgetBlueprintGeneratedClass WBP_ItemStatPrimary_Entry.WBP_ItemStatPrimary_Entry_C
// Size: 0x35a (Inherited: 0x2c0)
struct UWBP_ItemStatPrimary_Entry_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UWidgetAnimation* Feedback_Anim; // 0x2c8(0x08)
	struct UWidgetAnimation* ScreenIn_Anim; // 0x2d0(0x08)
	struct USizeBox* ChangeMaxSize; // 0x2d8(0x08)
	struct UImage* Gfx_ArrowNegative; // 0x2e0(0x08)
	struct UImage* Gfx_ArrowPositive; // 0x2e8(0x08)
	struct UImage* Gfx_Flash; // 0x2f0(0x08)
	struct UScaleBox* StatValueChangeScaleBox; // 0x2f8(0x08)
	struct UScaleBox* StatValueScaleBox; // 0x300(0x08)
	struct UTextBlock* Txt_StatLabel; // 0x308(0x08)
	struct UTextBlock* Txt_StatValue; // 0x310(0x08)
	struct UTextBlock* Txt_StatValueChange; // 0x318(0x08)
	struct UWBP_Divider_Vertical_Panel_C* WBP_Divider_Vertical_Panel; // 0x320(0x08)
	struct FText Value; // 0x328(0x18)
	struct FText Label; // 0x340(0x18)
	bool ShowDivide; // 0x358(0x01)
	bool ShowChange; // 0x359(0x01)

	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_ItemStatPrimary_Entry.WBP_ItemStatPrimary_Entry_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetValue(struct FText InValue); // Function WBP_ItemStatPrimary_Entry.WBP_ItemStatPrimary_Entry_C.SetValue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetShowDivide(bool ShowDivide); // Function WBP_ItemStatPrimary_Entry.WBP_ItemStatPrimary_Entry_C.SetShowDivide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_ItemStatPrimary_Entry.WBP_ItemStatPrimary_Entry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_ItemStatPrimary_Entry.WBP_ItemStatPrimary_Entry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void SetLabel(struct FText Label); // Function WBP_ItemStatPrimary_Entry.WBP_ItemStatPrimary_Entry_C.SetLabel // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_ItemStatPrimary_Entry(int32_t EntryPoint); // Function WBP_ItemStatPrimary_Entry.WBP_ItemStatPrimary_Entry_C.ExecuteUbergraph_WBP_ItemStatPrimary_Entry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

