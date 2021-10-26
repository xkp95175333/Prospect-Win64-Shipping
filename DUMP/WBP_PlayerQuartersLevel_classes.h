// WidgetBlueprintGeneratedClass WBP_PlayerQuartersLevel.WBP_PlayerQuartersLevel_C
// Size: 0x310 (Inherited: 0x2c0)
struct UWBP_PlayerQuartersLevel_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UImage* Gfx_DecoGradient; // 0x2c8(0x08)
	struct UImage* Gfx_Edge; // 0x2d0(0x08)
	struct UImage* Gfx_FillDark; // 0x2d8(0x08)
	struct UImage* Gfx_FillLight; // 0x2e0(0x08)
	struct UImage* Gfx_Underline; // 0x2e8(0x08)
	struct UImage* Icn_Station; // 0x2f0(0x08)
	struct USizeBox* Icon; // 0x2f8(0x08)
	struct UTextBlock* Txt_Value; // 0x300(0x08)
	struct UWBP_SelectionHighlight_C* WBP_SelectionHighlight; // 0x308(0x08)

	void OnPLayerQuarterLevelUpdated(struct UYControllerPlayerQuarterComponent* controllerPlayerQuarterComponent); // Function WBP_PlayerQuartersLevel.WBP_PlayerQuartersLevel_C.OnPLayerQuarterLevelUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetLevelText(struct FText InText); // Function WBP_PlayerQuartersLevel.WBP_PlayerQuartersLevel_C.SetLevelText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_PlayerQuartersLevel.WBP_PlayerQuartersLevel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_PlayerQuartersLevel(int32_t EntryPoint); // Function WBP_PlayerQuartersLevel.WBP_PlayerQuartersLevel_C.ExecuteUbergraph_WBP_PlayerQuartersLevel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

