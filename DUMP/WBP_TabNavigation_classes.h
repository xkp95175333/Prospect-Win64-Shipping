// WidgetBlueprintGeneratedClass WBP_TabNavigation.WBP_TabNavigation_C
// Size: 0x329 (Inherited: 0x2f0)
struct UWBP_TabNavigation_C : UWBP_TabNavigationBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UWidgetAnimation* WidgetIn_Anim; // 0x2f8(0x08)
	struct UHorizontalBox* TabHolder_hBox; // 0x300(0x08)
	struct UWBP_InputKey_C* WBP_InputKey_TabL; // 0x308(0x08)
	struct UWBP_InputKey_C* WBP_InputKey_TabR; // 0x310(0x08)
	struct TArray<struct FStucture_TabData> Tabs; // 0x318(0x10)
	bool IsInitialized; // 0x328(0x01)

	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_TabNavigation.WBP_TabNavigation_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ClearTabs(); // Function WBP_TabNavigation.WBP_TabNavigation_C.ClearTabs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void CreateTab(struct FStucture_TabData Content, int32_t Index, struct UWBP_Tab_Btn_C* Tab Button); // Function WBP_TabNavigation.WBP_TabNavigation_C.CreateTab // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnInitialized(); // Function WBP_TabNavigation.WBP_TabNavigation_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Destruct(); // Function WBP_TabNavigation.WBP_TabNavigation_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnTabPrevious(); // Function WBP_TabNavigation.WBP_TabNavigation_C.OnTabPrevious // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnTabNext(); // Function WBP_TabNavigation.WBP_TabNavigation_C.OnTabNext // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetShown(); // Function WBP_TabNavigation.WBP_TabNavigation_C.BP_OnWidgetShown // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void SetPendingVisibility(enum class ESlateVisibility newPendingVisibility, bool atConstruct); // Function WBP_TabNavigation.WBP_TabNavigation_C.SetPendingVisibility // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void RefreshInput(); // Function WBP_TabNavigation.WBP_TabNavigation_C.RefreshInput // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetHidden(); // Function WBP_TabNavigation.WBP_TabNavigation_C.BP_OnWidgetHidden // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_TabNavigation.WBP_TabNavigation_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_TabNavigation.WBP_TabNavigation_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Refresh(); // Function WBP_TabNavigation.WBP_TabNavigation_C.Refresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_TabNavigation(int32_t EntryPoint); // Function WBP_TabNavigation.WBP_TabNavigation_C.ExecuteUbergraph_WBP_TabNavigation // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

