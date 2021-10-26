// BlueprintGeneratedClass PRO_PlayerCharacter.PRO_PlayerCharacter_C
// Size: 0x8bc (Inherited: 0x6e0)
struct APRO_PlayerCharacter_C : AYPlayerCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6e0(0x08)
	struct UPlayerDBNOComponent_BP_C* PlayerDBNOComponent_BP; // 0x6e8(0x08)
	struct UPlayer_InventoryAudioComponent_BP_C* Player_InventoryAudioComponent_BP; // 0x6f0(0x08)
	struct UTakeDamageBloodDecalComponent_BP_C* TakeDamageBloodDecalComponent_BP; // 0x6f8(0x08)
	struct UWeaponScopeComponent_BP_C* WeaponScopeComponent_BP; // 0x700(0x08)
	struct UFlinchesComponent_BP_C* FlinchesComponent_BP; // 0x708(0x08)
	struct UYPlayerCharacterEffortsComponent_BP_C* YPlayerCharacterEffortsComponent_BP; // 0x710(0x08)
	struct UHelmetGoggleComponent_BP_C* HelmetGoggleComponent_BP; // 0x718(0x08)
	struct UTacticalFlashLightComponent_BP_C* TacticalFlashLightComponent_BP; // 0x720(0x08)
	struct UPlayer_MeleeAttackComponent_BP_C* Player_MeleeAttackComponent_BP; // 0x728(0x08)
	struct UPlayerCarryingComponent_BP_C* PlayerCarryingComponent_BP; // 0x730(0x08)
	struct UInteractionAnimComponent_BP_C* InteractionAnimComponent_BP; // 0x738(0x08)
	struct UYCharacterScopeGlintComponent_BP_C* ScopeGlintComponent_BP; // 0x740(0x08)
	struct UAudioComponent* SFX_PlayerEfforts_Stamina; // 0x748(0x08)
	struct UYPlayerTriggerAISenseComponent_BP_C* YPlayerTriggerAISenseComponent_BP; // 0x750(0x08)
	struct UYPlayerConsumableComponent_BP_C* YPlayerConsumableComponent_BP; // 0x758(0x08)
	struct UParticleSystemComponent* FX_PlayedEvacuateCharging_PS; // 0x760(0x08)
	struct UYPingableComponent* YPingable; // 0x768(0x08)
	struct UPlayerCharacterOutlineComponent_C* PlayerCharacterOutlineComponent; // 0x770(0x08)
	struct UYPlayerRenderTargetVfxMovementComponent_BP_C* YPlayerRenderTargetVfxMovementComponent_BP; // 0x778(0x08)
	struct UYPlayerSFXComponent_BP_C* YPlayerSFXComponent_BP; // 0x780(0x08)
	struct UPlayerCharacterCombatAwarenessComponent_BP_C* PlayerCharacterCombatAwarenessComponent_BP; // 0x788(0x08)
	struct UYPlayerVFXComponent_BP_C* PRO_PlayerCharacter_VFXComponent; // 0x790(0x08)
	struct USkeletalMeshComponent* DBNO_FoamMesh_SK; // 0x798(0x08)
	struct UYPlayerEscapeComponent_BP_C* YPlayerEscapeComponent_BP; // 0x7a0(0x08)
	struct UYPlayerAnimEvalComponent_BP_C* YPlayerAnimEvalComponent_BP; // 0x7a8(0x08)
	struct UYAIPerceptionStimuliSourceComp* YAIPerceptionStimuliSourceComp; // 0x7b0(0x08)
	struct UParticleSystemComponent* Trail; // 0x7b8(0x08)
	struct UPostProcessComponent* PostProcess; // 0x7c0(0x08)
	float STE_ChargeVFX_TL_NewTrack_0_E03AF13C4D6D893B0E8DC58C085F8278; // 0x7c8(0x04)
	enum class ETimelineDirection STE_ChargeVFX_TL__Direction_E03AF13C4D6D893B0E8DC58C085F8278; // 0x7cc(0x01)
	char pad_7CD[0x3]; // 0x7cd(0x03)
	struct UTimelineComponent* STE_ChargeVFX_TL; // 0x7d0(0x08)
	bool IsTagged; // 0x7d8(0x01)
	char pad_7D9[0x3]; // 0x7d9(0x03)
	float SlowdownResetTime; // 0x7dc(0x04)
	float SlowdownMaxSpeed; // 0x7e0(0x04)
	float SlowdownDuration; // 0x7e4(0x04)
	float SlowdownImmunityThreshold; // 0x7e8(0x04)
	bool IsSlowdown; // 0x7ec(0x01)
	char pad_7ED[0x3]; // 0x7ed(0x03)
	struct FGuid AddedSlowdown; // 0x7f0(0x10)
	struct FGuid AttributeModifierMovement; // 0x800(0x10)
	bool IsHOT; // 0x810(0x01)
	char pad_811[0x3]; // 0x811(0x03)
	struct FGuid AddedHOT; // 0x814(0x10)
	char pad_824[0x4]; // 0x824(0x04)
	struct AYPlayerController* YPlayerCtrl; // 0x828(0x08)
	struct UParticleSystemComponent* DamageOverTime_PS; // 0x830(0x08)
	struct UTextRenderComponent* BugReportingTextComponent; // 0x838(0x08)
	bool IsCharacterNinja; // 0x840(0x01)
	bool IsSlowdownImmune; // 0x841(0x01)
	char pad_842[0x2]; // 0x842(0x02)
	float SlowdownBuildUp; // 0x844(0x04)
	float LastDamageTaken; // 0x848(0x04)
	char pad_84C[0x4]; // 0x84c(0x04)
	struct FTimerHandle TimerHandleClearSlowdown; // 0x850(0x08)
	struct UMaterialInstanceDynamic* EoM_Post_MID; // 0x858(0x08)
	struct AMapAreaLocation_BP_C* LocationConditionChallengeDBNO; // 0x860(0x08)
	float PvPTargetResetTime; // 0x868(0x04)
	char pad_86C[0x4]; // 0x86c(0x04)
	struct AActor* DamageCauser; // 0x870(0x08)
	int32_t MaxCreditsToDropOnDeathOrRecall; // 0x878(0x04)
	char pad_87C[0x4]; // 0x87c(0x04)
	struct FDataTableRowHandle VO_RecallChargeLost; // 0x880(0x10)
	struct FDataTableRowHandle LeanRowHandle; // 0x890(0x10)
	struct FVector LastDamageDirection; // 0x8a0(0x0c)
	struct FVector LastDamageHitLocation; // 0x8ac(0x0c)
	float PawnCleanUpDelay; // 0x8b8(0x04)

	struct FYImpactEffectReceiverData GetCustomImpactEffectData(); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.GetCustomImpactEffectData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetWeaponFirstPersonMesh(struct UYSkeletalMeshComponentFOV* m_weaponMesh); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.GetWeaponFirstPersonMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void OnLeanDirectionChanged(); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnLeanDirectionChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PlayCameraShakeOnOwningPlayer(struct UCameraShakeBase* Shake); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.PlayCameraShakeOnOwningPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnRep_IsHOT(); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnRep_IsHOT // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnRep_IsSlowdown(); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnRep_IsSlowdown // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnRep_IsTagged(); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnRep_IsTagged // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnRep_IsCloaked(); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnRep_IsCloaked // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetAnimBlueprint(struct UAnimInstance* AnimInstance); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.GetAnimBlueprint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void SwitchToThirdPerson(); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.SwitchToThirdPerson // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void STE_ChargeVFX_TL__FinishedFunc(); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.STE_ChargeVFX_TL__FinishedFunc // (BlueprintEvent) // @ game+0x1e02480
	void STE_ChargeVFX_TL__UpdateFunc(); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.STE_ChargeVFX_TL__UpdateFunc // (BlueprintEvent) // @ game+0x1e02480
	void InpActEvt_ToggleNightVision_K2Node_InputActionEvent_2(struct FKey Key); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.InpActEvt_ToggleNightVision_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x1e02480
	void InpActEvt_ToggleLight_K2Node_InputActionEvent_1(struct FKey Key); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.InpActEvt_ToggleLight_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void Server_EH_Trail(float Duration); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.Server_EH_Trail // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Server_EH_Slowdown(bool IsSticky); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.Server_EH_Slowdown // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Server_EH_HOT(bool IsInRange); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.Server_EH_HOT // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void CloakStateChanged(bool cloakState); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.CloakStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnEmptyHealth(struct UYHealthComponent* healthComponent, struct AActor* Instigator); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnEmptyHealth // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnEndProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnEndProne // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnStartProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnStartProne // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void UpdatePhysMaterials(); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.UpdatePhysMaterials // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_5_OnDeathDelegate__DelegateSignature(struct UYCharacterDeathComponent* deathComponent); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_5_OnDeathDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void OnPerkAdded(struct FYPerk perk); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnPerkAdded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void HookUpReportingBugVisualization(); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.HookUpReportingBugVisualization // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnPerkDeactivated(struct FYPerk perk); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnPerkDeactivated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__m_damageComponent_K2Node_ComponentBoundEvent_1_YTakeDamageEvent__DelegateSignature(struct FYDealtDamageData Data); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__m_damageComponent_K2Node_ComponentBoundEvent_1_YTakeDamageEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void OnFinishedDamage(); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnFinishedDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnVehicleEnter(); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnVehicleEnter // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnVehicleExit(); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnVehicleExit // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__m_stateComponent_K2Node_ComponentBoundEvent_8_YAnyStateChanged__DelegateSignature(enum class EYStateChangeType stateChangeType); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__m_stateComponent_K2Node_ComponentBoundEvent_8_YAnyStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void DBNO_Activate_Server(); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.DBNO_Activate_Server // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void DBNO_Deactivate_Server(bool interupted); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.DBNO_Deactivate_Server // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateControllerYawRotation(); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.UpdateControllerYawRotation // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StarTrekEvac_FX_Start(float Duration); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.StarTrekEvac_FX_Start // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StarTrekEvac_FX_Stop(); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.StarTrekEvac_FX_Stop // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDeath_Implemented(); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnDeath_Implemented // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__m_interactionComponent_K2Node_ComponentBoundEvent_3_OnPlayerInteractionStarted__DelegateSignature(enum class EYInteractionType interactionType, struct AYPlayerController_Match* interactingPlayer); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__m_interactionComponent_K2Node_ComponentBoundEvent_3_OnPlayerInteractionStarted__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__m_characterCustomizationComponent_K2Node_ComponentBoundEvent_4_YOnMeshInitialized__DelegateSignature(); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__m_characterCustomizationComponent_K2Node_ComponentBoundEvent_4_YOnMeshInitialized__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__m_armorComponent_K2Node_ComponentBoundEvent_2_YArmorComponentUpdatedSignature__DelegateSignature(struct UYArmorComponent* armorComponent); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__m_armorComponent_K2Node_ComponentBoundEvent_2_YArmorComponentUpdatedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_OnDeath_Event_1(struct UYCharacterDeathComponent* deathComponent); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BP_OnDeath_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_PRO_PlayerCharacter(int32_t EntryPoint); // Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.ExecuteUbergraph_PRO_PlayerCharacter // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

