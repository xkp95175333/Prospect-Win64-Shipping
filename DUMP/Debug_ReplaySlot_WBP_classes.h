// WidgetBlueprintGeneratedClass Debug_ReplaySlot_WBP.Debug_ReplaySlot_WBP_C
// Size: 0x2d0 (Inherited: 0x260)
struct UDebug_ReplaySlot_WBP_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* DeleteReplayButton; // 0x268(0x08)
	struct UButton* PlayButton; // 0x270(0x08)
	struct UEditableTextBox* ReplayNameTextBox; // 0x278(0x08)
	struct FString ReplayName; // 0x280(0x10)
	struct FString ReplayFriendlyName; // 0x290(0x10)
	struct FS_ReplayInfo ReplayInfo; // 0x2a0(0x30)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Debug_ReplaySlot_WBP.Debug_ReplaySlot_WBP_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ReplayButton_K2Node_ComponentBoundEvent_235_OnButtonClickedEvent__DelegateSignature(); // Function Debug_ReplaySlot_WBP.Debug_ReplaySlot_WBP_C.BndEvt__ReplayButton_K2Node_ComponentBoundEvent_235_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__DeleteReplayButton_K2Node_ComponentBoundEvent_252_OnButtonClickedEvent__DelegateSignature(); // Function Debug_ReplaySlot_WBP.Debug_ReplaySlot_WBP_C.BndEvt__DeleteReplayButton_K2Node_ComponentBoundEvent_252_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ReplayNameTextBox_K2Node_ComponentBoundEvent_271_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function Debug_ReplaySlot_WBP.Debug_ReplaySlot_WBP_C.BndEvt__ReplayNameTextBox_K2Node_ComponentBoundEvent_271_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function Debug_ReplaySlot_WBP.Debug_ReplaySlot_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_Debug_ReplaySlot_WBP(int32_t EntryPoint); // Function Debug_ReplaySlot_WBP.Debug_ReplaySlot_WBP_C.ExecuteUbergraph_Debug_ReplaySlot_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

