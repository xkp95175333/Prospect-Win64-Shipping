// BlueprintGeneratedClass PRO_ProjectileBounce_BP.PRO_ProjectileBounce_BP_C
// Size: 0x47c (Inherited: 0x398)
struct APRO_ProjectileBounce_BP_C : AYProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct FVector storePlayerActorLocation; // 0x3a0(0x0c)
	struct FVector storeTargetLocation; // 0x3ac(0x0c)
	struct FYAbilityActionBlinkData BlinkInitializationData; // 0x3b8(0xa8)
	struct FDataTableRowHandle LandingSfx; // 0x460(0x10)
	float minVelocityPlayLandSfx; // 0x470(0x04)
	float landingSfxCooldown; // 0x474(0x04)
	float nextLandingSfxPlayTime; // 0x478(0x04)

	void TeleportActorToBlinkPosition(struct AActor* actorToTeleport); // Function PRO_ProjectileBounce_BP.PRO_ProjectileBounce_BP_C.TeleportActorToBlinkPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__m_movementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult ImpactResult, struct FVector ImpactVelocity); // Function PRO_ProjectileBounce_BP.PRO_ProjectileBounce_BP_C.BndEvt__m_movementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_PRO_ProjectileBounce_BP(int32_t EntryPoint); // Function PRO_ProjectileBounce_BP.PRO_ProjectileBounce_BP_C.ExecuteUbergraph_PRO_ProjectileBounce_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

