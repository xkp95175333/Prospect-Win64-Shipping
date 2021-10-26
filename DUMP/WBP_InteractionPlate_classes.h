// WidgetBlueprintGeneratedClass WBP_InteractionPlate.WBP_InteractionPlate_C
// Size: 0x441 (Inherited: 0x3b8)
struct UWBP_InteractionPlate_C : UActorPlate_WBP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct UWidgetAnimation* ScreenOut_Anim; // 0x3c0(0x08)
	struct UWidgetAnimation* ScreenIn_Anim; // 0x3c8(0x08)
	struct UWidgetAnimation* Label_FadeIn_InteractionPrompt; // 0x3d0(0x08)
	struct UWidgetAnimation* Anim_OnInteraction; // 0x3d8(0x08)
	struct UWidgetAnimation* Label_FadeIn; // 0x3e0(0x08)
	struct UTextBlock* ActionLabel; // 0x3e8(0x08)
	struct UImage* Gfx_Backer; // 0x3f0(0x08)
	struct UImage* Gfx_Line; // 0x3f8(0x08)
	struct UImage* Img_NPCIcon; // 0x400(0x08)
	struct UTextBlock* NameLabel; // 0x408(0x08)
	struct UCanvasPanel* PlateLayoutCanvas; // 0x410(0x08)
	struct UWBP_InputKey_C* WBP_InputKey; // 0x418(0x08)
	int32_t showButtonPromptThreshold; // 0x420(0x04)
	bool isLabelVisible; // 0x424(0x01)
	char pad_425[0x3]; // 0x425(0x03)
	struct AController* PlayerController; // 0x428(0x08)
	bool isInteractionHintVisible; // 0x430(0x01)
	bool IsWidgetVisible; // 0x431(0x01)
	char pad_432[0x6]; // 0x432(0x06)
	struct UYControllerStationComponent* controllerStationComponent; // 0x438(0x08)
	bool AlwaysShowLabel; // 0x440(0x01)

	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_InteractionPlate.WBP_InteractionPlate_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnLoaded_48107EB84E65360E4B3D24959CE3BACA(struct UObject* Loaded); // Function WBP_InteractionPlate.WBP_InteractionPlate_C.OnLoaded_48107EB84E65360E4B3D24959CE3BACA // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void TrySetLabelVisibility(bool shouldBeVisible); // Function WBP_InteractionPlate.WBP_InteractionPlate_C.TrySetLabelVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Interaction_PromptVisible(); // Function WBP_InteractionPlate.WBP_InteractionPlate_C.Interaction_PromptVisible // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnInteraction(); // Function WBP_InteractionPlate.WBP_InteractionPlate_C.OnInteraction // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_InteractionPlate.WBP_InteractionPlate_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnInteractionStarted(enum class EYInteractionType interactionType, struct AYPlayerController_Match* interactingPlayer); // Function WBP_InteractionPlate.WBP_InteractionPlate_C.OnInteractionStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_InitializeFor(); // Function WBP_InteractionPlate.WBP_InteractionPlate_C.BP_InitializeFor // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_WidgetPlateDataSet(); // Function WBP_InteractionPlate.WBP_InteractionPlate_C.BP_WidgetPlateDataSet // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ToggledHud(bool Visibility); // Function WBP_InteractionPlate.WBP_InteractionPlate_C.ToggledHud // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ButtonAnimationFinished(); // Function WBP_InteractionPlate.WBP_InteractionPlate_C.ButtonAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDetected(struct FYPlayerInteraction interactionData, bool detected); // Function WBP_InteractionPlate.WBP_InteractionPlate_C.OnDetected // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void TrySetInteractionHintVisibility(bool shouldBeVisible); // Function WBP_InteractionPlate.WBP_InteractionPlate_C.TrySetInteractionHintVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void TrySetVisibility(bool shouldBeVisible); // Function WBP_InteractionPlate.WBP_InteractionPlate_C.TrySetVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_InteractionPlate.WBP_InteractionPlate_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_InteractionPlate(int32_t EntryPoint); // Function WBP_InteractionPlate.WBP_InteractionPlate_C.ExecuteUbergraph_WBP_InteractionPlate // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

