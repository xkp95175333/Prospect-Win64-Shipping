// WidgetBlueprintGeneratedClass Debug_ReplayMenu_WBP.Debug_ReplayMenu_WBP_C
// Size: 0x290 (Inherited: 0x260)
struct UDebug_ReplayMenu_WBP_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UScrollBox* AllReplaysScrollBox; // 0x268(0x08)
	struct UYButton* YRefresh; // 0x270(0x08)
	struct UYButton* YStartRecording; // 0x278(0x08)
	struct UYButton* YStartRecordingForAutomationTest; // 0x280(0x08)
	struct UYButton* YStopRecording; // 0x288(0x08)

	void PreConstruct(bool IsDesignTime); // Function Debug_ReplayMenu_WBP.Debug_ReplayMenu_WBP_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function Debug_ReplayMenu_WBP.Debug_ReplayMenu_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnFindReplays(struct TArray<struct FS_ReplayInfo> ReplayInfo); // Function Debug_ReplayMenu_WBP.Debug_ReplayMenu_WBP_C.OnFindReplays // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__YStopRecording_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Debug_ReplayMenu_WBP.Debug_ReplayMenu_WBP_C.BndEvt__YStopRecording_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__YStartRecording_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function Debug_ReplayMenu_WBP.Debug_ReplayMenu_WBP_C.BndEvt__YStartRecording_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__YStartRecordingForAutomationTest_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function Debug_ReplayMenu_WBP.Debug_ReplayMenu_WBP_C.BndEvt__YStartRecordingForAutomationTest_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__YRefresh_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function Debug_ReplayMenu_WBP.Debug_ReplayMenu_WBP_C.BndEvt__YRefresh_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_Debug_ReplayMenu_WBP(int32_t EntryPoint); // Function Debug_ReplayMenu_WBP.Debug_ReplayMenu_WBP_C.ExecuteUbergraph_Debug_ReplayMenu_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

