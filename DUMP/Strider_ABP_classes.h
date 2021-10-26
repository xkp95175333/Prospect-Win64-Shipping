// AnimBlueprintGeneratedClass Strider_ABP.Strider_ABP_C
// Size: 0x18b0 (Inherited: 0x2c0)
struct UStrider_ABP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_PowerIK_Ground AnimGraphNode_PowerIK_Ground; // 0x2f8(0x390)
	char pad_688[0x8]; // 0x688(0x08)
	struct FAnimNode_LookAt AnimGraphNode_LookAt; // 0x690(0x1b0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x840(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x860(0x20)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x880(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x8a8(0xa0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x948(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0xaa0(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0xac8(0x28)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xaf0(0x20)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0xb10(0xa0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0xbb0(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xbf8(0x158)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0xd50(0xa0)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose_2; // 0xdf0(0x18)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xe08(0x20)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xe28(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0xe50(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0xe78(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0xea0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0xec8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0xef0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xf18(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0xf40(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0xfc0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xff0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x1070(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0x10a0(0xe8)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_2; // 0x1188(0xb0)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x1238(0xe8)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1320(0xe8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x1408(0x30)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x1438(0xb0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x14e8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1568(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x15e8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1618(0xb0)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x16c8(0x18)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x16e0(0xc0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x17a0(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x17c8(0xa0)
	float Speed; // 0x1868(0x04)
	float Direction; // 0x186c(0x04)
	struct AYAICharacter* CharacterAIOwner; // 0x1870(0x08)
	struct UAnimMontage* DeathMontage; // 0x1878(0x08)
	struct FDataTableRowHandle TurnAnimationRow; // 0x1880(0x10)
	char aiState; // 0x1890(0x01)
	bool LookAtBool; // 0x1891(0x01)
	char pad_1892[0x2]; // 0x1892(0x02)
	struct FVector LookAtTarget; // 0x1894(0x0c)
	bool Is Dedicated Server; // 0x18a0(0x01)
	char pad_18A1[0x3]; // 0x18a1(0x03)
	float LookAtDistance; // 0x18a4(0x04)
	struct FName PhysBaseBone; // 0x18a8(0x08)

	struct UAnimMontage* GetGoToRestAnimationToPlay(); // Function Strider_ABP.Strider_ABP_C.GetGoToRestAnimationToPlay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UAnimMontage* GetOutOfRestAnimationToPlay(); // Function Strider_ABP.Strider_ABP_C.GetOutOfRestAnimationToPlay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UAnimMontage* GetScanAnimation(); // Function Strider_ABP.Strider_ABP_C.GetScanAnimation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UAnimMontage* GetBuffAnimationToPlay(); // Function Strider_ABP.Strider_ABP_C.GetBuffAnimationToPlay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UAnimMontage* GetBuffOutAnimationToPlay(); // Function Strider_ABP.Strider_ABP_C.GetBuffOutAnimationToPlay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UAnimMontage* GetDeathAnimationToPlay(struct FYDealtDamageData deathHitInfo); // Function Strider_ABP.Strider_ABP_C.GetDeathAnimationToPlay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UAnimMontage* GetDodgeAnimationToPlay(float maxAllowedDodgeDistance, bool isToRight); // Function Strider_ABP.Strider_ABP_C.GetDodgeAnimationToPlay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UAnimMontage* GetExplosionAnimationToPlay(); // Function Strider_ABP.Strider_ABP_C.GetExplosionAnimationToPlay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UAnimMontage* GetInterruptBuffAnimationToPlay(); // Function Strider_ABP.Strider_ABP_C.GetInterruptBuffAnimationToPlay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UAnimMontage* GetInterruptSummonAnimationToPlay(); // Function Strider_ABP.Strider_ABP_C.GetInterruptSummonAnimationToPlay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UAnimMontage* GetLeapForwardAnimationToPlay(); // Function Strider_ABP.Strider_ABP_C.GetLeapForwardAnimationToPlay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UAnimMontage* GetMeleeAttackAnimationToPlay(float distanceToTarget, int32_t meleeArrayIndex, struct FYAIMeleeAttackDefinition meleeAttack); // Function Strider_ABP.Strider_ABP_C.GetMeleeAttackAnimationToPlay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UAnimMontage* GetMeleeDodgeBackAnimationToPlay(); // Function Strider_ABP.Strider_ABP_C.GetMeleeDodgeBackAnimationToPlay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UAnimMontage* GetRangedAttackAnimationToPlay(); // Function Strider_ABP.Strider_ABP_C.GetRangedAttackAnimationToPlay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UAnimMontage* GetReloadAnimationToPlay(); // Function Strider_ABP.Strider_ABP_C.GetReloadAnimationToPlay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UAnimMontage* GetSnipedAnimationToPlay(); // Function Strider_ABP.Strider_ABP_C.GetSnipedAnimationToPlay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UAnimMontage* GetSpawnAnimationToPlay(); // Function Strider_ABP.Strider_ABP_C.GetSpawnAnimationToPlay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UAnimMontage* GetSummonAnimationToPlay(); // Function Strider_ABP.Strider_ABP_C.GetSummonAnimationToPlay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UAnimMontage* GetSummonOutAnimationToPlay(); // Function Strider_ABP.Strider_ABP_C.GetSummonOutAnimationToPlay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UAnimMontage* GetTauntAnimationToPlay(); // Function Strider_ABP.Strider_ABP_C.GetTauntAnimationToPlay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct FYAIMontagePlayInfo GetTurnAnimationToPlay(float desiredTurnAngle); // Function Strider_ABP.Strider_ABP_C.GetTurnAnimationToPlay // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	bool OnAttackPhaseStarted(struct UYAIAttackComponent* attackComponent); // Function Strider_ABP.Strider_ABP_C.OnAttackPhaseStarted // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	bool OnRangedAttackCancelled(); // Function Strider_ABP.Strider_ABP_C.OnRangedAttackCancelled // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	bool OnRangedAttackFire(struct UYAIAttackComponent* attackComponent); // Function Strider_ABP.Strider_ABP_C.OnRangedAttackFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UAnimMontage* OnStabilityThresholdReached(struct FYDealtDamageData damageInfo, struct FName stabilityIdentifier, struct FName currentAIActionContext, float yawRotationGoalWorldSpace, bool canBeInterruptedByDodge); // Function Strider_ABP.Strider_ABP_C.OnStabilityThresholdReached // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	bool TriggerFlinchAnimation(struct FYDealtDamageData HitInfo); // Function Strider_ABP.Strider_ABP_C.TriggerFlinchAnimation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void AnimGraph(struct FPoseLink AnimGraph); // Function Strider_ABP.Strider_ABP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_EFD3DDD241BA26BB4107AD828B8490FB(); // Function Strider_ABP.Strider_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_EFD3DDD241BA26BB4107AD828B8490FB // (BlueprintEvent) // @ game+0x1e02480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_B9F965ED4FFE1492EE429C91BFFDD5A5(); // Function Strider_ABP.Strider_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_B9F965ED4FFE1492EE429C91BFFDD5A5 // (BlueprintEvent) // @ game+0x1e02480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_94761E8C4C12EFC71D299CBA81052458(); // Function Strider_ABP.Strider_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_94761E8C4C12EFC71D299CBA81052458 // (BlueprintEvent) // @ game+0x1e02480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_92CF45E84502C80827C9838450CB2EAA(); // Function Strider_ABP.Strider_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_92CF45E84502C80827C9838450CB2EAA // (BlueprintEvent) // @ game+0x1e02480
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Strider_ABP.Strider_ABP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BlueprintInitializeAnimation(); // Function Strider_ABP.Strider_ABP_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void PlayAnimationMontage(struct FYAIMontagePlayInfo montageInfo); // Function Strider_ABP.Strider_ABP_C.PlayAnimationMontage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BlueprintBeginPlay(); // Function Strider_ABP.Strider_ABP_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_84F239574E7C37D564723B83E1B94E64(); // Function Strider_ABP.Strider_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_84F239574E7C37D564723B83E1B94E64 // (BlueprintEvent) // @ game+0x1e02480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_53C1DADB4FA61A004B7ECCAEEBEF6D32(); // Function Strider_ABP.Strider_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_53C1DADB4FA61A004B7ECCAEEBEF6D32 // (BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_Strider_ABP(int32_t EntryPoint); // Function Strider_ABP.Strider_ABP_C.ExecuteUbergraph_Strider_ABP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

