// WidgetBlueprintGeneratedClass ItemComponent_Clickable_WBP.ItemComponent_Clickable_WBP_C
// Size: 0x808 (Inherited: 0x310)
struct UItemComponent_Clickable_WBP_C : UYWidget_ItemComponentClickable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct FButtonStyle NormalButtonStyle; // 0x318(0x278)
	struct FButtonStyle HoveredButtonStyle; // 0x590(0x278)

	void BP_SetIsSelected(bool IsSelected); // Function ItemComponent_Clickable_WBP.ItemComponent_Clickable_WBP_C.BP_SetIsSelected // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function ItemComponent_Clickable_WBP.ItemComponent_Clickable_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_ItemHoveredChanged(bool Hovered); // Function ItemComponent_Clickable_WBP.ItemComponent_Clickable_WBP_C.BP_ItemHoveredChanged // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_ItemPressed(); // Function ItemComponent_Clickable_WBP.ItemComponent_Clickable_WBP_C.BP_ItemPressed // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_ItemReleased(); // Function ItemComponent_Clickable_WBP.ItemComponent_Clickable_WBP_C.BP_ItemReleased // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_ItemComponent_Clickable_WBP(int32_t EntryPoint); // Function ItemComponent_Clickable_WBP.ItemComponent_Clickable_WBP_C.ExecuteUbergraph_ItemComponent_Clickable_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

