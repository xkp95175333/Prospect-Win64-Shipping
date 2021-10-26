// WidgetBlueprintGeneratedClass WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C
// Size: 0x430 (Inherited: 0x338)
struct UWBP_FTUE_NextStep_Widget_C : UYWidgetView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UWidgetAnimation* Success_Anim; // 0x340(0x08)
	struct UWidgetAnimation* WidgetIn_Anim; // 0x348(0x08)
	struct UOverlay* contracts; // 0x350(0x08)
	struct UImage* Gfx_ArrowSmall; // 0x358(0x08)
	struct UImage* Gfx_Background_Color; // 0x360(0x08)
	struct UImage* Gfx_Background_Gradient; // 0x368(0x08)
	struct UImage* Gfx_Background_HeaderColor; // 0x370(0x08)
	struct UImage* Gfx_Chevrons; // 0x378(0x08)
	struct UImage* Gfx_Complete_2; // 0x380(0x08)
	struct UImage* Gfx_Flash; // 0x388(0x08)
	struct UImage* Gfx_Flash_2; // 0x390(0x08)
	struct UImage* Gfx_Flash_3; // 0x398(0x08)
	struct UImage* Gfx_SlantMain; // 0x3a0(0x08)
	struct UImage* Gfx_SlantSecondary; // 0x3a8(0x08)
	struct UImage* Gfx_SuccessHighlight; // 0x3b0(0x08)
	struct URichTextBlock* RichTxt_Info; // 0x3b8(0x08)
	struct USizeBox* RightSide; // 0x3c0(0x08)
	struct UTextBlock* Txt_Headline; // 0x3c8(0x08)
	struct UWBP_Checkbox_C* WBP_Checkbox; // 0x3d0(0x08)
	struct UWBP_Footer_B_Panel_C* WBP_Footer_B_Panel; // 0x3d8(0x08)
	struct UWBP_Objective_HUD_Item_C* WBP_Objective_HUD_Item_A; // 0x3e0(0x08)
	struct UWBP_Objective_HUD_Item_C* WBP_Objective_HUD_Item_B; // 0x3e8(0x08)
	struct UWBP_Objective_HUD_Item_C* WBP_Objective_HUD_Item_C; // 0x3f0(0x08)
	struct UYTextBlock* YTxt_Info_3; // 0x3f8(0x08)
	struct UYWidgetProvider_Missions* MissionProvider; // 0x400(0x08)
	bool IsCompleteAnimPlaying; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	float ReappearanceDelay; // 0x40c(0x04)
	float StepCompleteDelay; // 0x410(0x04)
	char pad_414[0x4]; // 0x414(0x04)
	struct FDataTableRowHandle StepCompletedSound; // 0x418(0x10)
	struct FTimerHandle VisibilityHandle; // 0x428(0x08)

	void SequenceEvent__ENTRYPOINTWBP_FTUE_NextStep_Widget_1(struct UWBP_Footer_B_Panel_C* WBP_Footer_B_Panel); // Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.SequenceEvent__ENTRYPOINTWBP_FTUE_NextStep_Widget_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateVisibility(enum class ESlateVisibility Visibility); // Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateStep(); // Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.UpdateStep // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void WBP_Footer_B_Panel_Event_1(struct UWBP_Footer_B_Panel_C* WBP_Footer_B_Panel); // Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.WBP_Footer_B_Panel_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnInitialized(); // Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnAnimFinished(); // Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.OnAnimFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetHidden(); // Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.BP_OnWidgetHidden // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_OnProviderDataChanged(struct FName DataName, struct FName dataType); // Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.BP_OnProviderDataChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void OnCompleteInitialization(struct FYRuntimeInitializationContext Result); // Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.OnCompleteInitialization // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void HideWidget(); // Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.HideWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_FTUE_NextStep_Widget(int32_t EntryPoint); // Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.ExecuteUbergraph_WBP_FTUE_NextStep_Widget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

