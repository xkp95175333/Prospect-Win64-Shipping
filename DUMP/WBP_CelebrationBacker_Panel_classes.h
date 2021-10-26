// WidgetBlueprintGeneratedClass WBP_CelebrationBacker_Panel.WBP_CelebrationBacker_Panel_C
// Size: 0x2e4 (Inherited: 0x2c0)
struct UWBP_CelebrationBacker_Panel_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UWidgetAnimation* WidgetIdle_Anim; // 0x2c8(0x08)
	struct UWidgetAnimation* WidgetIn_Anim; // 0x2d0(0x08)
	struct UBorder* BG_ColorTint; // 0x2d8(0x08)
	struct FColor BG_Color; // 0x2e0(0x04)

	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_CelebrationBacker_Panel.WBP_CelebrationBacker_Panel_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_CelebrationBacker_Panel.WBP_CelebrationBacker_Panel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_CelebrationBacker_Panel.WBP_CelebrationBacker_Panel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_CelebrationBacker_Panel(int32_t EntryPoint); // Function WBP_CelebrationBacker_Panel.WBP_CelebrationBacker_Panel_C.ExecuteUbergraph_WBP_CelebrationBacker_Panel // (Final|UbergraphFunction) // @ game+0x1e02480
};

