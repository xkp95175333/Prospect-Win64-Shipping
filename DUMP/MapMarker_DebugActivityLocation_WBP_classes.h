// WidgetBlueprintGeneratedClass MapMarker_DebugActivityLocation_WBP.MapMarker_DebugActivityLocation_WBP_C
// Size: 0x324 (Inherited: 0x2e0)
struct UMapMarker_DebugActivityLocation_WBP_C : UYWidget_MapMarker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UWidgetAnimation* Warning; // 0x2e8(0x08)
	struct UCanvasPanel* CanvasPanel_Root; // 0x2f0(0x08)
	struct UImage* Image_Circle; // 0x2f8(0x08)
	struct UImage* Image_Icon; // 0x300(0x08)
	struct UTextBlock* TextBlock_DebugDescription; // 0x308(0x08)
	struct AYActivityLocation* ActivityLocationOwner; // 0x310(0x08)
	struct UYDebugActivityLocationMapMarkerData_BP_C* DebugLocationData; // 0x318(0x08)
	float LinkRadiusUUToUISize; // 0x320(0x04)

	void DetermineDescription(struct FString String); // Function MapMarker_DebugActivityLocation_WBP.MapMarker_DebugActivityLocation_WBP_C.DetermineDescription // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnLoaded_B3B98F444EC944B14EDF53A5B786652A(struct UObject* Loaded); // Function MapMarker_DebugActivityLocation_WBP.MapMarker_DebugActivityLocation_WBP_C.OnLoaded_B3B98F444EC944B14EDF53A5B786652A // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Refresh(); // Function MapMarker_DebugActivityLocation_WBP.MapMarker_DebugActivityLocation_WBP_C.Refresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetupTexture(); // Function MapMarker_DebugActivityLocation_WBP.MapMarker_DebugActivityLocation_WBP_C.SetupTexture // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function MapMarker_DebugActivityLocation_WBP.MapMarker_DebugActivityLocation_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_OnUpdateMarkerData(struct UYMapMarkerData* markerInfo); // Function MapMarker_DebugActivityLocation_WBP.MapMarker_DebugActivityLocation_WBP_C.BP_OnUpdateMarkerData // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_MapMarker_DebugActivityLocation_WBP(int32_t EntryPoint); // Function MapMarker_DebugActivityLocation_WBP.MapMarker_DebugActivityLocation_WBP_C.ExecuteUbergraph_MapMarker_DebugActivityLocation_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

