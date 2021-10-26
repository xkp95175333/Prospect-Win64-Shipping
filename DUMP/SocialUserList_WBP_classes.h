// WidgetBlueprintGeneratedClass SocialUserList_WBP.SocialUserList_WBP_C
// Size: 0x318 (Inherited: 0x2e0)
struct USocialUserList_WBP_C : UYWidget_SocialUserList {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UVerticalBox* entriesVerticalBox; // 0x2e8(0x08)
	struct UWBP_Collapsable_C* WBP_Collapsable; // 0x2f0(0x08)
	struct UYWidgetPoolManager* WidgetPoolManager; // 0x2f8(0x08)
	struct UFriendUserEntry_WBP_C* cachedSelectedEntryWBP; // 0x300(0x08)
	struct FMulticastInlineDelegate ContextMenuOpened; // 0x308(0x10)

	void ResetEntriesVisibility(); // Function SocialUserList_WBP.SocialUserList_WBP_C.ResetEntriesVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetEntriesVisibilityByUserId(struct TArray<struct FString> userIds); // Function SocialUserList_WBP.SocialUserList_WBP_C.SetEntriesVisibilityByUserId // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetEntryActionButtons(struct UWBP_Social_User_Entry_C* socialUserEntryWBP); // Function SocialUserList_WBP.SocialUserList_WBP_C.SetEntryActionButtons // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UYWidget_SocialUserEntry* BP_CreateAndAddEntry(struct FYOutpostFriendInfo friendInfo); // Function SocialUserList_WBP.SocialUserList_WBP_C.BP_CreateAndAddEntry // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function SocialUserList_WBP.SocialUserList_WBP_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function SocialUserList_WBP.SocialUserList_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_SetNumberOfVisibleEntries(int32_t numOfVisibleEntries); // Function SocialUserList_WBP.SocialUserList_WBP_C.BP_SetNumberOfVisibleEntries // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_SocialUserList_WBP(int32_t EntryPoint); // Function SocialUserList_WBP.SocialUserList_WBP_C.ExecuteUbergraph_SocialUserList_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void ContextMenuOpened__DelegateSignature(); // Function SocialUserList_WBP.SocialUserList_WBP_C.ContextMenuOpened__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

