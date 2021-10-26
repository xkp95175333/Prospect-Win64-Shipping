// WidgetBlueprintGeneratedClass YWidget_ProspectorLevel_Small_WBP.YWidget_ProspectorLevel_Small_WBP_C
// Size: 0x278 (Inherited: 0x260)
struct UYWidget_ProspectorLevel_Small_WBP_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* Border_1; // 0x268(0x08)
	struct UYTextBlock* prospectorLevelText; // 0x270(0x08)

	void SetProspectorLevel(int32_t prospectorLevel); // Function YWidget_ProspectorLevel_Small_WBP.YWidget_ProspectorLevel_Small_WBP_C.SetProspectorLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnLoaded_C2F19292426D5F0D4FA8C59DAF9E90D8(struct UObject* Loaded); // Function YWidget_ProspectorLevel_Small_WBP.YWidget_ProspectorLevel_Small_WBP_C.OnLoaded_C2F19292426D5F0D4FA8C59DAF9E90D8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function YWidget_ProspectorLevel_Small_WBP.YWidget_ProspectorLevel_Small_WBP_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void LoadIcon(int32_t Level); // Function YWidget_ProspectorLevel_Small_WBP.YWidget_ProspectorLevel_Small_WBP_C.LoadIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_YWidget_ProspectorLevel_Small_WBP(int32_t EntryPoint); // Function YWidget_ProspectorLevel_Small_WBP.YWidget_ProspectorLevel_Small_WBP_C.ExecuteUbergraph_YWidget_ProspectorLevel_Small_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

