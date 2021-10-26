// WidgetBlueprintGeneratedClass WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C
// Size: 0x6b0 (Inherited: 0x580)
struct UWBP_Inventory_SplitItem_Modal_C : UYWidget_ItemContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x580(0x08)
	struct UWidgetAnimation* ScreenIn_Anim; // 0x588(0x08)
	struct UImage* Gfx_Backer_2; // 0x590(0x08)
	struct UImage* Gfx_Deco_Corner_Bottom_Center; // 0x598(0x08)
	struct UImage* Gfx_Deco_Corner_Bottom_Center_2; // 0x5a0(0x08)
	struct UImage* Gfx_Grid_Helper; // 0x5a8(0x08)
	struct UImage* Gfx_ItemPreview; // 0x5b0(0x08)
	struct UWBP_Common_Btn_C* WBP_Common_Btn; // 0x5b8(0x08)
	struct UWBP_Common_Btn_C* WBP_Common_Btn_2; // 0x5c0(0x08)
	struct UWBP_Footer_C_Panel_C* WBP_Footer_C_Panel; // 0x5c8(0x08)
	struct UWBP_GenericContent_Panel_C* WBP_GenericContent_Panel; // 0x5d0(0x08)
	struct UWBP_Item_Preview_Btn_C* WBP_Item_Preview_Btn; // 0x5d8(0x08)
	struct UWBP_Selector_Btn_C* WBP_Selector_Btn; // 0x5e0(0x08)
	struct FYInventoryItem Item; // 0x5e8(0x98)
	enum class EYPlayerSetType TargetPlayerSetType; // 0x680(0x01)
	char pad_681[0x3]; // 0x681(0x03)
	int32_t OriginComponentId; // 0x684(0x04)
	int32_t TargetComponentId; // 0x688(0x04)
	bool ShouldDrop; // 0x68c(0x01)
	char pad_68D[0x3]; // 0x68d(0x03)
	struct FMulticastInlineDelegate OnExecuteItemSplitting; // 0x690(0x10)
	struct FDataTableRowHandle StationQuickMenu; // 0x6a0(0x10)

	bool BP_HandleBackKey(); // Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.BP_HandleBackKey // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetupSplitModalData(); // Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.SetupSplitModalData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteItemSplitting(); // Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.ExecuteItemSplitting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetStartingValue(); // Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.SetStartingValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetMaxAmount(); // Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.SetMaxAmount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetMinAmount(); // Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.SetMinAmount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetupItemContainer(); // Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.SetupItemContainer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Common_Btn_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.BndEvt__WBP_Common_Btn_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Common_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.BndEvt__WBP_Common_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetHidden(); // Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.BP_OnWidgetHidden // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void InventoryStateDeactivatedCallback(bool interupted); // Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.InventoryStateDeactivatedCallback // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSceneRemovedCallback(struct FDataTableRowHandle sceneRowHandle); // Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.OnSceneRemovedCallback // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnInventoryToggledCallback(bool isInventoryOpen); // Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.OnInventoryToggledCallback // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Inventory_SplitItem_Modal(int32_t EntryPoint); // Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.ExecuteUbergraph_WBP_Inventory_SplitItem_Modal // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void OnExecuteItemSplitting__DelegateSignature(); // Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.OnExecuteItemSplitting__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

