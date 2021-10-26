// WidgetBlueprintGeneratedClass WBP_DividerHorizontal_VarA_Panel.WBP_DividerHorizontal_VarA_Panel_C
// Size: 0x2f0 (Inherited: 0x2c0)
struct UWBP_DividerHorizontal_VarA_Panel_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UWidgetAnimation* ScreenIn_Anim; // 0x2c8(0x08)
	struct UImage* Gfx_Center; // 0x2d0(0x08)
	struct UImage* Gfx_DivideImage; // 0x2d8(0x08)
	struct UImage* Gfx_DivideImage_L; // 0x2e0(0x08)
	struct UImage* Gfx_DivideImage_R; // 0x2e8(0x08)

	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_DividerHorizontal_VarA_Panel.WBP_DividerHorizontal_VarA_Panel_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_DividerHorizontal_VarA_Panel.WBP_DividerHorizontal_VarA_Panel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_DividerHorizontal_VarA_Panel(int32_t EntryPoint); // Function WBP_DividerHorizontal_VarA_Panel.WBP_DividerHorizontal_VarA_Panel_C.ExecuteUbergraph_WBP_DividerHorizontal_VarA_Panel // (Final|UbergraphFunction) // @ game+0x1e02480
};

