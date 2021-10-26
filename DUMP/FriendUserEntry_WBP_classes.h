// WidgetBlueprintGeneratedClass FriendUserEntry_WBP.FriendUserEntry_WBP_C
// Size: 0x3c0 (Inherited: 0x340)
struct UFriendUserEntry_WBP_C : UYWidget_UserEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UYButton* contextMenuYButton; // 0x348(0x08)
	struct UImage* Image_94; // 0x350(0x08)
	struct UYTextBlock* onlineStatusText; // 0x358(0x08)
	struct UWidgetSwitcher* onlineStatusWidgetSwitcher; // 0x360(0x08)
	struct UImage* selectedBG; // 0x368(0x08)
	struct UImage* SquadBG; // 0x370(0x08)
	struct UImage* SquadIcon; // 0x378(0x08)
	struct UYTextBlock* squadSize; // 0x380(0x08)
	struct UYTextBlock* statusSeparatorText; // 0x388(0x08)
	struct UUI_ImageBase_WBP_C* UI_ImageBase_WBP; // 0x390(0x08)
	struct UYTextBlock* Username; // 0x398(0x08)
	struct UYTextBlock* userStatusText; // 0x3a0(0x08)
	struct UYProgressBarProspectorLevel_WBP_C* YProgressBarProspectorLevel_WBP; // 0x3a8(0x08)
	struct FMulticastInlineDelegate OpenContextMenu; // 0x3b0(0x10)

	void ToggleEntryActive(bool SetActive); // Function FriendUserEntry_WBP.FriendUserEntry_WBP_C.ToggleEntryActive // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Update(struct FYOutpostFriendInfo UserInfo); // Function FriendUserEntry_WBP.FriendUserEntry_WBP_C.Update // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_SetToDefault(); // Function FriendUserEntry_WBP.FriendUserEntry_WBP_C.BP_SetToDefault // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnUpdate(struct FYOutpostFriendInfo friendInfo); // Function FriendUserEntry_WBP.FriendUserEntry_WBP_C.BP_OnUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BP_OnDataSet(struct FYOutpostFriendInfo friendInfo); // Function FriendUserEntry_WBP.FriendUserEntry_WBP_C.BP_OnDataSet // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__contextMenuYButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function FriendUserEntry_WBP.FriendUserEntry_WBP_C.BndEvt__contextMenuYButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_FriendUserEntry_WBP(int32_t EntryPoint); // Function FriendUserEntry_WBP.FriendUserEntry_WBP_C.ExecuteUbergraph_FriendUserEntry_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void OpenContextMenu__DelegateSignature(struct UFriendUserEntry_WBP_C* Object); // Function FriendUserEntry_WBP.FriendUserEntry_WBP_C.OpenContextMenu__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

