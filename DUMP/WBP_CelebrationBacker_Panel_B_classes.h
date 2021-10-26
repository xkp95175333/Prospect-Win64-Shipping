// WidgetBlueprintGeneratedClass WBP_CelebrationBacker_Panel_B.WBP_CelebrationBacker_Panel_B_C
// Size: 0x34d (Inherited: 0x2c0)
struct UWBP_CelebrationBacker_Panel_B_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UCanvasPanel* ArrowAnims; // 0x2c8(0x08)
	struct UBackgroundBlur* Bg_Blur; // 0x2d0(0x08)
	struct UBorder* BG_ColorTint; // 0x2d8(0x08)
	struct UImage* Gfx_BackerDark; // 0x2e0(0x08)
	struct UImage* Gfx_BackerTint; // 0x2e8(0x08)
	struct UImage* Gfx_BackerTint_2; // 0x2f0(0x08)
	struct UImage* Gfx_BackerTint_3; // 0x2f8(0x08)
	struct UImage* Gfx_BackerTint_4; // 0x300(0x08)
	struct UImage* Gfx_BackerTint_5; // 0x308(0x08)
	struct UImage* Gfx_CelebrationBacker; // 0x310(0x08)
	struct UImage* Gfx_CelebrationBacker2; // 0x318(0x08)
	struct UImage* Gfx_CelebrationBacker3; // 0x320(0x08)
	struct UImage* Gfx_CelebrationBacker4; // 0x328(0x08)
	struct UImage* M_Pattern; // 0x330(0x08)
	struct UImage* M_Pattern_Blurred; // 0x338(0x08)
	struct FColor BG_Color; // 0x340(0x04)
	float BlurOpacity; // 0x344(0x04)
	float BGTintOpacity; // 0x348(0x04)
	bool UseArrowAnim; // 0x34c(0x01)

	void ArrowAnim(bool Condition); // Function WBP_CelebrationBacker_Panel_B.WBP_CelebrationBacker_Panel_B_C.ArrowAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_CelebrationBacker_Panel_B.WBP_CelebrationBacker_Panel_B_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_CelebrationBacker_Panel_B.WBP_CelebrationBacker_Panel_B_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_CelebrationBacker_Panel_B.WBP_CelebrationBacker_Panel_B_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_CelebrationBacker_Panel_B(int32_t EntryPoint); // Function WBP_CelebrationBacker_Panel_B.WBP_CelebrationBacker_Panel_B_C.ExecuteUbergraph_WBP_CelebrationBacker_Panel_B // (Final|UbergraphFunction) // @ game+0x1e02480
};

