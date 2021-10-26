// WidgetBlueprintGeneratedClass WBP_Generic_ToolTip.WBP_Generic_ToolTip_C
// Size: 0x360 (Inherited: 0x2c0)
struct UWBP_Generic_ToolTip_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UWidgetAnimation* In_Anim; // 0x2c8(0x08)
	struct UImage* Gfx_Shadow; // 0x2d0(0x08)
	struct UTextBlock* Txt_Header; // 0x2d8(0x08)
	struct UTextBlock* Txt_Header_Additional; // 0x2e0(0x08)
	struct URichTextBlock* TxtRich_Description; // 0x2e8(0x08)
	struct UWBP_BlurBacker_Panel_C* WBP_BlurBacker_Panel; // 0x2f0(0x08)
	struct UWBP_Footer_C_Panel_C* WBP_BottomDeco; // 0x2f8(0x08)
	struct UWBP_DividerHorizontal_VarA_Panel_C* WBP_DividerHorizontal_VarA_Panel; // 0x300(0x08)
	struct UWBP_Footer_C_Panel_C* WBP_TopDeco; // 0x308(0x08)
	struct FText Text; // 0x310(0x18)
	bool showHeader; // 0x328(0x01)
	bool ShowAdditionalHeader; // 0x329(0x01)
	char pad_32A[0x6]; // 0x32a(0x06)
	struct FText HeaderText; // 0x330(0x18)
	struct FText AdditionalHeaderText; // 0x348(0x18)

	void UpdateTooltipText(struct FText Text, struct FText HeaderText, struct FText AdditionalHeaderText); // Function WBP_Generic_ToolTip.WBP_Generic_ToolTip_C.UpdateTooltipText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_Generic_ToolTip.WBP_Generic_ToolTip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Generic_ToolTip(int32_t EntryPoint); // Function WBP_Generic_ToolTip.WBP_Generic_ToolTip_C.ExecuteUbergraph_WBP_Generic_ToolTip // (Final|UbergraphFunction) // @ game+0x1e02480
};

