// WidgetBlueprintGeneratedClass ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C
// Size: 0x3d8 (Inherited: 0x2f0)
struct UContextMenu_FriendsList_WBP_C : UYWidget_ChatUserMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UWidgetAnimation* FadeIn; // 0x2f8(0x08)
	struct UHorizontalBox* addFriendPanel; // 0x300(0x08)
	struct UYButton* addFriendYButton; // 0x308(0x08)
	struct UYTextBlock* addFriendYTextBlock; // 0x310(0x08)
	struct UHorizontalBox* blockuserPanel; // 0x318(0x08)
	struct UYButton* blockUserYButton; // 0x320(0x08)
	struct UYTextBlock* blockUserYTextBlock; // 0x328(0x08)
	struct UHorizontalBox* ChatMutePanel; // 0x330(0x08)
	struct UYButton* chatMuteYButton; // 0x338(0x08)
	struct UYTextBlock* chatMuteYTextBlock; // 0x340(0x08)
	struct UYButton* closeMenuYButton; // 0x348(0x08)
	struct UHorizontalBox* inviteToSquadPanel; // 0x350(0x08)
	struct UYButton* inviteToSquadYButton; // 0x358(0x08)
	struct UYTextBlock* inviteToSquadYTextBlock; // 0x360(0x08)
	struct UHorizontalBox* leaveSquadPanel; // 0x368(0x08)
	struct UYButton* leaveSquadYButton; // 0x370(0x08)
	struct UYTextBlock* leaveSquadYTextBlock; // 0x378(0x08)
	struct UYTextBlock* playerNameYTextBlock; // 0x380(0x08)
	struct UHorizontalBox* removeFriendPanel; // 0x388(0x08)
	struct UYButton* removeFriendYButton; // 0x390(0x08)
	struct UYTextBlock* removeFriendYTextBlock; // 0x398(0x08)
	struct UHorizontalBox* reportPanel; // 0x3a0(0x08)
	struct UYButton* reportYButton; // 0x3a8(0x08)
	struct UYTextBlock* reportYTextBlock; // 0x3b0(0x08)
	struct UHorizontalBox* VoiceChatMutePanel; // 0x3b8(0x08)
	struct UYButton* voicechatMuteYButton; // 0x3c0(0x08)
	struct UYTextBlock* voiceChatMuteYTextBlock; // 0x3c8(0x08)
	struct UYTextBlock* YTextBlock_2; // 0x3d0(0x08)

	void SetUpperTextOnEntry(struct UYTextBlock* TextBlock, struct FText Text); // Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.SetUpperTextOnEntry // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__voicechatMuteYButton_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BndEvt__voicechatMuteYButton_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__inviteToSquadYButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BndEvt__inviteToSquadYButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_CanInviteToSquad(bool canInvite, bool isInvitePending); // Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_CanInviteToSquad // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_PlayerNameUpdate(struct FText playerName); // Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_PlayerNameUpdate // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__addFriendYButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BndEvt__addFriendYButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__removeFriendYButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BndEvt__removeFriendYButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__blockUserYButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BndEvt__blockUserYButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_CanAddFriend(bool canAdd, bool isInvitePending); // Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_CanAddFriend // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_CanRemoveFriend(bool canRemove); // Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_CanRemoveFriend // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__closeMenuYButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BndEvt__closeMenuYButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__leaveSquadYButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BndEvt__leaveSquadYButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_CanLeaveSquad(bool canLeave); // Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_CanLeaveSquad // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_CanBlockUser(bool available, bool blockToggle); // Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_CanBlockUser // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__voicechatMuteYButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BndEvt__voicechatMuteYButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_CanReportUser(bool available); // Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_CanReportUser // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_CanMuteChat(bool available, bool isChatMute); // Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_CanMuteChat // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__chatMuteYButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BndEvt__chatMuteYButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_CanMuteVoiceChat(bool available, bool isVoicechatMute); // Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_CanMuteVoiceChat // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_ContextMenu_FriendsList_WBP(int32_t EntryPoint); // Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.ExecuteUbergraph_ContextMenu_FriendsList_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

