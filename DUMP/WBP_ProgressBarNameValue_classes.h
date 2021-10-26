// WidgetBlueprintGeneratedClass WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C
// Size: 0x361 (Inherited: 0x2c0)
struct UWBP_ProgressBarNameValue_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UWidgetAnimation* Clear_Anim; // 0x2c8(0x08)
	struct UWidgetAnimation* ScreenIn_Anim; // 0x2d0(0x08)
	struct UImage* Gfx_ActionHighlight; // 0x2d8(0x08)
	struct UImage* Gfx_Backer; // 0x2e0(0x08)
	struct UHorizontalBox* TextHolder; // 0x2e8(0x08)
	struct UTextBlock* Txt_Amount; // 0x2f0(0x08)
	struct UTextBlock* Txt_Label; // 0x2f8(0x08)
	struct UWBP_Checkbox_C* WBP_Checkbox_71; // 0x300(0x08)
	struct UWBP_ProgressBar_C* WBP_ProgressBar; // 0x308(0x08)
	struct FText Label; // 0x310(0x18)
	bool ShowText; // 0x328(0x01)
	bool ShowCheckbox; // 0x329(0x01)
	bool ShowDelta; // 0x32a(0x01)
	char pad_32B[0x1]; // 0x32b(0x01)
	struct FLinearColor ProgressBarFillColor; // 0x32c(0x10)
	struct FLinearColor ProgressBarDeltaColor; // 0x33c(0x10)
	bool PlayedContractAnimation; // 0x34c(0x01)
	bool ReverseProgressBarShear; // 0x34d(0x01)
	char pad_34E[0x2]; // 0x34e(0x02)
	struct FMulticastInlineDelegate OnProgressBarFull; // 0x350(0x10)
	bool PlayedStepCompletedSound; // 0x360(0x01)

	void ProgressBarShear(bool Condition); // Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.ProgressBarShear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ShowSuccessAnimation(); // Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.ShowSuccessAnimation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ClearAnimations(); // Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.ClearAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetDeltaVisibility(bool Condition); // Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.SetDeltaVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetProgressBarText(struct FText InText); // Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.SetProgressBarText // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetCheckBoxVisibility(bool Condition); // Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.SetCheckBoxVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetContractObjectiveProgress(struct FYContractObjective ObjectiveStaticData, int32_t ObjectiveCurrentProgress); // Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.SetContractObjectiveProgress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void WBP_ProgressBar_Event_2(struct UWBP_ProgressBar_C* WBP_ProgressBar); // Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.WBP_ProgressBar_Event_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ProgressSuccessAnim(); // Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.ProgressSuccessAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ProgressFailAnim(); // Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.ProgressFailAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ProgressClearAnimation(); // Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.ProgressClearAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void WBP_ProgressBar_Event_1(struct UWBP_ProgressBar_C* WBP_ProgressBar); // Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.WBP_ProgressBar_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_ProgressBarNameValue(int32_t EntryPoint); // Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.ExecuteUbergraph_WBP_ProgressBarNameValue // (Final|UbergraphFunction) // @ game+0x1e02480
	void OnProgressBarFull__DelegateSignature(); // Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.OnProgressBarFull__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

