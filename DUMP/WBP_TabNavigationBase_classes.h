// WidgetBlueprintGeneratedClass WBP_TabNavigationBase.WBP_TabNavigationBase_C
// Size: 0x2f0 (Inherited: 0x2c8)
struct UWBP_TabNavigationBase_C : UYWidget_Composite {
	struct TArray<struct UWBP_TabElementBase_TabElem_C*> TabElements; // 0x2c8(0x10)
	struct UWBP_TabElementBase_TabElem_C* LastTabElemClicked; // 0x2d8(0x08)
	struct FMulticastInlineDelegate OnTabChanged; // 0x2e0(0x10)

	void Select Tab(int32_t Index); // Function WBP_TabNavigationBase.WBP_TabNavigationBase_C.Select Tab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnTabSelected(struct UWBP_TabElementBase_TabElem_C* TabElement); // Function WBP_TabNavigationBase.WBP_TabNavigationBase_C.OnTabSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ClearTabs(); // Function WBP_TabNavigationBase.WBP_TabNavigationBase_C.ClearTabs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void AddTab(struct UWBP_TabElementBase_TabElem_C* TabElement); // Function WBP_TabNavigationBase.WBP_TabNavigationBase_C.AddTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnTabChanged__DelegateSignature(int32_t Index, struct UWBP_TabElementBase_TabElem_C* TabElement); // Function WBP_TabNavigationBase.WBP_TabNavigationBase_C.OnTabChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

