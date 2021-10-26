// WidgetBlueprintGeneratedClass MapMarker_AreaName_WBP.MapMarker_AreaName_WBP_C
// Size: 0x2f2 (Inherited: 0x2e0)
struct UMapMarker_AreaName_WBP_C : UYWidget_MapMarker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct URichTextBlock* Txt_TitleLabel; // 0x2e8(0x08)
	enum class EYMapMarkerType m_markerDataType; // 0x2f0(0x01)
	enum class EYMapMarkerState m_markerState; // 0x2f1(0x01)

	void ShowLabel(struct FText Text); // Function MapMarker_AreaName_WBP.MapMarker_AreaName_WBP_C.ShowLabel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnUpdateMarkerData(struct UYMapMarkerData* markerInfo); // Function MapMarker_AreaName_WBP.MapMarker_AreaName_WBP_C.BP_OnUpdateMarkerData // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_MapMarker_AreaName_WBP(int32_t EntryPoint); // Function MapMarker_AreaName_WBP.MapMarker_AreaName_WBP_C.ExecuteUbergraph_MapMarker_AreaName_WBP // (Final|UbergraphFunction) // @ game+0x1e02480
};

