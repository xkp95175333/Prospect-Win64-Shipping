// WidgetBlueprintGeneratedClass ReportPlayer_WBP.ReportPlayer_WBP_C
// Size: 0x429 (Inherited: 0x338)
struct UReportPlayer_WBP_C : UYWidget_PlayerSupport {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UCanvasPanel* CanvasPanel_CreateBug; // 0x340(0x08)
	struct UCanvasPanel* CanvasPanel_QuickBug; // 0x348(0x08)
	struct UCommonBackground_WBP_C* CommonBackround_WBP; // 0x350(0x08)
	struct UYTextBlock* ContactDetails_2; // 0x358(0x08)
	struct UYTextBlock* Description; // 0x360(0x08)
	struct UEditableTextBox* EditableText_SupportTitle; // 0x368(0x08)
	struct UImage* Image; // 0x370(0x08)
	struct UImage* Image_1; // 0x378(0x08)
	struct UImage* Image_12; // 0x380(0x08)
	struct UImage* Image_Background; // 0x388(0x08)
	struct UMultiLineEditableText* MultiEditable_SupportDescription; // 0x390(0x08)
	struct UEditableTextBox* PlayerNameToReport; // 0x398(0x08)
	struct UImage* QuickBug_Background; // 0x3a0(0x08)
	struct UVerticalBox* ReportTypesVerticalBox; // 0x3a8(0x08)
	struct UYTextBlock* Title; // 0x3b0(0x08)
	struct UYButton* YButton_Cancel; // 0x3b8(0x08)
	struct UYButton* YButton_Submit; // 0x3c0(0x08)
	struct FMulticastInlineDelegate OnCancel; // 0x3c8(0x10)
	struct FMulticastInlineDelegate OnSubmit; // 0x3d8(0x10)
	struct FMulticastInlineDelegate OnWidgetSubmitConfirmationEnded; // 0x3e8(0x10)
	int32_t titleMaxCharCount; // 0x3f8(0x04)
	int32_t descriptionMaxCharCount; // 0x3fc(0x04)
	bool ValidReport; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct TArray<enum class EYReportPlayerType> Types; // 0x408(0x10)
	struct TArray<struct UReportPlayerButtonType_WBP_C*> RequestWidget; // 0x418(0x10)
	enum class EYReportPlayerType SelectedType; // 0x428(0x01)

	bool BP_HandleBackKey(); // Function ReportPlayer_WBP.ReportPlayer_WBP_C.BP_HandleBackKey // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void RefreshSelectedReportingType(); // Function ReportPlayer_WBP.ReportPlayer_WBP_C.RefreshSelectedReportingType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void FindColor(bool SUCCESS, struct FSlateColor ReturnColor); // Function ReportPlayer_WBP.ReportPlayer_WBP_C.FindColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	int32_t FindOptionIndex(); // Function ReportPlayer_WBP.ReportPlayer_WBP_C.FindOptionIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	bool BP_HandleConfirmInput(); // Function ReportPlayer_WBP.ReportPlayer_WBP_C.BP_HandleConfirmInput // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void TrySubmit(); // Function ReportPlayer_WBP.ReportPlayer_WBP_C.TrySubmit // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__EditableText_BugTitle_K2Node_ComponentBoundEvent_315_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function ReportPlayer_WBP.ReportPlayer_WBP_C.BndEvt__EditableText_BugTitle_K2Node_ComponentBoundEvent_315_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__EditableText_BugTitle_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function ReportPlayer_WBP.ReportPlayer_WBP_C.BndEvt__EditableText_BugTitle_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__MultiEditable_BugDescription_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText Text); // Function ReportPlayer_WBP.ReportPlayer_WBP_C.BndEvt__MultiEditable_BugDescription_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__YButton_Submit_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function ReportPlayer_WBP.ReportPlayer_WBP_C.BndEvt__YButton_Submit_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__YButton_Cancel_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(); // Function ReportPlayer_WBP.ReportPlayer_WBP_C.BndEvt__YButton_Cancel_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_OnDataSet(struct FYPlayerSupportReportRequestData Data); // Function ReportPlayer_WBP.ReportPlayer_WBP_C.BP_OnDataSet // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function ReportPlayer_WBP.ReportPlayer_WBP_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnReportTypeClicked_Event_1(enum class EYReportPlayerType PlayerReportType); // Function ReportPlayer_WBP.ReportPlayer_WBP_C.OnReportTypeClicked_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_ReportPlayer_WBP(int32_t EntryPoint); // Function ReportPlayer_WBP.ReportPlayer_WBP_C.ExecuteUbergraph_ReportPlayer_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void OnWidgetSubmitConfirmationEnded__DelegateSignature(); // Function ReportPlayer_WBP.ReportPlayer_WBP_C.OnWidgetSubmitConfirmationEnded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSubmit__DelegateSignature(struct FText BugTitle, struct FText BugDescription, struct TArray<struct FString> Bug Labels); // Function ReportPlayer_WBP.ReportPlayer_WBP_C.OnSubmit__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnCancel__DelegateSignature(); // Function ReportPlayer_WBP.ReportPlayer_WBP_C.OnCancel__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

