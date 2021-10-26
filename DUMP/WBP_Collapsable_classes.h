// WidgetBlueprintGeneratedClass WBP_Collapsable.WBP_Collapsable_C
// Size: 0x2b0 (Inherited: 0x260)
struct UWBP_Collapsable_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* HighlightBracket_Anim; // 0x268(0x08)
	struct UWidgetAnimation* Collapse_Anim; // 0x270(0x08)
	struct USizeBox* ContentSizeOveride; // 0x278(0x08)
	struct UNamedSlot* ItemHolder; // 0x280(0x08)
	struct UTextBlock* Txt_Category; // 0x288(0x08)
	struct UWBP_Dummy_Btn_C* WBP_Dummy_Btn; // 0x290(0x08)
	struct FText HeadlineText; // 0x298(0x18)

	void SetHeadlineText(struct FText newText); // Function WBP_Collapsable.WBP_Collapsable_C.SetHeadlineText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_Collapsable.WBP_Collapsable_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Challenges_Category_Item_WBP_Dummy_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_Collapsable.WBP_Collapsable_C.BndEvt__WBP_Challenges_Category_Item_WBP_Dummy_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Challenges_Category_Item_WBP_Dummy_Btn_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature(); // Function WBP_Collapsable.WBP_Collapsable_C.BndEvt__WBP_Challenges_Category_Item_WBP_Dummy_Btn_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Challenges_Category_Item_WBP_Dummy_Btn_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature(); // Function WBP_Collapsable.WBP_Collapsable_C.BndEvt__WBP_Challenges_Category_Item_WBP_Dummy_Btn_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Collapsable(int32_t EntryPoint); // Function WBP_Collapsable.WBP_Collapsable_C.ExecuteUbergraph_WBP_Collapsable // (Final|UbergraphFunction) // @ game+0x1e02480
};

