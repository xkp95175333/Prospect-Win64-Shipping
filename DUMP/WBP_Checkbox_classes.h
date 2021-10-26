// WidgetBlueprintGeneratedClass WBP_Checkbox.WBP_Checkbox_C
// Size: 0x2c9 (Inherited: 0x260)
struct UWBP_Checkbox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Clear_Anim; // 0x268(0x08)
	struct UWidgetAnimation* Fail_Anim; // 0x270(0x08)
	struct UWidgetAnimation* Success_Anim; // 0x278(0x08)
	struct UWidgetAnimation* ScreenIn_Anim; // 0x280(0x08)
	struct UImage* Gfx_Backer; // 0x288(0x08)
	struct UImage* Gfx_Backer_FTUE; // 0x290(0x08)
	struct UImage* Gfx_Bg; // 0x298(0x08)
	struct UImage* Gfx_FailHighlight; // 0x2a0(0x08)
	struct UImage* Gfx_SuccessHighlight; // 0x2a8(0x08)
	struct UImage* Icn_Check; // 0x2b0(0x08)
	struct UImage* Icn_Cross; // 0x2b8(0x08)
	struct UImage* M_Backer; // 0x2c0(0x08)
	bool Show FTUE Diamond; // 0x2c8(0x01)

	void SuccessAnimation(); // Function WBP_Checkbox.WBP_Checkbox_C.SuccessAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void FailAnimation(); // Function WBP_Checkbox.WBP_Checkbox_C.FailAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ClearAnimation(); // Function WBP_Checkbox.WBP_Checkbox_C.ClearAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_Checkbox.WBP_Checkbox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Checkbox(int32_t EntryPoint); // Function WBP_Checkbox.WBP_Checkbox_C.ExecuteUbergraph_WBP_Checkbox // (Final|UbergraphFunction) // @ game+0x1e02480
};

