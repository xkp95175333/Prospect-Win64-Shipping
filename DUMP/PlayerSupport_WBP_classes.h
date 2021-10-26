// WidgetBlueprintGeneratedClass PlayerSupport_WBP.PlayerSupport_WBP_C
// Size: 0x418 (Inherited: 0x338)
struct UPlayerSupport_WBP_C : UYWidget_PlayerSupport {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UCanvasPanel* CanvasPanel_CreateBug; // 0x340(0x08)
	struct UYTextBlock* CategorryTextBlock; // 0x348(0x08)
	struct UCommonBackground_WBP_C* CommonBackround_WBP; // 0x350(0x08)
	struct UYTextBlock* ContactDetails; // 0x358(0x08)
	struct UEditableTextBox* ContactDetailsEditable; // 0x360(0x08)
	struct UYTextBlock* Description; // 0x368(0x08)
	struct UEditableTextBox* EditableText_SupportTitle; // 0x370(0x08)
	struct UImage* imgBG_Description; // 0x378(0x08)
	struct UMultiLineEditableText* MultiEditable_SupportDescription; // 0x380(0x08)
	struct UEditableTextBox* PlayerNameToReport; // 0x388(0x08)
	struct UYTextBlock* PlayerReportName; // 0x390(0x08)
	struct UYTextBlock* Title; // 0x398(0x08)
	struct UYButton* YButton_Cancel; // 0x3a0(0x08)
	struct UYButton* YButton_InputDescription; // 0x3a8(0x08)
	struct UYButton* YButton_Submit; // 0x3b0(0x08)
	struct FMulticastInlineDelegate OnCancel; // 0x3b8(0x10)
	struct FMulticastInlineDelegate OnSubmit; // 0x3c8(0x10)
	struct FMulticastInlineDelegate OnWidgetSubmitConfirmationEnded; // 0x3d8(0x10)
	struct FTimerHandle TimerHandleOnWidgetSubmitConfirmation; // 0x3e8(0x08)
	int32_t titleMaxCharCount; // 0x3f0(0x04)
	int32_t descriptionMaxCharCount; // 0x3f4(0x04)
	struct TArray<struct FString> BugLabels; // 0x3f8(0x10)
	bool ValidReport; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct UMaterialInstanceDynamic* ImgBG_Description_Material; // 0x410(0x08)

	bool BP_HandleBackKey(); // Function PlayerSupport_WBP.PlayerSupport_WBP_C.BP_HandleBackKey // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void FindColor(bool SUCCESS, struct FSlateColor ReturnColor); // Function PlayerSupport_WBP.PlayerSupport_WBP_C.FindColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	int32_t FindOptionIndex(); // Function PlayerSupport_WBP.PlayerSupport_WBP_C.FindOptionIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	bool BP_HandleConfirmInput(); // Function PlayerSupport_WBP.PlayerSupport_WBP_C.BP_HandleConfirmInput // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void TrySubmit(); // Function PlayerSupport_WBP.PlayerSupport_WBP_C.TrySubmit // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__EditableText_BugTitle_K2Node_ComponentBoundEvent_315_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function PlayerSupport_WBP.PlayerSupport_WBP_C.BndEvt__EditableText_BugTitle_K2Node_ComponentBoundEvent_315_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function PlayerSupport_WBP.PlayerSupport_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__EditableText_BugTitle_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function PlayerSupport_WBP.PlayerSupport_WBP_C.BndEvt__EditableText_BugTitle_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__MultiEditable_BugDescription_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText Text); // Function PlayerSupport_WBP.PlayerSupport_WBP_C.BndEvt__MultiEditable_BugDescription_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__YButton_Submit_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function PlayerSupport_WBP.PlayerSupport_WBP_C.BndEvt__YButton_Submit_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__YButton_Cancel_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(); // Function PlayerSupport_WBP.PlayerSupport_WBP_C.BndEvt__YButton_Cancel_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__YButton_InputDescription_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function PlayerSupport_WBP.PlayerSupport_WBP_C.BndEvt__YButton_InputDescription_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__YButton_InputDescription_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function PlayerSupport_WBP.PlayerSupport_WBP_C.BndEvt__YButton_InputDescription_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function PlayerSupport_WBP.PlayerSupport_WBP_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__MultiEditable_SupportDescription_K2Node_ComponentBoundEvent_10_OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function PlayerSupport_WBP.PlayerSupport_WBP_C.BndEvt__MultiEditable_SupportDescription_K2Node_ComponentBoundEvent_10_OnMultiLineEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_PlayerSupport_WBP(int32_t EntryPoint); // Function PlayerSupport_WBP.PlayerSupport_WBP_C.ExecuteUbergraph_PlayerSupport_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void OnWidgetSubmitConfirmationEnded__DelegateSignature(); // Function PlayerSupport_WBP.PlayerSupport_WBP_C.OnWidgetSubmitConfirmationEnded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSubmit__DelegateSignature(struct FText BugTitle, struct FText BugDescription, struct TArray<struct FString> Bug Labels); // Function PlayerSupport_WBP.PlayerSupport_WBP_C.OnSubmit__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnCancel__DelegateSignature(); // Function PlayerSupport_WBP.PlayerSupport_WBP_C.OnCancel__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

