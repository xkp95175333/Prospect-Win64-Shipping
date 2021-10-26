// WidgetBlueprintGeneratedClass WBP_FlashFeedback.WBP_FlashFeedback_C
// Size: 0x2f8 (Inherited: 0x2c0)
struct UWBP_FlashFeedback_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UWidgetAnimation* Flash_Anim; // 0x2c8(0x08)
	struct UImage* Gfx_Flash_Angle; // 0x2d0(0x08)
	struct UImage* Gfx_InnerGlow; // 0x2d8(0x08)
	struct UImage* Gfx_Stroke; // 0x2e0(0x08)
	struct FLinearColor SetColor; // 0x2e8(0x10)

	void Color(struct FLinearColor Color); // Function WBP_FlashFeedback.WBP_FlashFeedback_C.Color // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_FlashFeedback.WBP_FlashFeedback_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void PlayFlashAnim(); // Function WBP_FlashFeedback.WBP_FlashFeedback_C.PlayFlashAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_FlashFeedback(int32_t EntryPoint); // Function WBP_FlashFeedback.WBP_FlashFeedback_C.ExecuteUbergraph_WBP_FlashFeedback // (Final|UbergraphFunction) // @ game+0x1e02480
};

