// WidgetBlueprintGeneratedClass WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C
// Size: 0x2e0 (Inherited: 0x2c8)
struct UWBP_TabElementBase_TabElem_C : UYWidget_TabElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x2d0(0x10)

	void Construct(); // Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Unhovered(); // Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.Unhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Clicked(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.Clicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Hovered(); // Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSelected(); // Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.OnSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDeselected(); // Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.OnDeselected // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Base_Clicked(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.Base_Clicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Base_Unhovered(); // Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.Base_Unhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Base_Hovered(); // Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.Base_Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_TabElementBase_TabElem(int32_t EntryPoint); // Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.ExecuteUbergraph_WBP_TabElementBase_TabElem // (Final|UbergraphFunction) // @ game+0x1e02480
	void OnClicked__DelegateSignature(struct UWBP_TabElementBase_TabElem_C* TabElement); // Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

