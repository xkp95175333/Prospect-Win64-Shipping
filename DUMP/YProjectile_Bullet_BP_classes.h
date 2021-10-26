// BlueprintGeneratedClass YProjectile_Bullet_BP.YProjectile_Bullet_BP_C
// Size: 0x428 (Inherited: 0x398)
struct AYProjectile_Bullet_BP_C : AYProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct UStaticMeshComponent* tracer_MESHCOMP; // 0x3a0(0x08)
	float DeltaAccumulated; // 0x3a8(0x04)
	float DeltaCurrent; // 0x3ac(0x04)
	float PositionInterpolationSpeed; // 0x3b0(0x04)
	struct FVector MuzzleWorldPosition; // 0x3b4(0x0c)
	float ScalingInterpolationSpeed; // 0x3c0(0x04)
	char pad_3C4[0x4]; // 0x3c4(0x04)
	struct UParticleSystemComponent* particle_COMP; // 0x3c8(0x08)
	struct APlayerController* LocalPlayerController; // 0x3d0(0x08)
	float DistanceScaling_distance; // 0x3d8(0x04)
	struct FVector TracerScale_near; // 0x3dc(0x0c)
	struct FVector TracerScale_far; // 0x3e8(0x0c)
	struct FVector TracerScale_intial; // 0x3f4(0x0c)
	bool SpawnSmokeTrail; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct UParticleSystem* SmokeTrailTemplate; // 0x408(0x08)
	struct UMaterialInterface* TracerMaterial; // 0x410(0x08)
	bool hasFXCategoryProjPS; // 0x418(0x01)
	char pad_419[0x3]; // 0x419(0x03)
	struct FVector LocalPlayerCameraLocation; // 0x41c(0x0c)

	void ReceiveBeginPlay(); // Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void triggerEvent_onDestroyed(struct AActor* DestroyedActor); // Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.triggerEvent_onDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveTick(float DeltaSeconds); // Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__m_movementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(struct FHitResult ImpactResult); // Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.BndEvt__m_movementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void UpdateTracer(); // Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.UpdateTracer // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetLocalController(); // Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.GetLocalController // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void AdjustSmokeTrailParticleSystem(); // Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.AdjustSmokeTrailParticleSystem // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateTracerLocation(); // Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.UpdateTracerLocation // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateTracerWorldScale(); // Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.UpdateTracerWorldScale // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateTraceRotation(); // Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.UpdateTraceRotation // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_YProjectile_Bullet_BP(int32_t EntryPoint); // Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.ExecuteUbergraph_YProjectile_Bullet_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

