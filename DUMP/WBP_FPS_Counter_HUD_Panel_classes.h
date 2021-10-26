// WidgetBlueprintGeneratedClass WBP_FPS_Counter_HUD_Panel.WBP_FPS_Counter_HUD_Panel_C
// Size: 0x2e0 (Inherited: 0x2d0)
struct UWBP_FPS_Counter_HUD_Panel_C : UYWidget_FpsCounter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UTextBlock* fpsTextBlock; // 0x2d8(0x08)

	void BP_OnFpsDataUpdated(struct FYFpsData fpsData); // Function WBP_FPS_Counter_HUD_Panel.WBP_FPS_Counter_HUD_Panel_C.BP_OnFpsDataUpdated // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_FPS_Counter_HUD_Panel(int32_t EntryPoint); // Function WBP_FPS_Counter_HUD_Panel.WBP_FPS_Counter_HUD_Panel_C.ExecuteUbergraph_WBP_FPS_Counter_HUD_Panel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

