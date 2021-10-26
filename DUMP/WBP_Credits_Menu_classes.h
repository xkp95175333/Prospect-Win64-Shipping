// WidgetBlueprintGeneratedClass WBP_Credits_Menu.WBP_Credits_Menu_C
// Size: 0x3b0 (Inherited: 0x338)
struct UWBP_Credits_Menu_C : UYWidgetView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UWidgetAnimation* Background_Idle_Anim; // 0x340(0x08)
	struct UWidgetAnimation* ScreenOut_Anim; // 0x348(0x08)
	struct UWidgetAnimation* ScreenIn_Anim; // 0x350(0x08)
	struct UScrollBox* Content_Scrollbox; // 0x358(0x08)
	struct UVerticalBox* CreditsDynamicVertList; // 0x360(0x08)
	struct UImage* Gfx_ColorTint; // 0x368(0x08)
	struct UImage* Gfx_CycleLogo; // 0x370(0x08)
	struct UImage* Gfx_YagerLogo; // 0x378(0x08)
	struct UTextBlock* Txt_Headline; // 0x380(0x08)
	struct UWBP_Credits_Entry_C* WBP_Credits_Entry; // 0x388(0x08)
	struct UWBP_Credits_Headline_C* WBP_Credits_Headline; // 0x390(0x08)
	struct UWBP_InputKeyNavigation_C* WBP_InputKeyNavigation; // 0x398(0x08)
	struct TArray<struct FStructure_DeveloperCredits> CreditEntries; // 0x3a0(0x10)

	bool BP_HandleBackKey(); // Function WBP_Credits_Menu.WBP_Credits_Menu_C.BP_HandleBackKey // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_Credits_Menu.WBP_Credits_Menu_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_Credits_Menu.WBP_Credits_Menu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Credits_Menu.WBP_Credits_Menu_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void IntroAnimFinished(); // Function WBP_Credits_Menu.WBP_Credits_Menu_C.IntroAnimFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_Credits_Menu.WBP_Credits_Menu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetStartShow(); // Function WBP_Credits_Menu.WBP_Credits_Menu_C.BP_OnWidgetStartShow // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetHidden(); // Function WBP_Credits_Menu.WBP_Credits_Menu_C.BP_OnWidgetHidden // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_Credits_Menu_WBP_InputKeyNavigation_K2Node_ComponentBoundEvent_0_OnInputKeyClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* InputKey, int32_t Index, struct FDataTableRowHandle InputActionRowHandle); // Function WBP_Credits_Menu.WBP_Credits_Menu_C.BndEvt__WBP_Credits_Menu_WBP_InputKeyNavigation_K2Node_ComponentBoundEvent_0_OnInputKeyClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Credits_Menu(int32_t EntryPoint); // Function WBP_Credits_Menu.WBP_Credits_Menu_C.ExecuteUbergraph_WBP_Credits_Menu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

