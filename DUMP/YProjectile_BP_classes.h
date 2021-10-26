// BlueprintGeneratedClass YProjectile_BP.YProjectile_BP_C
// Size: 0x3a0 (Inherited: 0x398)
struct AYProjectile_BP_C : AYProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)

	void ReceiveBeginPlay(); // Function YProjectile_BP.YProjectile_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void triggerEvent_onProjectileStopped(struct FHitResult ImpactResult); // Function YProjectile_BP.YProjectile_BP_C.triggerEvent_onProjectileStopped // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void triggerEvent_onDestroyed(struct AActor* DestroyedActor); // Function YProjectile_BP.YProjectile_BP_C.triggerEvent_onDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_YProjectile_BP(int32_t EntryPoint); // Function YProjectile_BP.YProjectile_BP_C.ExecuteUbergraph_YProjectile_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

