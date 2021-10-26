// WidgetBlueprintGeneratedClass MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C
// Size: 0x3b4 (Inherited: 0x2e0)
struct UMapMarkerPlayer_WBP_C : UYWidget_MapMarker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UWidgetAnimation* Anim_Ping; // 0x2e8(0x08)
	struct UCanvasPanel* CanvasPanel_Base; // 0x2f0(0x08)
	struct UImage* Gfx_Pulse; // 0x2f8(0x08)
	struct UImage* m_markerIcon; // 0x300(0x08)
	struct UOverlay* OverlayArrow; // 0x308(0x08)
	struct UImage* Ping; // 0x310(0x08)
	struct UUI_TeamInfo_WBP_C* UI_TeamInfo_WBP; // 0x318(0x08)
	struct FSlateColor OwnPlayerColor; // 0x320(0x28)
	struct FSlateColor FriendlyPlayerColor; // 0x348(0x28)
	bool isLocalPlayer; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct UYPlayerMapMarkerData* PlayerMapMarkerData; // 0x378(0x08)
	struct AYPlayerState* AsoociatedYPlayerState; // 0x380(0x08)
	struct FSlateColor EnemyPlayerColor; // 0x388(0x28)
	float PlayPingAnimationTriggerTime; // 0x3b0(0x04)

	void DetermineIsLocalPlayer(bool Result); // Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.DetermineIsLocalPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ApplyMarkerTint(struct FSlateColor TintColor); // Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.ApplyMarkerTint // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnMaximized(bool IsMaximized); // Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.BP_OnMaximized // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void RenderAsLocalPlayer(); // Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.RenderAsLocalPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void RenderTeamMate(); // Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.RenderTeamMate // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void RenderOtherPlayer(); // Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.RenderOtherPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnUpdateMarkerData(struct UYMapMarkerData* markerInfo); // Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.BP_OnUpdateMarkerData // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ShowArrowMarker(); // Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.ShowArrowMarker // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void HideArrowMarker(); // Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.HideArrowMarker // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetupMarkerBrushAsRegularPlayerMarker(); // Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.SetupMarkerBrushAsRegularPlayerMarker // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnMapMarker(); // Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.OnMapMarker // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_MapMarkerPlayer_WBP(int32_t EntryPoint); // Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.ExecuteUbergraph_MapMarkerPlayer_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

