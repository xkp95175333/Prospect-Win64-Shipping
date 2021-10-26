// WidgetBlueprintGeneratedClass WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C
// Size: 0x411 (Inherited: 0x360)
struct UWBP_SquadOverview_Entry_C : UYWidget_OutpostSquadOverviewEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x360(0x08)
	struct UWidgetAnimation* HighlightBracket_Anim; // 0x368(0x08)
	struct UImage* addMemberImage; // 0x370(0x08)
	struct UImage* Gfx_PlayerBackground; // 0x378(0x08)
	struct UImage* Gfx_PlayerBackgroundStroke; // 0x380(0x08)
	struct UImage* Gfx_StatusNotReady; // 0x388(0x08)
	struct UImage* Gfx_StatusNotReadyBacker; // 0x390(0x08)
	struct UImage* Gfx_StatusReady; // 0x398(0x08)
	struct UImage* Gfx_StatusReadyBacker; // 0x3a0(0x08)
	struct UImage* Gfx_StatusReadyUnder; // 0x3a8(0x08)
	struct UImage* Icn_Avatar; // 0x3b0(0x08)
	struct UUI_ImageBase_WBP_C* Image; // 0x3b8(0x08)
	struct UOverlay* ReadyStatus; // 0x3c0(0x08)
	struct UWidgetSwitcher* StatusSwitcher; // 0x3c8(0x08)
	struct UWBP_SquadTalking_C* talkingIcon_Image; // 0x3d0(0x08)
	struct UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x3d8(0x08)
	struct UYWidget_ProspectorLevel_Small_WBP_C* YWidget_ProspectorLevel_Small_WBP; // 0x3e0(0x08)
	struct UWBP_Generic_ToolTip_C* Add_ToolTipWidget; // 0x3e8(0x08)
	struct UWBP_Generic_ToolTip_C* Player_ToolTipWidget; // 0x3f0(0x08)
	struct FText Player Name; // 0x3f8(0x18)
	bool IsOwnPlayer; // 0x410(0x01)

	void SetReadyStateVisibility(); // Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.SetReadyStateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnMatchmakingSettingsUpdated(); // Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.OnMatchmakingSettingsUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UWidget* Get_ToolTipWidget_Player(); // Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.Get_ToolTipWidget_Player // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct UWidget* Get_ToolTipWidget_Add(); // Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.Get_ToolTipWidget_Add // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void BP_NotifyDataSetup(struct FText playerName); // Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.BP_NotifyDataSetup // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__m_addMemberButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(); // Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.BndEvt__m_addMemberButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__m_addMemberButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.BndEvt__m_addMemberButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_NotifyPlayerBound(struct FString PlayerId); // Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.BP_NotifyPlayerBound // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__m_addMemberButton_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature(); // Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.BndEvt__m_addMemberButton_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__m_addMemberButton_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature(); // Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.BndEvt__m_addMemberButton_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__m_squadMemberButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature(); // Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.BndEvt__m_squadMemberButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__m_squadMemberButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature(); // Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.BndEvt__m_squadMemberButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_SquadOverview_Entry(int32_t EntryPoint); // Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.ExecuteUbergraph_WBP_SquadOverview_Entry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

