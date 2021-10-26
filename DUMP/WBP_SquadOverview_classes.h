// WidgetBlueprintGeneratedClass WBP_SquadOverview.WBP_SquadOverview_C
// Size: 0x2f8 (Inherited: 0x2e8)
struct UWBP_SquadOverview_C : UYWidget_OutpostSquadToggle {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UButton* Btn_LeaveSquad; // 0x2f0(0x08)

	struct UWidget* Get_LeaveSquadButton_ToolTipWidget(); // Function WBP_SquadOverview.WBP_SquadOverview_C.Get_LeaveSquadButton_ToolTipWidget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void BP_SquadUpdate(bool IsInSquad); // Function WBP_SquadOverview.WBP_SquadOverview_C.BP_SquadUpdate // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_SquadOverview_Btn_LeaveSquad_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_SquadOverview.WBP_SquadOverview_C.BndEvt__WBP_SquadOverview_Btn_LeaveSquad_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_SquadOverview(int32_t EntryPoint); // Function WBP_SquadOverview.WBP_SquadOverview_C.ExecuteUbergraph_WBP_SquadOverview // (Final|UbergraphFunction) // @ game+0x1e02480
};

