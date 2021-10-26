// WidgetBlueprintGeneratedClass ItemComponent_Highlight_Stash_WBP.ItemComponent_Highlight_Stash_WBP_C
// Size: 0x318 (Inherited: 0x300)
struct UItemComponent_Highlight_Stash_WBP_C : UYWidget_ItemComponentImageBackground {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UWidgetAnimation* Anim_Highlight; // 0x308(0x08)
	struct UImage* BackgroundImage; // 0x310(0x08)

	void IsProspectorToolOrGadget(bool IsToolOrGadget); // Function ItemComponent_Highlight_Stash_WBP.ItemComponent_Highlight_Stash_WBP_C.IsProspectorToolOrGadget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	bool TryHighlightTypeDueToOnboarding(); // Function ItemComponent_Highlight_Stash_WBP.ItemComponent_Highlight_Stash_WBP_C.TryHighlightTypeDueToOnboarding // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function ItemComponent_Highlight_Stash_WBP.ItemComponent_Highlight_Stash_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ShouldShowHighlight(bool ShouldShowHighlight); // Function ItemComponent_Highlight_Stash_WBP.ItemComponent_Highlight_Stash_WBP_C.ShouldShowHighlight // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnMissionStepStarted(struct FYMissionRuntimeData uiMissionLineStepInfo); // Function ItemComponent_Highlight_Stash_WBP.ItemComponent_Highlight_Stash_WBP_C.OnMissionStepStarted // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnItemSet(); // Function ItemComponent_Highlight_Stash_WBP.ItemComponent_Highlight_Stash_WBP_C.OnItemSet // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_ItemComponent_Highlight_Stash_WBP(int32_t EntryPoint); // Function ItemComponent_Highlight_Stash_WBP.ItemComponent_Highlight_Stash_WBP_C.ExecuteUbergraph_ItemComponent_Highlight_Stash_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

