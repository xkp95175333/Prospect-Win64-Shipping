// WidgetBlueprintGeneratedClass WBP_Objective_HUD_Item.WBP_Objective_HUD_Item_C
// Size: 0x299 (Inherited: 0x260)
struct UWBP_Objective_HUD_Item_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* Txt_Objective; // 0x268(0x08)
	struct UWBP_Checkbox_C* WBP_Checkbox; // 0x270(0x08)
	struct UWBP_DividerHorizontal_VarA_Panel_C* WBP_DividerHorizontal_VarA_Panel; // 0x278(0x08)
	struct FText ObjectiveText; // 0x280(0x18)
	bool ShowDivide; // 0x298(0x01)

	void PreConstruct(bool IsDesignTime); // Function WBP_Objective_HUD_Item.WBP_Objective_HUD_Item_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Objective_HUD_Item(int32_t EntryPoint); // Function WBP_Objective_HUD_Item.WBP_Objective_HUD_Item_C.ExecuteUbergraph_WBP_Objective_HUD_Item // (Final|UbergraphFunction) // @ game+0x1e02480
};

