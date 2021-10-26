// WidgetBlueprintGeneratedClass MapMarker_NoiseSource_WBP.MapMarker_NoiseSource_WBP_C
// Size: 0x300 (Inherited: 0x2e0)
struct UMapMarker_NoiseSource_WBP_C : UYWidget_MapMarker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UImage* m_noiseIcon; // 0x2e8(0x08)
	struct UImage* m_offscreenArrow; // 0x2f0(0x08)
	enum class EYMapMarkerState m_markerState; // 0x2f8(0x01)
	char pad_2F9[0x3]; // 0x2f9(0x03)
	float m_timeLeft; // 0x2fc(0x04)

	void BP_OnUpdateMarkerData(struct UYMapMarkerData* markerInfo); // Function MapMarker_NoiseSource_WBP.MapMarker_NoiseSource_WBP_C.BP_OnUpdateMarkerData // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function MapMarker_NoiseSource_WBP.MapMarker_NoiseSource_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_MapMarker_NoiseSource_WBP(int32_t EntryPoint); // Function MapMarker_NoiseSource_WBP.MapMarker_NoiseSource_WBP_C.ExecuteUbergraph_MapMarker_NoiseSource_WBP // (Final|UbergraphFunction) // @ game+0x1e02480
};

