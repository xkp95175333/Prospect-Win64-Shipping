// WidgetBlueprintGeneratedClass WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C
// Size: 0x539 (Inherited: 0x3c0)
struct UWBP_PlayerCharacterPlate_C : UYWidget_PlayerCharacterPlate {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c0(0x08)
	struct UWidgetAnimation* FadeOut; // 0x3c8(0x08)
	struct UWidgetAnimation* FadeIn; // 0x3d0(0x08)
	struct UCanvasPanel* CanvasPanel_Offscreen; // 0x3d8(0x08)
	struct UCanvasPanel* CanvasPanel_OnScreen; // 0x3e0(0x08)
	struct UTextBlock* DistanceText; // 0x3e8(0x08)
	struct UImage* Gfx_Backer_Main; // 0x3f0(0x08)
	struct UImage* Gfx_Backer_Secondary; // 0x3f8(0x08)
	struct UImage* HighlightLeader; // 0x400(0x08)
	struct UHorizontalBox* HorizontalBox_InviteToPact; // 0x408(0x08)
	struct UHorizontalBox* HorizontalBox_PlayerInfo; // 0x410(0x08)
	struct UImage* Offscreen_PactImage; // 0x418(0x08)
	struct UUI_TeamInfo_WBP_C* OffScreen_TeamInfo_WBP; // 0x420(0x08)
	struct UImage* OffscreenArrow; // 0x428(0x08)
	struct UImage* OnScreen_PactImage; // 0x430(0x08)
	struct UUI_TeamInfo_WBP_C* OnScreen_TeamInfo_WBP; // 0x438(0x08)
	struct UCanvasPanel* ParentCanvasPanel; // 0x440(0x08)
	struct UHorizontalBox* ProspectorLevelHBox; // 0x448(0x08)
	struct UYTextBlock* ProspectorTitleText; // 0x450(0x08)
	struct UHorizontalBox* SocialInfo; // 0x458(0x08)
	struct UTextBlock* Text_OffscreenNamePactMate; // 0x460(0x08)
	struct UTextBlock* Text_Player_VictoryPoints; // 0x468(0x08)
	struct UTextBlock* Text_PlayerName; // 0x470(0x08)
	struct UTextBlock* TextBlock_FarDistancePlayerName; // 0x478(0x08)
	struct UTextBlock* TextBlock_InvitePending; // 0x480(0x08)
	struct UTextBlock* TextBlock_Offscreen_DBNO; // 0x488(0x08)
	struct UUI_AnnouncementIndicator_WBP_C* UI_AnnouncementIndicator_WBP; // 0x490(0x08)
	struct UUI_PlayerHealthBar_WBP_C* UI_HealthBar_WBP; // 0x498(0x08)
	struct UUI_KeyShortcut_WBP_C* UI_KeyShortcut_WBP_TeamInvite; // 0x4a0(0x08)
	struct UWBP_InputKeyNavigation_Btn_C* WBP_InputKeyNavigation_Btn; // 0x4a8(0x08)
	struct UWBP_SquadTalking_C* WBP_SquadTalking; // 0x4b0(0x08)
	struct UYWidget_ProspectorLevel_Small_WBP_C* YWidget_ProspectorLevel_Small_WBP; // 0x4b8(0x08)
	int32_t OwnerVictoryPoints; // 0x4c0(0x04)
	int32_t LocalVictoryPoints; // 0x4c4(0x04)
	struct FLinearColor Color_Name_InPactWithLocalPlayer; // 0x4c8(0x10)
	struct FLinearColor Color_Name_LessVPThanLocalPlayer; // 0x4d8(0x10)
	struct FLinearColor Color_Name_MoreVPThanLocalPlayer; // 0x4e8(0x10)
	struct FLinearColor Color_Name_EqualVPThanLocalPlayer; // 0x4f8(0x10)
	bool IsSquadMode; // 0x508(0x01)
	char pad_509[0x7]; // 0x509(0x07)
	struct FTimerHandle UpdateDistanceTimerHandle; // 0x510(0x08)
	bool ShouldHighlightLeader; // 0x518(0x01)
	char pad_519[0x3]; // 0x519(0x03)
	struct FLinearColor Color_Name_HighlightPlayer; // 0x51c(0x10)
	char pad_52C[0x4]; // 0x52c(0x04)
	struct FTimerHandle UpdateSocialInteractionsTimerHandle; // 0x530(0x08)
	bool ShouldShowHealthBar; // 0x538(0x01)

	void SetProspectorLevelData(struct FString playerName); // Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.SetProspectorLevelData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_OnInviteStatusChanged(); // Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_OnInviteStatusChanged // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_OnIsOnScreenUpdated(); // Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_OnIsOnScreenUpdated // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_InitializeFor(); // Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_InitializeFor // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_OnAssociatedPlayerState(struct AYPlayerState* PlayerState); // Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_OnAssociatedPlayerState // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void OnPlayerStateAssigned(); // Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.OnPlayerStateAssigned // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void RefreshNameAndColor(); // Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.RefreshNameAndColor // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void RefreshInviteStatus(); // Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.RefreshInviteStatus // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetNameColor(struct FLinearColor Specified Color); // Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.SetNameColor // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnDBNOStatusChanged(bool isInDBNO); // Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_OnDBNOStatusChanged // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_OnRemoveWidget(); // Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_OnRemoveWidget // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_OnHighlightStateChanged(bool newState); // Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_OnHighlightStateChanged // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void OnTeamInfoInitialized(bool SUCCESS); // Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.OnTeamInfoInitialized // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OffScreenTeamInfoInitialized(bool SUCCESS); // Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.OffScreenTeamInfoInitialized // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_HandleDisplayedElements(); // Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_HandleDisplayedElements // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void SetHealthBarVis(enum class ESlateVisibility InVisibility); // Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.SetHealthBarVis // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void SetSocialVis(enum class ESlateVisibility InVisibility); // Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.SetSocialVis // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnUserInfoUpdated(); // Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_OnUserInfoUpdated // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void UpdateDistance(); // Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.UpdateDistance // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnInitialized(); // Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnInteractionDetected(struct FYPlayerInteraction interactionData, bool detected); // Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.OnInteractionDetected // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_PlayerCharacterPlate(int32_t EntryPoint); // Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.ExecuteUbergraph_WBP_PlayerCharacterPlate // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

