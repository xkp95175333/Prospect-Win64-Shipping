// WidgetBlueprintGeneratedClass WBP_LoadingOverlay.WBP_LoadingOverlay_C
// Size: 0x2a8 (Inherited: 0x260)
struct UWBP_LoadingOverlay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UCanvasPanel* LoadingOverlay; // 0x268(0x08)
	struct UTextBlock* Txt_Message; // 0x270(0x08)
	struct UWBP_BlurFullScreenBacker_Panel_C* WBP_BlurFullScreenBacker_Panel; // 0x278(0x08)
	struct UWBP_LoadingSpinner_C* WBP_LoadingSpinner; // 0x280(0x08)
	bool shouldShow; // 0x288(0x01)
	bool ShowText; // 0x289(0x01)
	char pad_28A[0x6]; // 0x28a(0x06)
	struct FText Description; // 0x290(0x18)

	void Hide Loading Icon(); // Function WBP_LoadingOverlay.WBP_LoadingOverlay_C.Hide Loading Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Show Loading Icon(bool IsLoadingIconTextVisible, struct FText LoadingIconText); // Function WBP_LoadingOverlay.WBP_LoadingOverlay_C.Show Loading Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_LoadingOverlay.WBP_LoadingOverlay_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_LoadingOverlay(int32_t EntryPoint); // Function WBP_LoadingOverlay.WBP_LoadingOverlay_C.ExecuteUbergraph_WBP_LoadingOverlay // (Final|UbergraphFunction) // @ game+0x1e02480
};

