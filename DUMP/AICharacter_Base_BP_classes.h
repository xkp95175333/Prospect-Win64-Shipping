// BlueprintGeneratedClass AICharacter_Base_BP.AICharacter_Base_BP_C
// Size: 0x9e8 (Inherited: 0x7a0)
struct AAICharacter_Base_BP_C : AYAICharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7a0(0x08)
	struct USphereComponent* WeaponCollision; // 0x7a8(0x08)
	struct UAIHitReactionComponent_BP_C* AIHitReactionComponent_BP; // 0x7b0(0x08)
	struct UYFoliageAudioComponent* YFoliageAudio; // 0x7b8(0x08)
	struct UAI_MeleeAttackComponent_BP_C* MeleeAttackComponent_BP; // 0x7c0(0x08)
	struct UYFootstepComponent* YFootstep; // 0x7c8(0x08)
	struct UYPlayerRenderTargetVfxMovementComponent_BP_C* YPlayerRenderTargetVfxMovementComponent_BP; // 0x7d0(0x08)
	struct UAIAttackComponent_BP_C* AIAttackComponent_BP; // 0x7d8(0x08)
	struct UParticleSystemComponent* buffEffect; // 0x7e0(0x08)
	struct UAudioComponent* AudioStateComponent; // 0x7e8(0x08)
	float Timeline_Desaturation_0_0_1_0_2F5C408C423463E2A9D8D797D39FEDCA; // 0x7f0(0x04)
	enum class ETimelineDirection Timeline_Desaturation__Direction_2F5C408C423463E2A9D8D797D39FEDCA; // 0x7f4(0x01)
	char pad_7F5[0x3]; // 0x7f5(0x03)
	struct UTimelineComponent* Timeline_Desaturation; // 0x7f8(0x08)
	struct UParticleSystemComponent* DamageOverTime_PS; // 0x800(0x08)
	float LastTimeTriggeredBuffAllies; // 0x808(0x04)
	float LastTimeTriggeredSummonAllies; // 0x80c(0x04)
	float SummonStartTimestamp; // 0x810(0x04)
	bool ShowInstigatorBuffEffect; // 0x814(0x01)
	char pad_815[0x3]; // 0x815(0x03)
	int32_t SuccessfulSummonCount; // 0x818(0x04)
	bool ShowBuffEffect; // 0x81c(0x01)
	bool UseMasterBehavior; // 0x81d(0x01)
	char pad_81E[0x2]; // 0x81e(0x02)
	struct UBehaviorTree* CombatBehavior; // 0x820(0x08)
	struct AActor* EvaluatedTarget; // 0x828(0x08)
	struct TMap<struct AActor*, struct FYAITargetInfo> PerceivedTargets; // 0x830(0x50)
	struct UPrimitiveComponent* NewVar_1; // 0x880(0x08)
	struct UPrimitiveComponent* NewVar_2; // 0x888(0x08)
	int32_t OutlineColorValue; // 0x890(0x04)
	char DummyVariable- Delete Me; // 0x894(0x01)
	char pad_895[0x3]; // 0x895(0x03)
	struct UMaterialInstance* UpdatedMaterial; // 0x898(0x08)
	struct TArray<struct UMaterialInstance*> TempMaterialArray_Updated; // 0x8a0(0x10)
	struct UMaterialInstance* PowerLevel_2; // 0x8b0(0x08)
	struct TArray<struct UMaterialInstance*> TempMaterialArray_P1; // 0x8b8(0x10)
	struct UMaterialInstance* PowerLevel_3; // 0x8c8(0x08)
	struct TArray<struct UMaterialInstance*> TempMaterialArray_P2; // 0x8d0(0x10)
	struct UMaterialInstance* Hunt; // 0x8e0(0x08)
	struct TArray<struct UMaterialInstance*> TempMaterialArray_Hunt; // 0x8e8(0x10)
	struct UMaterialInstance* Alpha; // 0x8f8(0x08)
	struct TArray<struct UMaterialInstance*> TempMaterialArray_Alpha; // 0x900(0x10)
	struct UMaterialInstance* Weak; // 0x910(0x08)
	struct TArray<struct UMaterialInstance*> TempMaterialArray_Weak; // 0x918(0x10)
	struct UMaterialInstance* Season; // 0x928(0x08)
	struct TArray<struct UMaterialInstance*> TempMaterialArray_Season; // 0x930(0x10)
	enum class EYAISpawnContexts IdentifiedContext; // 0x940(0x01)
	char pad_941[0x7]; // 0x941(0x07)
	struct UParticleSystem* UpdatedFX; // 0x948(0x08)
	struct UParticleSystem* Fx_Stormy; // 0x950(0x08)
	struct UParticleSystem* Fx_Thunderous; // 0x958(0x08)
	struct UParticleSystem* Fx_Hunt; // 0x960(0x08)
	struct UParticleSystem* Fx_Weak; // 0x968(0x08)
	struct UParticleSystem* Fx_Alpha; // 0x970(0x08)
	struct UParticleSystem* Fx_Season; // 0x978(0x08)
	struct UParticleSystemComponent* Ref_UpdatedFX_PSC; // 0x980(0x08)
	struct FRotator DefaultRotationRate; // 0x988(0x0c)
	struct FVector From Direction; // 0x994(0x0c)
	struct FName Bone Name Hit; // 0x9a0(0x08)
	struct FName DamageOrigin; // 0x9a8(0x08)
	struct TArray<struct FName> ExcludedDamageOriginArray; // 0x9b0(0x10)
	float VelocityMultiplier; // 0x9c0(0x04)
	char pad_9C4[0x4]; // 0x9c4(0x04)
	struct TArray<struct FName> ExplosivesArray; // 0x9c8(0x10)
	float PhysImpulseMultiplier; // 0x9d8(0x04)
	struct FVector PhysicsImpulse; // 0x9dc(0x0c)

	void ResetDefaultRotationRate(); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.ResetDefaultRotationRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void DesaturateMaterialOnDeath(float TimingControl); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.DesaturateMaterialOnDeath // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetContextMaterial(enum class EYAISpawnContexts Context); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.SetContextMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetYAICtrl_Base(struct AAICtrl_Base_BP_C* AsAICtrl Base BP); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.GetYAICtrl_Base // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void Timeline_Desaturation__FinishedFunc(); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.Timeline_Desaturation__FinishedFunc // (BlueprintEvent) // @ game+0x1e02480
	void Timeline_Desaturation__UpdateFunc(); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.Timeline_Desaturation__UpdateFunc // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__m_aiDataComponent_K2Node_ComponentBoundEvent_0_OnAIStateChangedSignature__DelegateSignature(enum class EYAIState oldState, enum class EYAIState currentState); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.BndEvt__m_aiDataComponent_K2Node_ComponentBoundEvent_0_OnAIStateChangedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void MulticastPlayBarkAudio(bool UseIdleBark); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.MulticastPlayBarkAudio // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDotStateChanged_Event(bool dotState); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.OnDotStateChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void FinishBuff(); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.FinishBuff // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StartBuffedEffect(); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.StartBuffedEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void CustomEvent_1(); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StartBuffWarmup(); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.StartBuffWarmup // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StartBuffInterrupt(); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.StartBuffInterrupt // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void disableBuffVFXWhenHowlerDies(struct UYHealthComponent* healthComponent, struct AActor* Instigator); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.disableBuffVFXWhenHowlerDies // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void FinishSummon(); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.FinishSummon // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StartSummon(); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.StartSummon // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void InterruptSummon(); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.InterruptSummon // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void CustomEvent_2(bool dotState); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_1_OnDeathDelegate__DelegateSignature(struct FYDealtDamageData damageData); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_1_OnDeathDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void CustomEvent_3(); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.CustomEvent_3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnProjectileSpawned(); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.OnProjectileSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_2_OnDeathDelegate__DelegateSignature(struct UYCharacterDeathComponent* deathComponent); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_2_OnDeathDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void CE_SetStencilValueOnAllRelevantMeshes(bool RenderInStencil); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.CE_SetStencilValueOnAllRelevantMeshes // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void CE_DisableOutline(); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.CE_DisableOutline // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void CE_ExecuteOutlineFromPhaseChange(); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.CE_ExecuteOutlineFromPhaseChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__m_damageComponent_K2Node_ComponentBoundEvent_1_YTakeDamageEvent__DelegateSignature(struct FYDealtDamageData Data); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.BndEvt__m_damageComponent_K2Node_ComponentBoundEvent_1_YTakeDamageEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_AICharacter_Base_BP(int32_t EntryPoint); // Function AICharacter_Base_BP.AICharacter_Base_BP_C.ExecuteUbergraph_AICharacter_Base_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

