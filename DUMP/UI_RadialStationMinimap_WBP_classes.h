// WidgetBlueprintGeneratedClass UI_RadialStationMinimap_WBP.UI_RadialStationMinimap_WBP_C
// Size: 0x2f0 (Inherited: 0x2c0)
struct UUI_RadialStationMinimap_WBP_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UImage* image_PlayerAngleCone; // 0x2c8(0x08)
	struct UMap_WBP_C* Map_WBP; // 0x2d0(0x08)
	struct URetainerBox* RetainerBox_Radial; // 0x2d8(0x08)
	struct UMaterialInstanceDynamic* AngleCone_MID; // 0x2e0(0x08)
	struct UYUserSettings* userSettings; // 0x2e8(0x08)

	void OnTargetingStarted(); // Function UI_RadialStationMinimap_WBP.UI_RadialStationMinimap_WBP_C.OnTargetingStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnTargetingStopped(bool interupted); // Function UI_RadialStationMinimap_WBP.UI_RadialStationMinimap_WBP_C.OnTargetingStopped // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_RadialStationMinimap_WBP.UI_RadialStationMinimap_WBP_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function UI_RadialStationMinimap_WBP.UI_RadialStationMinimap_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void TryInitializeTargeting(struct APawn* oldPawn, struct APawn* newPawn); // Function UI_RadialStationMinimap_WBP.UI_RadialStationMinimap_WBP_C.TryInitializeTargeting // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void CacheConeMaterial(); // Function UI_RadialStationMinimap_WBP.UI_RadialStationMinimap_WBP_C.CacheConeMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_UI_RadialStationMinimap_WBP(int32_t EntryPoint); // Function UI_RadialStationMinimap_WBP.UI_RadialStationMinimap_WBP_C.ExecuteUbergraph_UI_RadialStationMinimap_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

