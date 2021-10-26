// WidgetBlueprintGeneratedClass Map_WBP.Map_WBP_C
// Size: 0x492 (Inherited: 0x470)
struct UMap_WBP_C : UYWidget_Map {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	struct UWidgetAnimation* Maximize; // 0x478(0x08)
	struct UMapCursor_WBP_C* MapCursor_WBP; // 0x480(0x08)
	struct UImage* MapOverlay_2_Img; // 0x488(0x08)
	bool EnableSocialMarkers; // 0x490(0x01)
	bool DisableMinimapSpecificElems; // 0x491(0x01)

	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function Map_WBP.Map_WBP_C.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function Map_WBP.Map_WBP_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SaveTexture(); // Function Map_WBP.Map_WBP_C.SaveTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_SetZoom(float Scale); // Function Map_WBP.Map_WBP_C.BP_SetZoom // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_OnProjectionSizeChangeRequest(bool IsMaximized); // Function Map_WBP.Map_WBP_C.BP_OnProjectionSizeChangeRequest // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function Map_WBP.Map_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_Map_WBP(int32_t EntryPoint); // Function Map_WBP.Map_WBP_C.ExecuteUbergraph_Map_WBP // (Final|UbergraphFunction) // @ game+0x1e02480
};

