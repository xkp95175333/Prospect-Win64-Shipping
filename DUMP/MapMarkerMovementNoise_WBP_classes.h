// WidgetBlueprintGeneratedClass MapMarkerMovementNoise_WBP.MapMarkerMovementNoise_WBP_C
// Size: 0x2f1 (Inherited: 0x2e0)
struct UMapMarkerMovementNoise_WBP_C : UYWidget_MapMarker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UImage* m_markerIcon; // 0x2e8(0x08)
	enum class EYMapMarkerState cachedState; // 0x2f0(0x01)

	void BP_OnUpdateMarkerData(struct UYMapMarkerData* markerInfo); // Function MapMarkerMovementNoise_WBP.MapMarkerMovementNoise_WBP_C.BP_OnUpdateMarkerData // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_MapMarkerMovementNoise_WBP(int32_t EntryPoint); // Function MapMarkerMovementNoise_WBP.MapMarkerMovementNoise_WBP_C.ExecuteUbergraph_MapMarkerMovementNoise_WBP // (Final|UbergraphFunction) // @ game+0x1e02480
};

