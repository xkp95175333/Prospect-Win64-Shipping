// BlueprintGeneratedClass PRO_PlayerController.PRO_PlayerController_C
// Size: 0x9f8 (Inherited: 0x8c8)
struct APRO_PlayerController_C : AYPlayerController_Match {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x8c8(0x08)
	struct UYControllerCraftingComponent_BP_C* YControllerCraftingComponent_BP; // 0x8d0(0x08)
	struct UYPlayerDropPodIntroComponent_BP_C* YPlayerDropPodIntroComponent_BP; // 0x8d8(0x08)
	struct UBP_AimAssistDebug_C* BP_AimAssistDebug; // 0x8e0(0x08)
	struct UBP_AimAssist_C* BP_AimAssist; // 0x8e8(0x08)
	struct UYTutorialComponent_BP_C* YTutorialComponent_BP; // 0x8f0(0x08)
	struct UYControllerContractsActivesDataComponent_BP_C* YControllerContractsActivesDataComponent_BP; // 0x8f8(0x08)
	struct UYControllerTrackerInventoryComponent_BP_C* YControllerTrackerInventoryComponent_BP; // 0x900(0x08)
	struct UYControllerTrackerKillsComponent_BP_C* YControllerTrackerKillsComponent_BP; // 0x908(0x08)
	struct UYControllerContractsBoardsDataComponent_BP_C* YControllerContractsBoardsDataComponent_BP; // 0x910(0x08)
	struct UYControllerContractsCheatsComponent_BP_C* YControllerContractsCheatsComponent_BP; // 0x918(0x08)
	struct UBackgroundDropPodSpawner_BP_C* BackgroundDropPodSpawner_BP; // 0x920(0x08)
	struct UYIdleDetectionComponent_BP_C* YIdleDetectionComponent_BP; // 0x928(0x08)
	struct ULightningComponent_BP_C* LightningComponent_BP; // 0x930(0x08)
	struct UPlayerStationComponent_BP_C* PlayerStationComponent_BP; // 0x938(0x08)
	struct UPlayerControllerCombatAwarenessComponent_BP_C* CombatAwarenessComponent; // 0x940(0x08)
	struct UYBugReporterComponent_BP_C* YBugItComponent_BP; // 0x948(0x08)
	struct FString commandLine; // 0x950(0x10)
	bool recordProfiles; // 0x960(0x01)
	char pad_961[0x3]; // 0x961(0x03)
	int32_t performanceLoop; // 0x964(0x04)
	char pad_968[0x8]; // 0x968(0x08)
	struct FTransform default location; // 0x970(0x30)
	bool isSoaktestRunning; // 0x9a0(0x01)
	bool isCraftingMaterialsReceived; // 0x9a1(0x01)
	char pad_9A2[0x6]; // 0x9a2(0x06)
	struct FString CraftItemName; // 0x9a8(0x10)
	bool isCraftingWorks; // 0x9b8(0x01)
	char pad_9B9[0x7]; // 0x9b9(0x07)
	struct ASoakTestStationAutomationManager_BP_C* SoaktestStationManagerActor; // 0x9c0(0x08)
	bool IsSmokecheckAutomationRunning; // 0x9c8(0x01)
	bool SmokecheckPlayedMP Map; // 0x9c9(0x01)
	char pad_9CA[0x6]; // 0x9ca(0x06)
	struct FMulticastInlineDelegate OnHasZeal; // 0x9d0(0x10)
	bool isStationAutomationReconectRunning; // 0x9e0(0x01)
	bool isFunctionalTestRunning; // 0x9e1(0x01)
	bool IsPerformanceAutomationRunning; // 0x9e2(0x01)
	bool isPerformanceCapturingRunning; // 0x9e3(0x01)
	bool isStationAutomationIDLE Running; // 0x9e4(0x01)
	char pad_9E5[0x3]; // 0x9e5(0x03)
	struct FMulticastInlineDelegate CallEvacPressed; // 0x9e8(0x10)

