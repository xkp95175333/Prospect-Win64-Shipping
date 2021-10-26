// WidgetBlueprintGeneratedClass MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C
// Size: 0x305 (Inherited: 0x2e0)
struct UMapMarker_StaticIcon_WBP_C : UYWidget_MapMarker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UWidgetAnimation* HighlightAnimation; // 0x2e8(0x08)
	struct UTextBlock* m_label; // 0x2f0(0x08)
	struct UImage* m_markerIcon; // 0x2f8(0x08)
	enum class EYMapMarkerType m_markerDataType; // 0x300(0x01)
	enum class EYMapMarkerState m_markerState; // 0x301(0x01)
	bool ShowQuestionMarkWhenUnknown; // 0x302(0x01)
	bool IsMaximized; // 0x303(0x01)
	enum class EYSeasonalEvent CurrentSeasonalEvent; // 0x304(0x01)

	void UpdateMarkerIconBasedOnType(enum class EYMapMarkerType Type); // Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.UpdateMarkerIconBasedOnType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ShowLabel(struct FText Text); // Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.ShowLabel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnUpdateMarkerData(struct UYMapMarkerData* markerInfo); // Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.BP_OnUpdateMarkerData // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void PlayHighlightAnimation(); // Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.PlayHighlightAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnMaximized(bool IsMaximized); // Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.BP_OnMaximized // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_MapMarker_StaticIcon_WBP(int32_t EntryPoint); // Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.ExecuteUbergraph_MapMarker_StaticIcon_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

