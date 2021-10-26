// WidgetBlueprintGeneratedClass ReportPlayerButtonType_WBP.ReportPlayerButtonType_WBP_C
// Size: 0x290 (Inherited: 0x260)
struct UReportPlayerButtonType_WBP_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UYButton* Button; // 0x268(0x08)
	struct UYTextBlock* Text; // 0x270(0x08)
	enum class EYReportPlayerType Type; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct FMulticastInlineDelegate OnReportTypeClicked; // 0x280(0x10)

	void Construct(); // Function ReportPlayerButtonType_WBP.ReportPlayerButtonType_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ReportPlayerButtonType_WBP.ReportPlayerButtonType_WBP_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void SelectedState(bool IsSelected); // Function ReportPlayerButtonType_WBP.ReportPlayerButtonType_WBP_C.SelectedState // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_ReportPlayerButtonType_WBP(int32_t EntryPoint); // Function ReportPlayerButtonType_WBP.ReportPlayerButtonType_WBP_C.ExecuteUbergraph_ReportPlayerButtonType_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void OnReportTypeClicked__DelegateSignature(enum class EYReportPlayerType PlayerReportType); // Function ReportPlayerButtonType_WBP.ReportPlayerButtonType_WBP_C.OnReportTypeClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

