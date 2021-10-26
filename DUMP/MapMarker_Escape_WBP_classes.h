// WidgetBlueprintGeneratedClass MapMarker_Escape_WBP.MapMarker_Escape_WBP_C
// Size: 0x328 (Inherited: 0x2e0)
struct UMapMarker_Escape_WBP_C : UYWidget_MapMarker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UWidgetAnimation* EvacDisabled_Anim; // 0x2e8(0x08)
	struct UWidgetAnimation* Warning_Anim; // 0x2f0(0x08)
	struct UYTextBlock* CountdownText; // 0x2f8(0x08)
	struct UImage* m_iconImage; // 0x300(0x08)
	struct UTextBlock* Txt_StormWarning; // 0x308(0x08)
	enum class EYMapMarkerState IconState; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct UBP_EscapeMarkerData_C* MarkerDataEscape; // 0x318(0x08)
	struct FName MatchPhase; // 0x320(0x08)

	void BP_OnUpdateMarkerData(struct UYMapMarkerData* markerInfo); // Function MapMarker_Escape_WBP.MapMarker_Escape_WBP_C.BP_OnUpdateMarkerData // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_MapMarker_Escape_WBP(int32_t EntryPoint); // Function MapMarker_Escape_WBP.MapMarker_Escape_WBP_C.ExecuteUbergraph_MapMarker_Escape_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

