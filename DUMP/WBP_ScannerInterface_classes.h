// WidgetBlueprintGeneratedClass WBP_ScannerInterface.WBP_ScannerInterface_C
// Size: 0x2d1 (Inherited: 0x260)
struct UWBP_ScannerInterface_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FeedbackPositive_Anim; // 0x268(0x08)
	struct UWidgetAnimation* FeedbackNegative_Anim; // 0x270(0x08)
	struct UOverlay* FeedbackNegative; // 0x278(0x08)
	struct UOverlay* FeedbackPositive; // 0x280(0x08)
	struct UImage* Gfx_Background; // 0x288(0x08)
	struct UImage* Gfx_Fill; // 0x290(0x08)
	struct UImage* Gfx_Scanning; // 0x298(0x08)
	struct UOverlay* Ready; // 0x2a0(0x08)
	struct UOverlay* Scanning; // 0x2a8(0x08)
	struct UOverlay* ScanningEmpty; // 0x2b0(0x08)
	struct UWidgetSwitcher* States; // 0x2b8(0x08)
	struct UWBP_InputKey_C* WBP_InputKey; // 0x2c0(0x08)
	struct UMaterialInstanceDynamic* DMI_MainFrame; // 0x2c8(0x08)
	enum class ScannerInterfaceStates IsShowingScanResults; // 0x2d0(0x01)

	void Construct(); // Function WBP_ScannerInterface.WBP_ScannerInterface_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void SetRefireProgress(float percentage); // Function WBP_ScannerInterface.WBP_ScannerInterface_C.SetRefireProgress // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void InitializeDynamicMaterial(); // Function WBP_ScannerInterface.WBP_ScannerInterface_C.InitializeDynamicMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PlayScanFeedback(bool IsSuccess); // Function WBP_ScannerInterface.WBP_ScannerInterface_C.PlayScanFeedback // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetToReadyState(); // Function WBP_ScannerInterface.WBP_ScannerInterface_C.SetToReadyState // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ShowScanLInes(bool Show); // Function WBP_ScannerInterface.WBP_ScannerInterface_C.ShowScanLInes // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetScannerState(enum class ScannerInterfaceStates IsShowingScanResults); // Function WBP_ScannerInterface.WBP_ScannerInterface_C.SetScannerState // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_ScannerInterface(int32_t EntryPoint); // Function WBP_ScannerInterface.WBP_ScannerInterface_C.ExecuteUbergraph_WBP_ScannerInterface // (Final|UbergraphFunction) // @ game+0x1e02480
};

