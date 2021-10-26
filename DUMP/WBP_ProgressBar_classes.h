// WidgetBlueprintGeneratedClass WBP_ProgressBar.WBP_ProgressBar_C
// Size: 0x6f8 (Inherited: 0x6cc)
struct UWBP_ProgressBar_C : UWBP_ProgressBarBase_C {
	char pad_6CC[0x4]; // 0x6cc(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6d0(0x08)
	struct UWidgetAnimation* Clear_Anim; // 0x6d8(0x08)
	struct UWidgetAnimation* Fail_Anim; // 0x6e0(0x08)
	struct UWidgetAnimation* Success_Anim; // 0x6e8(0x08)
	struct UImage* Gfx_ActionHighlight; // 0x6f0(0x08)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_ProgressBar.WBP_ProgressBar_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_ProgressBar(int32_t EntryPoint); // Function WBP_ProgressBar.WBP_ProgressBar_C.ExecuteUbergraph_WBP_ProgressBar // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

