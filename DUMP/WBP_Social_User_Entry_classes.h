// WidgetBlueprintGeneratedClass WBP_Social_User_Entry.WBP_Social_User_Entry_C
// Size: 0x468 (Inherited: 0x340)
struct UWBP_Social_User_Entry_C : UYWidget_SocialUserEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UWidgetAnimation* WidgetOut_Anim; // 0x348(0x08)
	struct UImage* Gfx_Backer; // 0x350(0x08)
	struct UImage* Gfx_Gradient; // 0x358(0x08)
	struct UImage* Gfx_OnlineStatus; // 0x360(0x08)
	struct UImage* Icn_ChatMute; // 0x368(0x08)
	struct UImage* Icn_Friend; // 0x370(0x08)
	struct UImage* Icn_Profile; // 0x378(0x08)
	struct UImage* Icn_SquadState; // 0x380(0x08)
	struct UImage* Icn_VoiceMute; // 0x388(0x08)
	struct UHorizontalBox* OnlineStatus; // 0x390(0x08)
	struct UOverlay* SquadOverlay; // 0x398(0x08)
	struct UHorizontalBox* SquadStatus; // 0x3a0(0x08)
	struct UTextBlock* Txt_OnlineStatus; // 0x3a8(0x08)
	struct UTextBlock* Txt_SeparatorState; // 0x3b0(0x08)
	struct UTextBlock* Txt_SquadMembers; // 0x3b8(0x08)
	struct UTextBlock* Txt_UserName; // 0x3c0(0x08)
	struct UTextBlock* Txt_UserState; // 0x3c8(0x08)
	struct UWBP_Common_Simple_Btn_C* WBP_Accept_Btn; // 0x3d0(0x08)
	struct UWBP_Common_Empty_Btn_C* WBP_ChatMute_Btn; // 0x3d8(0x08)
	struct UWBP_Common_Simple_Btn_C* WBP_Decline_Btn; // 0x3e0(0x08)
	struct UWBP_Common_Simple_Btn_C* WBP_Report_Btn; // 0x3e8(0x08)
	struct UWBP_Common_Simple_Btn_C* WBP_Social_Btn; // 0x3f0(0x08)
	struct UWBP_Common_Simple_Btn_C* WBP_Squad_Btn; // 0x3f8(0x08)
	struct UWBP_Common_Simple_Btn_C* WBP_SquadLeave_Btn; // 0x400(0x08)
	struct UWBP_Common_Simple_Btn_C* WBP_VoiceMute_Btn; // 0x408(0x08)
	bool HideOnlineStatus; // 0x410(0x01)
	bool HideSquadStatus; // 0x411(0x01)
	bool CanShowInviteButtons; // 0x412(0x01)
	bool CanShowSocialButton; // 0x413(0x01)
	bool CanShowSquadButton; // 0x414(0x01)
	bool CanShowChatMuteButton; // 0x415(0x01)
	bool CanShowVoiceMuteButton; // 0x416(0x01)
	bool CanShowReportButton; // 0x417(0x01)
	bool CanShowBlockButton; // 0x418(0x01)
	bool DebugShowInviteButtons; // 0x419(0x01)
	bool DebugShowSocialButton; // 0x41a(0x01)
	bool DebugShowSquadButton; // 0x41b(0x01)
	bool DebugShowChatMuteButton; // 0x41c(0x01)
	bool DebugShowVoiceMuteButton; // 0x41d(0x01)
	bool DebugShowReportButton; // 0x41e(0x01)
	bool DebugShowBlockButton; // 0x41f(0x01)
	bool CanShowOnlineStatusButton; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct UWBP_Generic_ToolTip_C* TooltipAccept; // 0x428(0x08)
	struct UWBP_Generic_ToolTip_C* TooltipDecline; // 0x430(0x08)
	struct UWBP_Generic_ToolTip_C* TooltipSquad; // 0x438(0x08)
	struct UWBP_Generic_ToolTip_C* TooltipFriend; // 0x440(0x08)
	struct UWBP_Generic_ToolTip_C* TooltipMuteVoice; // 0x448(0x08)
	struct UWBP_Generic_ToolTip_C* TooltipMuteChat; // 0x450(0x08)
	struct UWBP_Generic_ToolTip_C* TooltipReport; // 0x458(0x08)
	struct UWBP_Generic_ToolTip_C* TooltipLeaveSquad; // 0x460(0x08)

	struct UWidget* Get_WBP_Social_Btn_Alt_1_ToolTipWidget_1(); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.Get_WBP_Social_Btn_Alt_1_ToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct UWidget* Get_WBP_Report_Btn_Alt_ToolTipWidget_1(); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.Get_WBP_Report_Btn_Alt_ToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct UWidget* Get_WBP_VoiceMute_Btn_Alt_ToolTipWidget_1(); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.Get_WBP_VoiceMute_Btn_Alt_ToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct UWidget* Get_WBP_SquadLeave_Btn_Alt_ToolTipWidget_1(); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.Get_WBP_SquadLeave_Btn_Alt_ToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct UWidget* Get_WBP_Squad_Btn_Alt_ToolTipWidget_1(); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.Get_WBP_Squad_Btn_Alt_ToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct UWidget* Get_WBP_Decline_Btn_Alt_ToolTipWidget_1(); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.Get_WBP_Decline_Btn_Alt_ToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct UWidget* Get_WBP_Accept_Btn_Alt_ToolTipWidget_1(); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.Get_WBP_Accept_Btn_Alt_ToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct UWidget* Get_WBP_LeaveSquad_Btn_ToolTipWidget_1(); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.Get_WBP_LeaveSquad_Btn_ToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct UWidget* Get_WBP_Report_Btn_ToolTipWidget_1(); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.Get_WBP_Report_Btn_ToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct UWidget* Get_WBP_ChatMute_Btn_ToolTipWidget_1(); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.Get_WBP_ChatMute_Btn_ToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct UWidget* Get_WBP_VoiceMute_Btn_ToolTipWidget_1(); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.Get_WBP_VoiceMute_Btn_ToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct UWidget* Get_WBP_Social_Btn_ToolTipWidget_1(); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.Get_WBP_Social_Btn_ToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct UWidget* Get_WBP_Squad_Btn_ToolTipWidget_1(); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.Get_WBP_Squad_Btn_ToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct UWidget* Get_WBP_Decline_Btn_ToolTipWidget_1(); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.Get_WBP_Decline_Btn_ToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct UWidget* Get_WBP_Accept_Btn_ToolTipWidget_1(); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.Get_WBP_Accept_Btn_ToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void OnSquadInfoUpdated(struct TArray<struct FYOutpostFriendInfo> squadMemberInfos); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.OnSquadInfoUpdated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetUserData(); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.SetUserData // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetTooltips(); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.SetTooltips // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetActionButtonReport(bool IsDesignTime); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.SetActionButtonReport // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetActionButtonVoiceMute(bool IsDesignTime, struct FString UserId); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.SetActionButtonVoiceMute // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetActionButtonChatMute(bool IsDesignTime, struct FString UserId); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.SetActionButtonChatMute // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetActionButtonSquad(bool IsDesignTime, struct FString UserId); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.SetActionButtonSquad // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetActionButtonSocial(bool IsDesignTime, struct FString UserId); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.SetActionButtonSocial // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetActionButtonInvites(bool IsDesignTime, struct FString UserId); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.SetActionButtonInvites // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetAllActionButtons(bool IsDesignTime); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.SetAllActionButtons // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetSquadData(); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.SetSquadData // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_CanShowChatMuteButton(bool isAllowed); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.BP_CanShowChatMuteButton // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_CanShowReportButton(bool isAllowed); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.BP_CanShowReportButton // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_CanShowSocialButton(bool isAllowed); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.BP_CanShowSocialButton // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_CanShowSquadButton(bool isAllowed); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.BP_CanShowSquadButton // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_CanShowVoiceMuteButton(bool isAllowed); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.BP_CanShowVoiceMuteButton // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_CanShowBlockButton(bool isAllowed); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.BP_CanShowBlockButton // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_CanShowInviteButtons(bool isAllowed); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.BP_CanShowInviteButtons // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Social_User_Entry_WBP_ChatMute_Btn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.BndEvt__WBP_Social_User_Entry_WBP_ChatMute_Btn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_OnDataSet(struct FYOutpostFriendInfo friendInfo); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.BP_OnDataSet // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BP_SetToDefault(); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.BP_SetToDefault // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Social_User_Entry_WBP_Accept_Btn_Alt_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.BndEvt__WBP_Social_User_Entry_WBP_Accept_Btn_Alt_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Social_User_Entry_WBP_Decline_Btn_Alt_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.BndEvt__WBP_Social_User_Entry_WBP_Decline_Btn_Alt_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Social_User_Entry_WBP_Squad_Btn_Alt_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.BndEvt__WBP_Social_User_Entry_WBP_Squad_Btn_Alt_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Social_User_Entry_WBP_SquadLeave_Btn_Alt_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.BndEvt__WBP_Social_User_Entry_WBP_SquadLeave_Btn_Alt_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Social_User_Entry_WBP_VoiceMute_Btn_Alt_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.BndEvt__WBP_Social_User_Entry_WBP_VoiceMute_Btn_Alt_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Social_User_Entry_WBP_Report_Btn_Alt_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.BndEvt__WBP_Social_User_Entry_WBP_Report_Btn_Alt_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Social_User_Entry_WBP_Social_Btn_Alt_1_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.BndEvt__WBP_Social_User_Entry_WBP_Social_Btn_Alt_1_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Social_User_Entry(int32_t EntryPoint); // Function WBP_Social_User_Entry.WBP_Social_User_Entry_C.ExecuteUbergraph_WBP_Social_User_Entry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

