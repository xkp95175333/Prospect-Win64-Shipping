// WidgetBlueprintGeneratedClass Chat_UserMenu_WBP.Chat_UserMenu_WBP_C
// Size: 0x438 (Inherited: 0x2f0)
struct UChat_UserMenu_WBP_C : UYWidget_ChatUserMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UWidgetAnimation* FadeIn; // 0x2f8(0x08)
	struct UWidgetAnimation* FadeOut; // 0x300(0x08)
	struct UHorizontalBox* addFriendPanel; // 0x308(0x08)
	struct UYButton* addFriendYButton; // 0x310(0x08)
	struct UYTextBlock* addFriendYTextBlock; // 0x318(0x08)
	struct UImage* BackgroundImage; // 0x320(0x08)
	struct UHorizontalBox* blockuserPanel; // 0x328(0x08)
	struct UYButton* blockUserYButton; // 0x330(0x08)
	struct UYTextBlock* blockUserYTextBlock; // 0x338(0x08)
	struct UImage* chatMutedImage; // 0x340(0x08)
	struct UImage* chatMuteImage; // 0x348(0x08)
	struct UHorizontalBox* ChatMutePanel; // 0x350(0x08)
	struct UYButton* chatMuteYButton; // 0x358(0x08)
	struct UYTextBlock* chatMuteYTextBlock; // 0x360(0x08)
	struct UYButton* closeMenuYButton; // 0x368(0x08)
	struct UHorizontalBox* inviteToSquadPanel; // 0x370(0x08)
	struct UCanvasPanel* mainCanvasPanel; // 0x378(0x08)
	struct UYTextBlock* playerNameYTextBlock; // 0x380(0x08)
	struct UHorizontalBox* removeFriendPanel; // 0x388(0x08)
	struct UYButton* removeFriendYButton; // 0x390(0x08)
	struct UYTextBlock* removeFriendYTextBlock; // 0x398(0x08)
	struct UHorizontalBox* reportBox; // 0x3a0(0x08)
	struct UImage* reportImage; // 0x3a8(0x08)
	struct UHorizontalBox* reportPanel; // 0x3b0(0x08)
	struct UImage* reportSentImage; // 0x3b8(0x08)
	struct UYTextBlock* reportUserYTextBlock; // 0x3c0(0x08)
	struct UYButton* reportYButton; // 0x3c8(0x08)
	struct UImage* Separator; // 0x3d0(0x08)
	struct UImage* Separator_2; // 0x3d8(0x08)
	struct UImage* Separator_3; // 0x3e0(0x08)
	struct UImage* Separator_4; // 0x3e8(0x08)
	struct UHorizontalBox* squadInviteBox; // 0x3f0(0x08)
	struct UImage* squadInviteSentImage; // 0x3f8(0x08)
	struct UYButton* squadInviteYButton; // 0x400(0x08)
	struct UYTextBlock* squadInviteYTextBlock; // 0x408(0x08)
	struct UImage* voicechatMutedImage; // 0x410(0x08)
	struct UImage* voicechatMuteImage; // 0x418(0x08)
	struct UHorizontalBox* VoiceChatMutePanel; // 0x420(0x08)
	struct UYButton* voicechatMuteYButton; // 0x428(0x08)
	struct UYTextBlock* voiceChatMuteYTextBlock; // 0x430(0x08)

	void SetUpperTextOnEntry(struct UYTextBlock* TextBlock, struct FText Text); // Function Chat_UserMenu_WBP.Chat_UserMenu_WBP_C.SetUpperTextOnEntry // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function Chat_UserMenu_WBP.Chat_UserMenu_WBP_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__chatMuteYButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Chat_UserMenu_WBP.Chat_UserMenu_WBP_C.BndEvt__chatMuteYButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__voicechatMuteYButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function Chat_UserMenu_WBP.Chat_UserMenu_WBP_C.BndEvt__voicechatMuteYButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__voicechatMuteYButton_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function Chat_UserMenu_WBP.Chat_UserMenu_WBP_C.BndEvt__voicechatMuteYButton_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_CanInviteToSquad(bool canInvite, bool isInvitePending); // Function Chat_UserMenu_WBP.Chat_UserMenu_WBP_C.BP_CanInviteToSquad // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__squadInviteYButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(); // Function Chat_UserMenu_WBP.Chat_UserMenu_WBP_C.BndEvt__squadInviteYButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__addFriendYButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function Chat_UserMenu_WBP.Chat_UserMenu_WBP_C.BndEvt__addFriendYButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__removeFriendYButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function Chat_UserMenu_WBP.Chat_UserMenu_WBP_C.BndEvt__removeFriendYButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__blockUserYButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function Chat_UserMenu_WBP.Chat_UserMenu_WBP_C.BndEvt__blockUserYButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_CanAddFriend(bool canAdd, bool isInvitePending); // Function Chat_UserMenu_WBP.Chat_UserMenu_WBP_C.BP_CanAddFriend // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_CanRemoveFriend(bool canRemove); // Function Chat_UserMenu_WBP.Chat_UserMenu_WBP_C.BP_CanRemoveFriend // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_CanBlockUser(bool available, bool blockToggle); // Function Chat_UserMenu_WBP.Chat_UserMenu_WBP_C.BP_CanBlockUser // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_PlayerNameUpdate(struct FText playerName); // Function Chat_UserMenu_WBP.Chat_UserMenu_WBP_C.BP_PlayerNameUpdate // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BP_CanReportUser(bool available); // Function Chat_UserMenu_WBP.Chat_UserMenu_WBP_C.BP_CanReportUser // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_CanMuteChat(bool available, bool isChatMute); // Function Chat_UserMenu_WBP.Chat_UserMenu_WBP_C.BP_CanMuteChat // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__closeMenuYButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function Chat_UserMenu_WBP.Chat_UserMenu_WBP_C.BndEvt__closeMenuYButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_CanMuteVoiceChat(bool available, bool isVoicechatMute); // Function Chat_UserMenu_WBP.Chat_UserMenu_WBP_C.BP_CanMuteVoiceChat // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_Chat_UserMenu_WBP(int32_t EntryPoint); // Function Chat_UserMenu_WBP.Chat_UserMenu_WBP_C.ExecuteUbergraph_Chat_UserMenu_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

