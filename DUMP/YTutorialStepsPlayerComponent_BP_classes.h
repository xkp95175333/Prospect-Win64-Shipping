// BlueprintGeneratedClass YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C
// Size: 0x1b8 (Inherited: 0xb0)
struct UYTutorialStepsPlayerComponent_BP_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	int32_t CurrentStep; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct UYWidgetProvider_Missions* WidgetProviderMissions; // 0xc0(0x08)
	struct AOnboardingHintIndicator_C* HintMarkerGoTo; // 0xc8(0x08)
	struct AYPlayerController_Match* PlayerController; // 0xd0(0x08)
	struct FTimerHandle DistanceToAiCheck_TH; // 0xd8(0x08)
	float FindStridersMaxRange; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct TArray<struct AOnboardingHintIndicator_C*> HintMarkerStriders; // 0xe8(0x10)
	struct TArray<struct FText> TutorialStepDescription; // 0xf8(0x10)
	bool TrackToolSwapping; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct FString ToolSwapGoal; // 0x110(0x10)
	struct TArray<struct UActorComponent*> MineralScanResults; // 0x120(0x10)
	struct AOnboardingHintIndicator_C* HintMarkerMineral; // 0x130(0x08)
	struct FTimerHandle DistanceToMineral_TH; // 0x138(0x08)
	struct AOnboardingHintIndicator_C* HintMarkerEvac; // 0x140(0x08)
	struct FTimerHandle DistanceToEvac_TH; // 0x148(0x08)
	struct AAC_EvacShip_BP_C* EvacShipRef; // 0x150(0x08)
	struct TArray<struct FText> TutorialStepTitles; // 0x158(0x10)
	float DelayBeforeMineralMarker; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct TArray<struct FVector> EvacMarkerLocations; // 0x170(0x10)
	int32_t EvacMarkerStep; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct FDataTableRowHandle VOTutorial1; // 0x188(0x10)
	struct FDataTableRowHandle VOTutorial2; // 0x198(0x10)
	struct FMulticastInlineDelegate ToolButtonHighlightUpdate; // 0x1a8(0x10)

	void UpdateEvacMarkerLocation(struct TArray<struct FVector> Array, int32_t Dimension 1); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.UpdateEvacMarkerLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void IsMineralObject(struct FYInventoryItem YInventoryItem, bool TRUE); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.IsMineralObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void FindClosestMineralLoc(struct FVector Location); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.FindClosestMineralLoc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void SwitchToCorrectItem(struct FString CorrectItem, bool SUCCESS); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.SwitchToCorrectItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void KilledAStrider(struct FYDealtDamageData YDealtDamageData, bool SUCCESS); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.KilledAStrider // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void FindAI(bool SUCCESS); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.FindAI // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void AddMissionLineStepsToWidget(); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.AddMissionLineStepsToWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UYWidgetProvider_Missions* FindWidgetProvider(); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.FindWidgetProvider // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void FirstStepInit(); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.FirstStepInit // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StepTwoInit(); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StepTwoInit // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StepThreeInit(); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StepThreeInit // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void DistanceToAIUpdate(); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.DistanceToAIUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnPlayerDealsDamage(struct FYDealtDamageData Data); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnPlayerDealsDamage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void DamageTrackingInit(); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.DamageTrackingInit // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToolSwap(); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnToolSwap // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ToolSwapTrackingInit(); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.ToolSwapTrackingInit // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StepFourInit(); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StepFourInit // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSuccessScan(struct TArray<struct UActorComponent*> Location); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnSuccessScan // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void DistanceToMineralUpdate(); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.DistanceToMineralUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StepFiveInit(); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StepFiveInit // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StartMineralDistanceCheck(); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StartMineralDistanceCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StepSixInit(); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StepSixInit // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnItemPickedUp(struct UYStateInventoryComponent* stateInventoryComponent, struct FYInventoryItem Item, enum class EYPlayerSetType equippedSetType); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnItemPickedUp // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void DistanceToEvacUpdate(); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.DistanceToEvacUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StepSevenInit(); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StepSevenInit // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnEvacCalled(struct APRO_PlayerController_C* Player); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnEvacCalled // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StepEightInit(); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StepEightInit // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnEvacShipStateChange(enum class AC_EscapeShip_State EscapeShipState); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnEvacShipStateChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StepNineInit(); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StepNineInit // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void WelcomeStepInit(); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.WelcomeStepInit // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnIntroFinished(); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnIntroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void InitializeTutorial(); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitializeTutorial // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Step10Init(); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.Step10Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void FindAiAttempt(); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.FindAiAttempt // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_YTutorialStepsPlayerComponent_BP(int32_t EntryPoint); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.ExecuteUbergraph_YTutorialStepsPlayerComponent_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void ToolButtonHighlightUpdate__DelegateSignature(bool ShouldHighlight); // Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.ToolButtonHighlightUpdate__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

