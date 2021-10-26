// WidgetBlueprintGeneratedClass WBP_Station_HUD.WBP_Station_HUD_C
// Size: 0x400 (Inherited: 0x340)
struct UWBP_Station_HUD_C : UYWidgetView_StationHUD {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UWidgetAnimation* ScreenIn_Anim; // 0x348(0x08)
	struct UImage* Gfx_Gradient; // 0x350(0x08)
	struct UVerticalBox* LeftInfoPanels; // 0x358(0x08)
	struct UCanvasPanel* MainCanvas; // 0x360(0x08)
	struct UCanvasPanel* MiniMap; // 0x368(0x08)
	struct UNotificationsManager_WBP_C* NotificationsManager_WBP; // 0x370(0x08)
	struct UUI_RadialStationMinimap_WBP_C* UI_RadialStationMinimap_WBP; // 0x378(0x08)
	struct UWBP_Rewards_Popup_C* UI_RewardsPopup_WBP; // 0x380(0x08)
	struct UWBP_Chat_C* WBP_Chat; // 0x388(0x08)
	struct UWBP_Contracts_Active_C* WBP_Contracts_Active; // 0x390(0x08)
	struct UWBP_Currency_Btn_C* WBP_Currency_Btn_Hard; // 0x398(0x08)
	struct UWBP_Currency_Btn_C* WBP_Currency_Btn_Soft; // 0x3a0(0x08)
	struct UWBP_FPS_Counter_HUD_Panel_C* WBP_FPS_Counter_HUD_Panel; // 0x3a8(0x08)
	struct UWBP_Friends_MiniWidget_C* WBP_Friends_MiniWidget; // 0x3b0(0x08)
	struct UWBP_InputKeyNavigation_C* WBP_InputKeyNavigation; // 0x3b8(0x08)
	struct UWBP_FTUE_NextStep_Widget_C* WBP_MissionMiniWidget; // 0x3c0(0x08)
	struct UWBP_Notification_Center_HUD_C* WBP_Notification_Center_HUD; // 0x3c8(0x08)
	struct UWBP_Notification_Panel_C* WBP_Notification_Panel; // 0x3d0(0x08)
	struct UWBP_PlayerQuartersLevel_C* WBP_PlayerQuartersLevel; // 0x3d8(0x08)
	struct UWBP_RadialSelection_Panel_C* WBP_RadialSelection_Panel; // 0x3e0(0x08)
	struct UWBP_SocialOverview_C* WBP_SocialOverview; // 0x3e8(0x08)
	struct UWBP_Subtitles_C* WBP_Subtitles; // 0x3f0(0x08)
	bool IsContractWidgetShown; // 0x3f8(0x01)
	bool ShouldShowContractWidget; // 0x3f9(0x01)
	bool IsContractWidgetManuallyOpened; // 0x3fa(0x01)
	char pad_3FB[0x1]; // 0x3fb(0x01)
	float ContractsPanelOnScreenDuration; // 0x3fc(0x04)

	void Manually Toggle Active Contracts in HUD(); // Function WBP_Station_HUD.WBP_Station_HUD_C.Manually Toggle Active Contracts in HUD // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggleHudVisibility(bool Visibility); // Function WBP_Station_HUD.WBP_Station_HUD_C.OnToggleHudVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnInitialized(); // Function WBP_Station_HUD.WBP_Station_HUD_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ToggleActiveContractsInHUD(); // Function WBP_Station_HUD.WBP_Station_HUD_C.ToggleActiveContractsInHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnActivateContract(struct FYActiveContractUIData activeContractUIData); // Function WBP_Station_HUD.WBP_Station_HUD_C.OnActivateContract // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetShown(); // Function WBP_Station_HUD.WBP_Station_HUD_C.BP_OnWidgetShown // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void OnSocialPressed(); // Function WBP_Station_HUD.WBP_Station_HUD_C.OnSocialPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetHidden(); // Function WBP_Station_HUD.WBP_Station_HUD_C.BP_OnWidgetHidden // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void CustomEvent_1(struct FYRuntimeInitializationContext Result); // Function WBP_Station_HUD.WBP_Station_HUD_C.CustomEvent_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Station_HUD(int32_t EntryPoint); // Function WBP_Station_HUD.WBP_Station_HUD_C.ExecuteUbergraph_WBP_Station_HUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

