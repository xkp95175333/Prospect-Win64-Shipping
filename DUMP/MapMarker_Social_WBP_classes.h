// WidgetBlueprintGeneratedClass MapMarker_Social_WBP.MapMarker_Social_WBP_C
// Size: 0x322 (Inherited: 0x2e8)
struct UMapMarker_Social_WBP_C : UYWidget_SocialMapMarker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* DropPin; // 0x2f0(0x08)
	struct UImage* AcknowledgeWidgetImage; // 0x2f8(0x08)
	struct UImage* CloseWidgetImage; // 0x300(0x08)
	struct UImage* m_iconImage; // 0x308(0x08)
	struct UEditableText* m_markerLabel; // 0x310(0x08)
	struct UTextBlock* Name; // 0x318(0x08)
	bool CalculatedMarkerColor; // 0x320(0x01)
	bool IsLocalPawn; // 0x321(0x01)

	void IsOwnedByLocalPlayer(bool Result); // Function MapMarker_Social_WBP.MapMarker_Social_WBP_C.IsOwnedByLocalPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function MapMarker_Social_WBP.MapMarker_Social_WBP_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnUpdateMarkerData(struct UYMapMarkerData* markerInfo); // Function MapMarker_Social_WBP.MapMarker_Social_WBP_C.BP_OnUpdateMarkerData // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function MapMarker_Social_WBP.MapMarker_Social_WBP_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function MapMarker_Social_WBP.MapMarker_Social_WBP_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function MapMarker_Social_WBP.MapMarker_Social_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void UpdateHoverIndicator(); // Function MapMarker_Social_WBP.MapMarker_Social_WBP_C.UpdateHoverIndicator // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnAcknowledgedPlayerStatesChanged_Event_1(struct AYSocialActor* Actor); // Function MapMarker_Social_WBP.MapMarker_Social_WBP_C.BP_OnAcknowledgedPlayerStatesChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_MapMarker_Social_WBP(int32_t EntryPoint); // Function MapMarker_Social_WBP.MapMarker_Social_WBP_C.ExecuteUbergraph_MapMarker_Social_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

