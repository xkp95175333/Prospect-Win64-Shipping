// WidgetBlueprintGeneratedClass WBP_CelebrationBacker_Panel_C.WBP_CelebrationBacker_Panel_C_C
// Size: 0x354 (Inherited: 0x2c0)
struct UWBP_CelebrationBacker_Panel_C_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UBackgroundBlur* BackgroundBlur_305; // 0x2c8(0x08)
	struct UBorder* BG_ColorTint; // 0x2d0(0x08)
	struct UImage* Gfx_BackerDark; // 0x2d8(0x08)
	struct UImage* Gfx_BackerTint; // 0x2e0(0x08)
	struct UImage* Gfx_BackerTint_2; // 0x2e8(0x08)
	struct UImage* Gfx_BackerTint_3; // 0x2f0(0x08)
	struct UImage* Gfx_BackerTint_4; // 0x2f8(0x08)
	struct UImage* Gfx_BackerTint_5; // 0x300(0x08)
	struct UImage* Gfx_CelebrationBacker; // 0x308(0x08)
	struct UImage* Gfx_CelebrationBacker2; // 0x310(0x08)
	struct UImage* Gfx_CelebrationBacker3; // 0x318(0x08)
	struct UImage* Gfx_CelebrationBacker4; // 0x320(0x08)
	struct UImage* Gfx_CelebrationBacker_Anim; // 0x328(0x08)
	struct UImage* Gfx_CelebrationBacker_Anim2; // 0x330(0x08)
	struct UImage* Gfx_CelebrationBacker_Anim3; // 0x338(0x08)
	struct UImage* Gfx_CelebrationBacker_Anim4; // 0x340(0x08)
	struct FColor BG_Color; // 0x348(0x04)
	float BlurOpacity; // 0x34c(0x04)
	float BGTintOpacity; // 0x350(0x04)

	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_CelebrationBacker_Panel_C.WBP_CelebrationBacker_Panel_C_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_CelebrationBacker_Panel_C.WBP_CelebrationBacker_Panel_C_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_CelebrationBacker_Panel_C.WBP_CelebrationBacker_Panel_C_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_CelebrationBacker_Panel_C(int32_t EntryPoint); // Function WBP_CelebrationBacker_Panel_C.WBP_CelebrationBacker_Panel_C_C.ExecuteUbergraph_WBP_CelebrationBacker_Panel_C // (Final|UbergraphFunction) // @ game+0x1e02480
};

