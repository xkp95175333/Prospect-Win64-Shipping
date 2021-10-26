// WidgetBlueprintGeneratedClass MapMarker_Sabotage_WBP.MapMarker_Sabotage_WBP_C
// Size: 0x300 (Inherited: 0x2e0)
struct UMapMarker_Sabotage_WBP_C : UYWidget_MapMarker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UWidgetAnimation* Warning; // 0x2e8(0x08)
	struct UImage* IconImage; // 0x2f0(0x08)
	struct UTextBlock* MarkerText; // 0x2f8(0x08)

	void BP_OnUpdateMarkerData(struct UYMapMarkerData* markerInfo); // Function MapMarker_Sabotage_WBP.MapMarker_Sabotage_WBP_C.BP_OnUpdateMarkerData // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_OnTimeUpdated(float DeltaTime); // Function MapMarker_Sabotage_WBP.MapMarker_Sabotage_WBP_C.BP_OnTimeUpdated // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_OnMaximized(bool IsMaximized); // Function MapMarker_Sabotage_WBP.MapMarker_Sabotage_WBP_C.BP_OnMaximized // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_MapMarker_Sabotage_WBP(int32_t EntryPoint); // Function MapMarker_Sabotage_WBP.MapMarker_Sabotage_WBP_C.ExecuteUbergraph_MapMarker_Sabotage_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

