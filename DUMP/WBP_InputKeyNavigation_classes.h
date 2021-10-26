// WidgetBlueprintGeneratedClass WBP_InputKeyNavigation.WBP_InputKeyNavigation_C
// Size: 0x2b1 (Inherited: 0x280)
struct UWBP_InputKeyNavigation_C : UWBP_InputKeyNavigationBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UImage* Gfx_Backer; // 0x288(0x08)
	struct UHorizontalBox* m_NavigationKeyHolder_HorizontalBox; // 0x290(0x08)
	struct UWBP_InputKeyNavigation_Btn_C* WBP_InputKeyNavigationItem; // 0x298(0x08)
	struct TArray<struct FStructure_InputKeyNav> Nav Items; // 0x2a0(0x10)
	bool ShowBacker; // 0x2b0(0x01)

	void ClearInputKeys(); // Function WBP_InputKeyNavigation.WBP_InputKeyNavigation_C.ClearInputKeys // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetWidgetForInputRow(struct FDataTableRowHandle row, struct UWBP_InputKeyNavigation_Btn_C* Widget); // Function WBP_InputKeyNavigation.WBP_InputKeyNavigation_C.GetWidgetForInputRow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void CreateNavKeys(struct FStructure_InputKeyNav NavItemSetup); // Function WBP_InputKeyNavigation.WBP_InputKeyNavigation_C.CreateNavKeys // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_InputKeyNavigation.WBP_InputKeyNavigation_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_InputKeyNavigation.WBP_InputKeyNavigation_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void AddNavItem(struct FStructure_InputKeyNav newItem, bool ClearDefaultNavItems); // Function WBP_InputKeyNavigation.WBP_InputKeyNavigation_C.AddNavItem // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Refresh(); // Function WBP_InputKeyNavigation.WBP_InputKeyNavigation_C.Refresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_InputKeyNavigation(int32_t EntryPoint); // Function WBP_InputKeyNavigation.WBP_InputKeyNavigation_C.ExecuteUbergraph_WBP_InputKeyNavigation // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

