// WidgetBlueprintGeneratedClass WBP_Toast.WBP_Toast_C
// Size: 0x300 (Inherited: 0x260)
struct UWBP_Toast_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* ToastFailure_Anim; // 0x268(0x08)
	struct UWidgetAnimation* ToastSuccess_Anim; // 0x270(0x08)
	struct UImage* Gfx_ColorFeedback; // 0x278(0x08)
	struct UImage* Gfx_Highlight; // 0x280(0x08)
	struct UImage* Gfx_SlantPrimary; // 0x288(0x08)
	struct UImage* Gfx_SlantSecondary; // 0x290(0x08)
	struct UTextBlock* Txt_PrimaryLabel; // 0x298(0x08)
	struct UTextBlock* Txt_SecondaryLabel; // 0x2a0(0x08)
	struct FText PrimaryLabel; // 0x2a8(0x18)
	struct FText SecondaryLabel; // 0x2c0(0x18)
	bool ShowSecondaryLabel; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FDataTableRowHandle ScreenInSoundFX_Success; // 0x2e0(0x10)
	struct FDataTableRowHandle ScreenInSoundFX_Fail; // 0x2f0(0x10)

	void SetShowSecondaryLabel(bool Show); // Function WBP_Toast.WBP_Toast_C.SetShowSecondaryLabel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Show(struct FText PrimaryText, struct FText SecondaryText, bool SUCCESS); // Function WBP_Toast.WBP_Toast_C.Show // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_Toast.WBP_Toast_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Toast(int32_t EntryPoint); // Function WBP_Toast.WBP_Toast_C.ExecuteUbergraph_WBP_Toast // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

