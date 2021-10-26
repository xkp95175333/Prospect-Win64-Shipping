// WidgetBlueprintGeneratedClass MapMarker_Vehicle_WBP.MapMarker_Vehicle_WBP_C
// Size: 0x308 (Inherited: 0x2e0)
struct UMapMarker_Vehicle_WBP_C : UYWidget_MapMarker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UWidgetAnimation* Warning; // 0x2e8(0x08)
	struct UImage* m_iconImage; // 0x2f0(0x08)
	bool CanGetFinalUpdate; // 0x2f8(0x01)
	bool ApplyFinalUpdate; // 0x2f9(0x01)
	bool IsOwnedByLocalPlayer; // 0x2fa(0x01)
	bool IsOwnedByTeamMateOfLocalPlayer; // 0x2fb(0x01)
	bool WasPreviouslyOwnedByLocalPlayer; // 0x2fc(0x01)
	bool WasPreviouslyOwnedByTeamMateOfLocalPlayer; // 0x2fd(0x01)
	char pad_2FE[0x2]; // 0x2fe(0x02)
	struct APlayerState* LocalPlayerState; // 0x300(0x08)

	bool ShouldUpdate(struct UYResourceFarmingMapMarkerData* MarkerData); // Function MapMarker_Vehicle_WBP.MapMarker_Vehicle_WBP_C.ShouldUpdate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void BP_OnUpdateMarkerData(struct UYMapMarkerData* markerInfo); // Function MapMarker_Vehicle_WBP.MapMarker_Vehicle_WBP_C.BP_OnUpdateMarkerData // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_MapMarker_Vehicle_WBP(int32_t EntryPoint); // Function MapMarker_Vehicle_WBP.MapMarker_Vehicle_WBP_C.ExecuteUbergraph_MapMarker_Vehicle_WBP // (Final|UbergraphFunction) // @ game+0x1e02480
};