	void BP_DebugToggleAimAssistInfo(); // Function PRO_PlayerController.PRO_PlayerController_C.BP_DebugToggleAimAssistInfo // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	float BP_AimAssistAdjustYawInput(float InValue); // Function PRO_PlayerController.PRO_PlayerController_C.BP_AimAssistAdjustYawInput // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	float BP_AimAssistAdjustPitchInput(float InValue); // Function PRO_PlayerController.PRO_PlayerController_C.BP_AimAssistAdjustPitchInput // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void LogSpawnedActivities(); // Function PRO_PlayerController.PRO_PlayerController_C.LogSpawnedActivities // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	bool BP_OnTryConsumeEscapeKey(); // Function PRO_PlayerController.PRO_PlayerController_C.BP_OnTryConsumeEscapeKey // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void InpActEvt_Debug_ToggleGod_K2Node_InputActionEvent_3(struct FKey Key); // Function PRO_PlayerController.PRO_PlayerController_C.InpActEvt_Debug_ToggleGod_K2Node_InputActionEvent_3 // (BlueprintEvent) // @ game+0x1e02480
	void InpActEvt_HideHud_K2Node_InputActionEvent_2(struct FKey Key); // Function PRO_PlayerController.PRO_PlayerController_C.InpActEvt_HideHud_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x1e02480
	void InpActEvt_CallEvac_K2Node_InputActionEvent_1(struct FKey Key); // Function PRO_PlayerController.PRO_PlayerController_C.InpActEvt_CallEvac_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function PRO_PlayerController.PRO_PlayerController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void sendRequestAutomationStarted(); // Function PRO_PlayerController.PRO_PlayerController_C.sendRequestAutomationStarted // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StartInMatchSoaktest(); // Function PRO_PlayerController.PRO_PlayerController_C.StartInMatchSoaktest // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void RunPerformanceCapture(struct FString timeSeriesSpecifier, struct FString performanceCaptureName); // Function PRO_PlayerController.PRO_PlayerController_C.RunPerformanceCapture // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void nextPerformanceCycle(); // Function PRO_PlayerController.PRO_PlayerController_C.nextPerformanceCycle // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void DebugLeaveMatch(); // Function PRO_PlayerController.PRO_PlayerController_C.DebugLeaveMatch // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ServerDebugLeaveMatch(); // Function PRO_PlayerController.PRO_PlayerController_C.ServerDebugLeaveMatch // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void sendRequestSpottedPerformanceStarted(); // Function PRO_PlayerController.PRO_PlayerController_C.sendRequestSpottedPerformanceStarted // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__m_controllerReplicationComponent_K2Node_ComponentBoundEvent_0_OnAnyPlayerTeleportedDBNO__DelegateSignature(struct FYTeleportData teleportData); // Function PRO_PlayerController.PRO_PlayerController_C.BndEvt__m_controllerReplicationComponent_K2Node_ComponentBoundEvent_0_OnAnyPlayerTeleportedDBNO__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ToggleHud(); // Function PRO_PlayerController.PRO_PlayerController_C.ToggleHud // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void RequestCaptureServerPerf(); // Function PRO_PlayerController.PRO_PlayerController_C.RequestCaptureServerPerf // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void MatchStarted(enum class EYMatchState matchState); // Function PRO_PlayerController.PRO_PlayerController_C.MatchStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StartSmokecheckInMatch(); // Function PRO_PlayerController.PRO_PlayerController_C.StartSmokecheckInMatch // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void debuginitautomation(); // Function PRO_PlayerController.PRO_PlayerController_C.debuginitautomation // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void startSationAutomation(); // Function PRO_PlayerController.PRO_PlayerController_C.startSationAutomation // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SmokecheckMeta(); // Function PRO_PlayerController.PRO_PlayerController_C.SmokecheckMeta // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnPlayerInventoryUpdated(struct TArray<struct FYInventoryItem> Inventory); // Function PRO_PlayerController.PRO_PlayerController_C.OnPlayerInventoryUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void startSoaktest(); // Function PRO_PlayerController.PRO_PlayerController_C.startSoaktest // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StartSpotPerformanceCapturing(); // Function PRO_PlayerController.PRO_PlayerController_C.StartSpotPerformanceCapturing // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void startStationReconnectAutomation(); // Function PRO_PlayerController.PRO_PlayerController_C.startStationReconnectAutomation // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void InitSoaktest(); // Function PRO_PlayerController.PRO_PlayerController_C.InitSoaktest // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SmokeCheckMeta_PlayerQuarters(); // Function PRO_PlayerController.PRO_PlayerController_C.SmokeCheckMeta_PlayerQuarters // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_DebugSetMatchPhase(struct FDataTableRowHandle newMatchPhaseRowHandle); // Function PRO_PlayerController.PRO_PlayerController_C.BP_DebugSetMatchPhase // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ServerDebugSetMatchPhase(struct FDataTableRowHandle MatchPhaseDefinitionRowHandle); // Function PRO_PlayerController.PRO_PlayerController_C.ServerDebugSetMatchPhase // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PressedCallEvac(); // Function PRO_PlayerController.PRO_PlayerController_C.PressedCallEvac // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void NextMatchPhase(); // Function PRO_PlayerController.PRO_PlayerController_C.NextMatchPhase // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSmokeTestTimeOut(); // Function PRO_PlayerController.PRO_PlayerController_C.OnSmokeTestTimeOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void HealthEmptyDelegate_Event_1(struct UYHealthComponent* healthComponent, struct AActor* Instigator); // Function PRO_PlayerController.PRO_PlayerController_C.HealthEmptyDelegate_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void CustomEvent(struct UYHealthComponent* healthComponent, struct AActor* Instigator); // Function PRO_PlayerController.PRO_PlayerController_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_PRO_PlayerController(int32_t EntryPoint); // Function PRO_PlayerController.PRO_PlayerController_C.ExecuteUbergraph_PRO_PlayerController // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void CallEvacPressed__DelegateSignature(struct APRO_PlayerController_C* Player); // Function PRO_PlayerController.PRO_PlayerController_C.CallEvacPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnHasZeal__DelegateSignature(bool HasZeal); // Function PRO_PlayerController.PRO_PlayerController_C.OnHasZeal__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

