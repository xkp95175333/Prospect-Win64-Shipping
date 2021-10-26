// WidgetBlueprintGeneratedClass WBP_SocialOverview.WBP_SocialOverview_C
// Size: 0x370 (Inherited: 0x2c0)
struct UWBP_SocialOverview_C : UYWidget_SocialOverview {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UWidgetAnimation* AnimOut; // 0x2c8(0x08)
	struct UWidgetAnimation* AnimIn; // 0x2d0(0x08)
	struct UWidgetSwitcher* ContentSwitcher; // 0x2d8(0x08)
	struct UEditableTextBox* EditTxtSingle_UserName; // 0x2e0(0x08)
	struct UScrollBox* Friends_ScrollBox; // 0x2e8(0x08)
	struct UScrollBox* Search_ScrollBox; // 0x2f0(0x08)
	struct USocialUserList_WBP_C* SocialUsersList_WBP_Blocked; // 0x2f8(0x08)
	struct USocialUserList_WBP_C* SocialUsersList_WBP_FriendInvites; // 0x300(0x08)
	struct USocialUserList_WBP_C* SocialUsersList_WBP_Offline; // 0x308(0x08)
	struct USocialUserList_WBP_C* SocialUsersList_WBP_Online; // 0x310(0x08)
	struct USocialUserList_WBP_C* SocialUsersList_WBP_SearchResults; // 0x318(0x08)
	struct USocialUserList_WBP_C* SocialUsersList_WBP_SquadInvites; // 0x320(0x08)
	struct UVerticalBox* VerticalBox_Search_Initial; // 0x328(0x08)
	struct UVerticalBox* VerticalBox_Search_NoMatchFound; // 0x330(0x08)
	struct UWBP_BlurFullScreenBacker_Panel_C* WBP_BlurFullScreenBacker_Panel; // 0x338(0x08)
	struct UWBP_Common_Btn_C* WBP_Close_Btn; // 0x340(0x08)
	struct UWBP_DividerHorizontal_Panel_C* WBP_DividerHorizontal_Panel; // 0x348(0x08)
	struct UWBP_Common_Empty_Btn_C* WBP_Search_Btn; // 0x350(0x08)
	struct UWBP_Common_Empty_Btn_C* WBP_SearchClear_Btn; // 0x358(0x08)
	struct UWBP_TabNavigation_C* WBP_TabNavigation; // 0x360(0x08)
	struct UWBP_Toast_C* WBP_Toast; // 0x368(0x08)

	void OnFriendSearchResult(struct TArray<struct FString> userIds); // Function WBP_SocialOverview.WBP_SocialOverview_C.OnFriendSearchResult // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnUserSearchResult(bool hasFound, struct FYOutpostFriendInfo foundUser); // Function WBP_SocialOverview.WBP_SocialOverview_C.OnUserSearchResult // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ResetContentDataForSearchResults(); // Function WBP_SocialOverview.WBP_SocialOverview_C.ResetContentDataForSearchResults // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ResetContentDataForFriends(); // Function WBP_SocialOverview.WBP_SocialOverview_C.ResetContentDataForFriends // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ResetContentData(); // Function WBP_SocialOverview.WBP_SocialOverview_C.ResetContentData // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_SocialOverview_WBP_TabNavigation_K2Node_ComponentBoundEvent_0_OnTabChanged__DelegateSignature(int32_t Index, struct UWBP_TabElementBase_TabElem_C* TabElement); // Function WBP_SocialOverview.WBP_SocialOverview_C.BndEvt__WBP_SocialOverview_WBP_TabNavigation_K2Node_ComponentBoundEvent_0_OnTabChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_SocialOverview_WBP_Search_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_SocialOverview.WBP_SocialOverview_C.BndEvt__WBP_SocialOverview_WBP_Search_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_OnUserSearchResult(bool hasFound, struct FYOutpostFriendInfo foundUser); // Function WBP_SocialOverview.WBP_SocialOverview_C.BP_OnUserSearchResult // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_SocialOverview_EditTxtSingle_UserName_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function WBP_SocialOverview.WBP_SocialOverview_C.BndEvt__WBP_SocialOverview_EditTxtSingle_UserName_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BP_OnFriendSearchResponse(struct TArray<struct FString> foundUserIds); // Function WBP_SocialOverview.WBP_SocialOverview_C.BP_OnFriendSearchResponse // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_SocialOverview_WBP_SearchClear_Btn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_SocialOverview.WBP_SocialOverview_C.BndEvt__WBP_SocialOverview_WBP_SearchClear_Btn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetHidden(); // Function WBP_SocialOverview.WBP_SocialOverview_C.BP_OnWidgetHidden // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_SocialOverview_EditTxtSingle_UserName_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function WBP_SocialOverview.WBP_SocialOverview_C.BndEvt__WBP_SocialOverview_EditTxtSingle_UserName_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetShown(); // Function WBP_SocialOverview.WBP_SocialOverview_C.BP_OnWidgetShown // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_SocialOverview_WBP_Close_Btn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_SocialOverview.WBP_SocialOverview_C.BndEvt__WBP_SocialOverview_WBP_Close_Btn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_SocialOverview(int32_t EntryPoint); // Function WBP_SocialOverview.WBP_SocialOverview_C.ExecuteUbergraph_WBP_SocialOverview // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

