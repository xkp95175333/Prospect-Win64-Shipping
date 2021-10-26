// BlueprintGeneratedClass AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C
// Size: 0x4f8 (Inherited: 0x240)
struct AAA_EscapeShipTerminal_BP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct UParticleSystemComponent* BloomParticle; // 0x248(0x08)
	struct UPointLightComponent* PointLight; // 0x250(0x08)
	struct UAudioComponent* IMA_EVAC_TransmissionLoop; // 0x258(0x08)
	struct USceneComponent* Scene1; // 0x260(0x08)
	struct UStaticMeshComponent* large_antenna; // 0x268(0x08)
	struct UMatchPhaseListenerComponent_BP_C* MatchPhaseListenerComponent_BP; // 0x270(0x08)
	struct UYActivityComponent* YActivityComponent; // 0x278(0x08)
	struct UTextRenderComponent* TextRender; // 0x280(0x08)
	struct UStaticMeshComponent* Console1; // 0x288(0x08)
	struct USceneComponent* Scene; // 0x290(0x08)
	struct UYMapMarkerComponent* YMapMarker; // 0x298(0x08)
	struct UYObjectInteractionComponent* YObjectInteraction; // 0x2a0(0x08)
	float BeaconFlash_TL_EmissiveLerp_BD89A1DA4658AA6E946CE98710E7AAEA; // 0x2a8(0x04)
	enum class ETimelineDirection BeaconFlash_TL__Direction_BD89A1DA4658AA6E946CE98710E7AAEA; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	struct UTimelineComponent* BeaconFlash-TL; // 0x2b0(0x08)
	struct FMulticastInlineDelegate OnTerminalActivated; // 0x2b8(0x10)
	enum class AC_EscapeShipTerminal_Actor_ENUM EscapeShipTerminal_State; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct FText TerminalActive_Text; // 0x2d0(0x18)
	struct FText TerminalCanBeUsed_Text; // 0x2e8(0x18)
	struct AYPlayerController_Match* interactingPlayer; // 0x300(0x08)
	float StartOfMatchDownTime; // 0x308(0x04)
	char pad_30C[0x4]; // 0x30c(0x04)
	struct FTimerHandle MapMarkerCountdownTH; // 0x310(0x08)
	struct UBP_EscapeMarkerData_C* MarkerDataEscape; // 0x318(0x08)
	float TerminalCooldownTime; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct AAC_EvacShip_BP_C* EvacShip; // 0x328(0x08)
	struct TArray<struct AYPlayerController*> PlayersRegisteredToThisTerminal; // 0x330(0x10)
	bool isRegistered; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	struct TArray<struct AYPlayerController*> PlayersToBeRemoved; // 0x348(0x10)
	bool isLocalPlayerRegistered; // 0x358(0x01)
	bool isShipArriving; // 0x359(0x01)
	bool DEBUG_IgnoreRegistration; // 0x35a(0x01)
	char pad_35B[0x5]; // 0x35b(0x05)
	struct TMap<struct AYPlayerController*, bool> PlayersInProximity; // 0x360(0x50)
	bool wasInProximity; // 0x3b0(0x01)
	bool isInProximity; // 0x3b1(0x01)
	bool useProximityToInteract; // 0x3b2(0x01)
	bool isEvacActive; // 0x3b3(0x01)
	float ActivationDistance; // 0x3b4(0x04)
	float MinHeightActivationDistance; // 0x3b8(0x04)
	float MaxHeightActivationDistance; // 0x3bc(0x04)
	struct FString BIActorID; // 0x3c0(0x10)
	struct FString BIHookName; // 0x3d0(0x10)
	struct FTransform LandingLocation; // 0x3e0(0x30)
	struct FTransform CamTransform; // 0x410(0x30)
	struct TArray<struct AYPlayerController*> PlayersToPlayEvacMusicFor; // 0x440(0x10)
	bool isTutorialEvac; // 0x450(0x01)
	char pad_451[0x3]; // 0x451(0x03)
	struct FLinearColor BeaconLightColour; // 0x454(0x10)
	enum class AC_EscapeShip_State EscapeShipState; // 0x464(0x01)
	char pad_465[0x3]; // 0x465(0x03)
	struct FLinearColor BeaconColourArriving; // 0x468(0x10)
	struct FLinearColor BeaconColourLanded; // 0x478(0x10)
	struct FLinearColor BeaconColourAlmostLeaving; // 0x488(0x10)
	struct FLinearColor BeaconColourShipLeft; // 0x498(0x10)
	bool ShouldBeaconFlash; // 0x4a8(0x01)
	char pad_4A9[0x3]; // 0x4a9(0x03)
	float BeaconFlashPlayRate; // 0x4ac(0x04)
	struct TArray<struct AEscape_Beacon_BP_C*> BeaconMeshes; // 0x4b0(0x10)
	struct FLinearColor PlayerNearbyBeaconColour; // 0x4c0(0x10)
	float PlayerNearbyBeaconFlashRate; // 0x4d0(0x04)
	int32_t PlayersInProximityInt; // 0x4d4(0x04)
	struct FLinearColor BeaconLightColourDefault; // 0x4d8(0x10)
	struct FLinearColor BeaconColourDisabled; // 0x4e8(0x10)

	void OnRep_isEvacActive(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnRep_isEvacActive // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetShipLandingTransformLocal(struct FTransform Result); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.GetShipLandingTransformLocal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetShipLandingTransformWorld(struct FTransform Result); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.GetShipLandingTransformWorld // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void CanUpdateBeaconPlayerProximity(bool CanUpdate); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.CanUpdateBeaconPlayerProximity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void UpdatePlayerAmountInProximity(int32_t AmountOfPlayersInProximity); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.UpdatePlayerAmountInProximity // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void OnRep_PlayersInProximityInt(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnRep_PlayersInProximityInt // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnRep_BeaconMeshes(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnRep_BeaconMeshes // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnRep_EvacShip(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnRep_EvacShip // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateBeaconActors(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.UpdateBeaconActors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetBeaconMeshes(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.GetBeaconMeshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void InitBeaconSettings(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.InitBeaconSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SendBIData(enum class EYEscapeBIHookStep step, struct AActor* playerContext); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.SendBIData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void DetermineShipID(struct FString BIActorID); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.DetermineShipID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void isLocalPlayerRegisteredToThisTerminal(bool isRegistered); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.isLocalPlayerRegisteredToThisTerminal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SpawnEvacShip(struct AAC_EvacShip_BP_C* SpawnedEscapeActor); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.SpawnEvacShip // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnRep_EscapeShipTerminal_State(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnRep_EscapeShipTerminal_State // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BeaconFlash-TL__FinishedFunc(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.BeaconFlash-TL__FinishedFunc // (BlueprintEvent) // @ game+0x1e02480
	void BeaconFlash-TL__UpdateFunc(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.BeaconFlash-TL__UpdateFunc // (BlueprintEvent) // @ game+0x1e02480
	void OnNotifyEnd_2DDB424B48BCCF1BC1F4968E9490C6E7(struct FName NotifyName); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnNotifyEnd_2DDB424B48BCCF1BC1F4968E9490C6E7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnNotifyBegin_2DDB424B48BCCF1BC1F4968E9490C6E7(struct FName NotifyName); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnNotifyBegin_2DDB424B48BCCF1BC1F4968E9490C6E7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnInterrupted_2DDB424B48BCCF1BC1F4968E9490C6E7(struct FName NotifyName); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnInterrupted_2DDB424B48BCCF1BC1F4968E9490C6E7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnBlendOut_2DDB424B48BCCF1BC1F4968E9490C6E7(struct FName NotifyName); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnBlendOut_2DDB424B48BCCF1BC1F4968E9490C6E7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnCompleted_2DDB424B48BCCF1BC1F4968E9490C6E7(struct FName NotifyName); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnCompleted_2DDB424B48BCCF1BC1F4968E9490C6E7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnNotifyEnd_2E15C4E14D9168F9EA7277B6AD0EC9BA(struct FName NotifyName); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnNotifyEnd_2E15C4E14D9168F9EA7277B6AD0EC9BA // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnNotifyBegin_2E15C4E14D9168F9EA7277B6AD0EC9BA(struct FName NotifyName); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnNotifyBegin_2E15C4E14D9168F9EA7277B6AD0EC9BA // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnInterrupted_2E15C4E14D9168F9EA7277B6AD0EC9BA(struct FName NotifyName); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnInterrupted_2E15C4E14D9168F9EA7277B6AD0EC9BA // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnBlendOut_2E15C4E14D9168F9EA7277B6AD0EC9BA(struct FName NotifyName); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnBlendOut_2E15C4E14D9168F9EA7277B6AD0EC9BA // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnCompleted_2E15C4E14D9168F9EA7277B6AD0EC9BA(struct FName NotifyName); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnCompleted_2E15C4E14D9168F9EA7277B6AD0EC9BA // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnEscapeShipStateChange(enum class AC_EscapeShip_State EscapeShipState); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnEscapeShipStateChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SFX_PlayShipArriving(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.SFX_PlayShipArriving // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SFX_PlayShipAlarm(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.SFX_PlayShipAlarm // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void FadeInAudioLoop(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.FadeInAudioLoop // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PlayEvacMusic(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.PlayEvacMusic // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PlayMusicOnSpecificPlayer(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.PlayMusicOnSpecificPlayer // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnPlayersNearby(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnPlayersNearby // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnPlayersNotNearby(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnPlayersNotNearby // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnMainAntennaUpdate(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnMainAntennaUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnEvacDisabled(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnEvacDisabled // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnEvacEnabled(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnEvacEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature(enum class EYInteractionType interactionType, struct AYPlayerController_Match* interactingPlayer, bool perfectInteraction); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void DisableTerminal(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.DisableTerminal // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void EnableTerminal(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.EnableTerminal // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnEvacShipLeaving(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnEvacShipLeaving // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void EvacAvailable(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.EvacAvailable // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void RegisterNewPlayerToTerminal(struct AYPlayerController* Player); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.RegisterNewPlayerToTerminal // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void CheckRegistreesForValidity(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.CheckRegistreesForValidity // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PlayDepartureAlarmOnTerminal_Event_1(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.PlayDepartureAlarmOnTerminal_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void CallEvacPressed_Event_1(struct APRO_PlayerController_C* Player); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.CallEvacPressed_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ChangePromptVisibility(struct AYPlayerController* PlayerCTRL, bool showPrompt); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.ChangePromptVisibility // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void RefreshPromptVisibility(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.RefreshPromptVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnShipLanded_Event_1(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnShipLanded_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnReplicatedMatchPhaseDataUpdated_Event_1(struct FYMatchPhaseData newMatchPhaseData); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnReplicatedMatchPhaseDataUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PlayInteractionAnim(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.PlayInteractionAnim // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SwitchToEvacCam(struct AYPlayerController* EscapingPlayerCTRL); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.SwitchToEvacCam // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_AA_EscapeShipTerminal_BP(int32_t EntryPoint); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.ExecuteUbergraph_AA_EscapeShipTerminal_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void OnTerminalActivated__DelegateSignature(); // Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnTerminalActivated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

