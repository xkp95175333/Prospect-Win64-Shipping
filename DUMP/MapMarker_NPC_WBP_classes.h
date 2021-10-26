// WidgetBlueprintGeneratedClass MapMarker_NPC_WBP.MapMarker_NPC_WBP_C
// Size: 0x311 (Inherited: 0x2e0)
struct UMapMarker_NPC_WBP_C : UYWidget_MapMarker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UWidgetAnimation* Warning; // 0x2e8(0x08)
	struct UUI_ImageBase_WBP_C* Image; // 0x2f0(0x08)
	struct UTextBlock* Title; // 0x2f8(0x08)
	bool CanGetFinalUpdate; // 0x300(0x01)
	bool ApplyFinalUpdate; // 0x301(0x01)
	bool IsOwnedByLocalPlayer; // 0x302(0x01)
	bool IsOwnedByTeamMateOfLocalPlayer; // 0x303(0x01)
	bool WasPreviouslyOwnedByLocalPlayer; // 0x304(0x01)
	bool WasPreviouslyOwnedByTeamMateOfLocalPlayer; // 0x305(0x01)
	char pad_306[0x2]; // 0x306(0x02)
	struct APlayerState* LocalPlayerState; // 0x308(0x08)
	bool AssignedIcon; // 0x310(0x01)

	bool ShouldUpdate(struct UYResourceFarmingMapMarkerData* MarkerData); // Function MapMarker_NPC_WBP.MapMarker_NPC_WBP_C.ShouldUpdate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void BP_OnUpdateMarkerData(struct UYMapMarkerData* markerInfo); // Function MapMarker_NPC_WBP.MapMarker_NPC_WBP_C.BP_OnUpdateMarkerData // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_MapMarker_NPC_WBP(int32_t EntryPoint); // Function MapMarker_NPC_WBP.MapMarker_NPC_WBP_C.ExecuteUbergraph_MapMarker_NPC_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

