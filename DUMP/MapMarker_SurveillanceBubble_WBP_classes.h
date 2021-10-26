// WidgetBlueprintGeneratedClass MapMarker_SurveillanceBubble_WBP.MapMarker_SurveillanceBubble_WBP_C
// Size: 0x328 (Inherited: 0x2f8)
struct UMapMarker_SurveillanceBubble_WBP_C : UYWidget_AreaMapMarker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	struct UImage* m_offscreenArrow; // 0x300(0x08)
	struct UCanvasPanel* WidgetContainer; // 0x308(0x08)
	float areaWidgetScale; // 0x310(0x04)
	struct FVector2D MapWorldBounds; // 0x314(0x08)
	struct FVector2D MapPixelSize; // 0x31c(0x08)
	float SurveillanceRadius; // 0x324(0x04)

	void BP_OnUpdateMarkerData(struct UYMapMarkerData* markerInfo); // Function MapMarker_SurveillanceBubble_WBP.MapMarker_SurveillanceBubble_WBP_C.BP_OnUpdateMarkerData // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_ApplyScale(float zoomLevel); // Function MapMarker_SurveillanceBubble_WBP.MapMarker_SurveillanceBubble_WBP_C.BP_ApplyScale // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_MapDimentions(struct FVector2D worldCapturedBounds, struct FVector2D pixelSize); // Function MapMarker_SurveillanceBubble_WBP.MapMarker_SurveillanceBubble_WBP_C.BP_MapDimentions // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_MapMarker_SurveillanceBubble_WBP(int32_t EntryPoint); // Function MapMarker_SurveillanceBubble_WBP.MapMarker_SurveillanceBubble_WBP_C.ExecuteUbergraph_MapMarker_SurveillanceBubble_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

