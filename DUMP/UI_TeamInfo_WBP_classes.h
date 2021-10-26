// WidgetBlueprintGeneratedClass UI_TeamInfo_WBP.UI_TeamInfo_WBP_C
// Size: 0x298 (Inherited: 0x260)
struct UUI_TeamInfo_WBP_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* PlayerTeamIDColor; // 0x268(0x08)
	struct UTextBlock* PlayerTeamIDNumber; // 0x270(0x08)
	struct UCanvasPanel* TeamInfoContainer; // 0x278(0x08)
	struct AYPlayerState* AssociatedPlayerState; // 0x280(0x08)
	struct FMulticastInlineDelegate OnTeamInfoInitialized; // 0x288(0x10)

	void InitFromPlayerState(struct AYPlayerState* PlayerState); // Function UI_TeamInfo_WBP.UI_TeamInfo_WBP_C.InitFromPlayerState // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSquadMembersChanged(); // Function UI_TeamInfo_WBP.UI_TeamInfo_WBP_C.OnSquadMembersChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_UI_TeamInfo_WBP(int32_t EntryPoint); // Function UI_TeamInfo_WBP.UI_TeamInfo_WBP_C.ExecuteUbergraph_UI_TeamInfo_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void OnTeamInfoInitialized__DelegateSignature(bool SUCCESS); // Function UI_TeamInfo_WBP.UI_TeamInfo_WBP_C.OnTeamInfoInitialized__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

