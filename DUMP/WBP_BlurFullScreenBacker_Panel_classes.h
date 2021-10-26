// WidgetBlueprintGeneratedClass WBP_BlurFullScreenBacker_Panel.WBP_BlurFullScreenBacker_Panel_C
// Size: 0x27c (Inherited: 0x260)
struct UWBP_BlurFullScreenBacker_Panel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBackgroundBlur* BlurFX; // 0x268(0x08)
	struct UImage* Gfx_DarkenFillColor; // 0x270(0x08)
	float BlurIntensity; // 0x278(0x04)

	void PreConstruct(bool IsDesignTime); // Function WBP_BlurFullScreenBacker_Panel.WBP_BlurFullScreenBacker_Panel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_BlurFullScreenBacker_Panel(int32_t EntryPoint); // Function WBP_BlurFullScreenBacker_Panel.WBP_BlurFullScreenBacker_Panel_C.ExecuteUbergraph_WBP_BlurFullScreenBacker_Panel // (Final|UbergraphFunction) // @ game+0x1e02480
};

