// WidgetBlueprintGeneratedClass MapMarker_DeliveryStation_WBP.MapMarker_DeliveryStation_WBP_C
// Size: 0x2f9 (Inherited: 0x2e0)
struct UMapMarker_DeliveryStation_WBP_C : UYWidget_MapMarker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UWidgetAnimation* Warning; // 0x2e8(0x08)
	struct UImage* m_iconImage; // 0x2f0(0x08)
	enum class EYMapMarkerState IconState; // 0x2f8(0x01)

	void BP_OnUpdateMarkerData(struct UYMapMarkerData* markerInfo); // Function MapMarker_DeliveryStation_WBP.MapMarker_DeliveryStation_WBP_C.BP_OnUpdateMarkerData // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_MapMarker_DeliveryStation_WBP(int32_t EntryPoint); // Function MapMarker_DeliveryStation_WBP.MapMarker_DeliveryStation_WBP_C.ExecuteUbergraph_MapMarker_DeliveryStation_WBP // (Final|UbergraphFunction) // @ game+0x1e02480
};

