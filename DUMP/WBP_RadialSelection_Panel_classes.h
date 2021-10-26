// WidgetBlueprintGeneratedClass WBP_RadialSelection_Panel.WBP_RadialSelection_Panel_C
// Size: 0x3f1 (Inherited: 0x330)
struct UWBP_RadialSelection_Panel_C : UYWidget_CommWheel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidgetAnimation* WidgetIn_Anim; // 0x338(0x08)
	struct UImage* Gfx_Backer_DarkMain_2; // 0x340(0x08)
	struct UImage* Gfx_Backer_Light; // 0x348(0x08)
	struct UImage* Gfx_Backer_Light_2; // 0x350(0x08)
	struct UImage* Gfx_Backer_Light_3; // 0x358(0x08)
	struct UImage* Gfx_Friend; // 0x360(0x08)
	struct UImage* Gfx_HeaderBacker; // 0x368(0x08)
	struct UImage* Gfx_HeaderSecondaryBacker; // 0x370(0x08)
	struct UImage* Gfx_Ring_DarkGlow_2; // 0x378(0x08)
	struct UImage* Gfx_Ring_DarkGlow_3; // 0x380(0x08)
	struct UImage* Gfx_Squadmate; // 0x388(0x08)
	struct UOverlay* HeaderContainer; // 0x390(0x08)
	struct UImage* Image; // 0x398(0x08)
	struct UImage* Image_2; // 0x3a0(0x08)
	struct UImage* Image_3; // 0x3a8(0x08)
	struct UImage* Image_4; // 0x3b0(0x08)
	struct UImage* Image_5; // 0x3b8(0x08)
	struct UImage* Image_6; // 0x3c0(0x08)
	struct UImage* Image_7; // 0x3c8(0x08)
	struct UImage* Image_370; // 0x3d0(0x08)
	struct USizeBox* SizeBox_Friend; // 0x3d8(0x08)
	struct USizeBox* SizeBox_Squadmate; // 0x3e0(0x08)
	struct UTextBlock* Txt_Title; // 0x3e8(0x08)
	bool IsSocialWheel; // 0x3f0(0x01)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_RadialSelection_Panel.WBP_RadialSelection_Panel_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_RadialSelection_Panel.WBP_RadialSelection_Panel_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_SetWheelTitle(enum class EYWheelType wheelType); // Function WBP_RadialSelection_Panel.WBP_RadialSelection_Panel_C.BP_SetWheelTitle // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void OnInteract(); // Function WBP_RadialSelection_Panel.WBP_RadialSelection_Panel_C.OnInteract // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_SetPlayerData(struct APlayerState* PlayerState); // Function WBP_RadialSelection_Panel.WBP_RadialSelection_Panel_C.BP_SetPlayerData // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_OnActiveWheelChanged(); // Function WBP_RadialSelection_Panel.WBP_RadialSelection_Panel_C.BP_OnActiveWheelChanged // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_RadialSelection_Panel(int32_t EntryPoint); // Function WBP_RadialSelection_Panel.WBP_RadialSelection_Panel_C.ExecuteUbergraph_WBP_RadialSelection_Panel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

