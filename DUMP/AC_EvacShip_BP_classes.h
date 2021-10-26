// BlueprintGeneratedClass AC_EvacShip_BP.AC_EvacShip_BP_C
// Size: 0x4e8 (Inherited: 0x240)
struct AAC_EvacShip_BP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct UStaticMeshComponent* Cotech_LuggageBagClosed; // 0x248(0x08)
	struct UStaticMeshComponent* Storage_CrateSmall; // 0x250(0x08)
	struct UStaticMeshComponent* Storage_CrateLong; // 0x258(0x08)
	struct UBoxComponent* Box1; // 0x260(0x08)
	struct UBoxComponent* Box; // 0x268(0x08)
	struct UStaticMeshComponent* InteriorProps_Crate_Closed; // 0x270(0x08)
	struct USceneComponent* LuggageBase; // 0x278(0x08)
	struct UYDamageComponent* YDamage; // 0x280(0x08)
	struct UBoxComponent* KillCollision; // 0x288(0x08)
	struct UBoxComponent* EscapePromptCollision; // 0x290(0x08)
	struct UAudioComponent* IMA_EscapeShip_Engine_Burner; // 0x298(0x08)
	struct UYActivityComponent* YActivityComponent; // 0x2a0(0x08)
	struct UAudioComponent* IMA_EscapeShip_Engine; // 0x2a8(0x08)
	struct UAudioComponent* ShipLeavingSoonAlarm; // 0x2b0(0x08)
	struct UAudioComponent* UI_EoM_Timer; // 0x2b8(0x08)
	struct UAudioComponent* IMA_EscapeShip_start; // 0x2c0(0x08)
	struct UAudioComponent* IMA_EscapeShip_spawn; // 0x2c8(0x08)
	struct UAudioComponent* IMA_EscapeShip_landing; // 0x2d0(0x08)
	struct UAudioComponent* IMA_EscapeShip_idle; // 0x2d8(0x08)
	struct UYProgressComponent* EscapeProgress; // 0x2e0(0x08)
	struct UBoxComponent* EscapeCollision; // 0x2e8(0x08)
	struct UPointLightComponent* AlarmLight1; // 0x2f0(0x08)
	struct UPointLightComponent* AlarmLight; // 0x2f8(0x08)
	struct UYMapMarkerComponent* YMapMarker; // 0x300(0x08)
	struct UStaticMeshComponent* SM_EvacShip_Collision; // 0x308(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x310(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x318(0x08)
	struct FVector DropShipTakeOff_TL_ShipFlight_F38C9E804C580FC23AB45DBF14E3F6AB; // 0x320(0x0c)
	float DropShipTakeOff_TL_ShipRotation_F38C9E804C580FC23AB45DBF14E3F6AB; // 0x32c(0x04)
	float DropShipTakeOff_TL_ScaleLerp_F38C9E804C580FC23AB45DBF14E3F6AB; // 0x330(0x04)
	enum class ETimelineDirection DropShipTakeOff_TL__Direction_F38C9E804C580FC23AB45DBF14E3F6AB; // 0x334(0x01)
	char pad_335[0x3]; // 0x335(0x03)
	struct UTimelineComponent* DropShipTakeOff_TL; // 0x338(0x08)
	struct FVector DropShipLanding_TL_ShipFlightLocation_742B6C39488045FC9A9406874B4AD948; // 0x340(0x0c)
	float DropShipLanding_TL_LandingLerp_742B6C39488045FC9A9406874B4AD948; // 0x34c(0x04)
	enum class ETimelineDirection DropShipLanding_TL__Direction_742B6C39488045FC9A9406874B4AD948; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct UTimelineComponent* DropShipLanding_TL; // 0x358(0x08)
	float DepartureAlarm_TL_LightAlarmLerp_23BAEFC841DA46A10E0DC0B6BD18E253; // 0x360(0x04)
	enum class ETimelineDirection DepartureAlarm_TL__Direction_23BAEFC841DA46A10E0DC0B6BD18E253; // 0x364(0x01)
	char pad_365[0x3]; // 0x365(0x03)
	struct UTimelineComponent* DepartureAlarm_TL; // 0x368(0x08)
	struct FVector DropShipFlight_TL_ShipFlightRotation_BD22B96543FC2EDAB8593F996B438AE0; // 0x370(0x0c)
	struct FVector DropShipFlight_TL_ShipFlightLocation_BD22B96543FC2EDAB8593F996B438AE0; // 0x37c(0x0c)
	float DropShipFlight_TL_ShipScale_BD22B96543FC2EDAB8593F996B438AE0; // 0x388(0x04)
	enum class ETimelineDirection DropShipFlight_TL__Direction_BD22B96543FC2EDAB8593F996B438AE0; // 0x38c(0x01)
	char pad_38D[0x3]; // 0x38d(0x03)
	struct UTimelineComponent* DropShipFlight_TL; // 0x390(0x08)
	enum class AC_EscapeShip_State EvacShipState; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct AYPlayerState* EscapingPlayerState; // 0x3a0(0x08)
	float LandedTime; // 0x3a8(0x04)
	float DepartureAlarmTime; // 0x3ac(0x04)
	struct FMulticastInlineDelegate OnShipLeaving; // 0x3b0(0x10)
	float EscapeTime; // 0x3c0(0x04)
	char pad_3C4[0x4]; // 0x3c4(0x04)
	struct TMap<struct AYPlayerCharacter*, float> EscapingPlayersMap; // 0x3c8(0x50)
	struct FTimerHandle EscapeTH; // 0x418(0x08)
	float PlayerEscapeUpdateFreq; // 0x420(0x04)
	float EscapingPlayerCheckFreq; // 0x424(0x04)
	float LandingTime; // 0x428(0x04)
	float PauzeBeforeLandingTime; // 0x42c(0x04)
	struct FString BIActorID; // 0x430(0x10)
	struct FTimerHandle CurrentStateTimerHandle; // 0x440(0x08)
	struct FMulticastInlineDelegate PlayDepartureAlarmOnTerminal; // 0x448(0x10)
	float ShipScale; // 0x458(0x04)
	struct FVector ShipFlightLocation; // 0x45c(0x0c)
	struct FVector ShipFlightRotation; // 0x468(0x0c)
	float GameTimePrevious; // 0x474(0x04)
	struct FVector ShipFlightLocationPrevious; // 0x478(0x0c)
	struct FVector ShipFlightRotationPrevious; // 0x484(0x0c)
	bool isArriving; // 0x490(0x01)
	char pad_491[0x3]; // 0x491(0x03)
	float LandingLerp; // 0x494(0x04)
	bool isLanding; // 0x498(0x01)
	char pad_499[0x3]; // 0x499(0x03)
	float LandingLerpPrevious; // 0x49c(0x04)
	struct TArray<struct AYPlayerController*> EscapingControllers; // 0x4a0(0x10)
	struct FMulticastInlineDelegate OnShipLanded; // 0x4b0(0x10)
	struct AAA_EscapeShipTerminal_BP_C* TerminalActor; // 0x4c0(0x08)
	struct APlayerController* PlayerControllerInstigator; // 0x4c8(0x08)
	bool isLocalPlayerInShip; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)
	struct FMulticastInlineDelegate OnStateChange; // 0x4d8(0x10)

	struct FColor GetDrawDebugLineColor(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.GetDrawDebugLineColor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct FVector GetDrawDebugLineTo(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.GetDrawDebugLineTo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct FString GetDebugDescription(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.GetDebugDescription // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateCollisionSettings(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.UpdateCollisionSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetShipState(enum class AC_EscapeShip_State EvacShipState); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetShipState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct FString GetCollisionDebugString(struct UPrimitiveComponent* Target); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.GetCollisionDebugString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void InitVariables(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.InitVariables // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StopClientEscapeProgress(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.StopClientEscapeProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StartClientEscapeProgress(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.StartClientEscapeProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdatePlayersEscapeTimeLeft(struct TArray<struct AYPlayerCharacter*> EscapingPlayers); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.UpdatePlayersEscapeTimeLeft // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void FindEscapingPlayer(struct UObject* Object, struct AYPlayerCharacter* EscapingPlayer); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.FindEscapingPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PlayerEscapes(struct AYPlayerState* PlayerState); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayerEscapes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnRep_EvacShipState(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.OnRep_EvacShipState // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void DropShipFlight_TL__FinishedFunc(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipFlight_TL__FinishedFunc // (BlueprintEvent) // @ game+0x1e02480
	void DropShipFlight_TL__UpdateFunc(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipFlight_TL__UpdateFunc // (BlueprintEvent) // @ game+0x1e02480
	void DropShipTakeOff_TL__FinishedFunc(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipTakeOff_TL__FinishedFunc // (BlueprintEvent) // @ game+0x1e02480
	void DropShipTakeOff_TL__UpdateFunc(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipTakeOff_TL__UpdateFunc // (BlueprintEvent) // @ game+0x1e02480
	void DepartureAlarm_TL__FinishedFunc(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.DepartureAlarm_TL__FinishedFunc // (BlueprintEvent) // @ game+0x1e02480
	void DepartureAlarm_TL__UpdateFunc(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.DepartureAlarm_TL__UpdateFunc // (BlueprintEvent) // @ game+0x1e02480
	void DropShipLanding_TL__FinishedFunc(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipLanding_TL__FinishedFunc // (BlueprintEvent) // @ game+0x1e02480
	void DropShipLanding_TL__UpdateFunc(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipLanding_TL__UpdateFunc // (BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void PlayArrivingAnim(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayArrivingAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PlayDepartingAnim(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayDepartingAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PlayDepartureAlarm(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayDepartureAlarm // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetStateToLeaving(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetStateToLeaving // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetStateToLanded(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetStateToLanded // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__EscapeCollision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__EscapeCollision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__EscapeCollision_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__EscapeCollision_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void PlayerEscapeUpdater(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayerEscapeUpdater // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetShipToLanding(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetShipToLanding // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PlayLandingAnim(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayLandingAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void InitiateDestruction(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.InitiateDestruction // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void EnableEscapeCollision(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.EnableEscapeCollision // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StopDepartureAlarm(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.StopDepartureAlarm // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetStateToArriving(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetStateToArriving // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetStateToPreparingTakeOff(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetStateToPreparingTakeOff // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void DisableEscapeCollision(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.DisableEscapeCollision // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveTick(float DeltaSeconds); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void FadeOutAndHideShip(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.FadeOutAndHideShip // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void EnableEscapePromptCollision(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.EnableEscapePromptCollision // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void DisableEscapePromptCollision(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.DisableEscapePromptCollision // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__AC_EvacShip_BP_EscapePromptCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__AC_EvacShip_BP_EscapePromptCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__AC_EvacShip_BP_EscapePromptCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__AC_EvacShip_BP_EscapePromptCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void TryPlayFTUE(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.TryPlayFTUE // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__AC_EvacShip_BP_KillCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__AC_EvacShip_BP_KillCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_AC_EvacShip_BP(int32_t EntryPoint); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.ExecuteUbergraph_AC_EvacShip_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void OnStateChange__DelegateSignature(enum class AC_EscapeShip_State EscapeShipState); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.OnStateChange__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnShipLanded__DelegateSignature(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.OnShipLanded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PlayDepartureAlarmOnTerminal__DelegateSignature(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayDepartureAlarmOnTerminal__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnShipLeaving__DelegateSignature(); // Function AC_EvacShip_BP.AC_EvacShip_BP_C.OnShipLeaving__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

