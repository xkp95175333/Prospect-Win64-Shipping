// BlueprintGeneratedClass YPickup_Base_BP.YPickup_Base_BP_C
// Size: 0x48c (Inherited: 0x428)
struct AYPickup_Base_BP_C : AYPickupActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x428(0x08)
	struct UParticleSystemComponent* LootFeedbackVFX; // 0x430(0x08)
	float MeshScaleTimeline_Rotation_9B7B943048FDE1CBBA26CA93EBC05C27; // 0x438(0x04)
	float MeshScaleTimeline_Size_9B7B943048FDE1CBBA26CA93EBC05C27; // 0x43c(0x04)
	enum class ETimelineDirection MeshScaleTimeline__Direction_9B7B943048FDE1CBBA26CA93EBC05C27; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct UTimelineComponent* MeshScaleTimeline; // 0x448(0x08)
	struct FDataTableRowHandle SFXLanding; // 0x450(0x10)
	struct FDataTableRowHandle SFXLegendarySpawn; // 0x460(0x10)
	struct FDataTableRowHandle RarityDT; // 0x470(0x10)
	struct FVector DesiedMeshScale; // 0x480(0x0c)

	struct FColor GetDrawDebugLineColor(); // Function YPickup_Base_BP.YPickup_Base_BP_C.GetDrawDebugLineColor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct FVector GetDrawDebugLineTo(); // Function YPickup_Base_BP.YPickup_Base_BP_C.GetDrawDebugLineTo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct FString GetDebugDescription(); // Function YPickup_Base_BP.YPickup_Base_BP_C.GetDebugDescription // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OffsetMesh(); // Function YPickup_Base_BP.YPickup_Base_BP_C.OffsetMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetupLight(); // Function YPickup_Base_BP.YPickup_Base_BP_C.SetupLight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct FTransform GetPlayerForwardViewTransform(); // Function YPickup_Base_BP.YPickup_Base_BP_C.GetPlayerForwardViewTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void SetTrailRarityColor(enum class EYItemRarityType rarity); // Function YPickup_Base_BP.YPickup_Base_BP_C.SetTrailRarityColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void MeshScaleTimeline__FinishedFunc(); // Function YPickup_Base_BP.YPickup_Base_BP_C.MeshScaleTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1e02480
	void MeshScaleTimeline__UpdateFunc(); // Function YPickup_Base_BP.YPickup_Base_BP_C.MeshScaleTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1e02480
	void OnPlayLootSpawnEffects(enum class EYItemRarityType rarity); // Function YPickup_Base_BP.YPickup_Base_BP_C.OnPlayLootSpawnEffects // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__m_projectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult ImpactResult, struct FVector ImpactVelocity); // Function YPickup_Base_BP.YPickup_Base_BP_C.BndEvt__m_projectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void PlaySpawnSound(enum class EYItemRarityType Index); // Function YPickup_Base_BP.YPickup_Base_BP_C.PlaySpawnSound // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnMeshComponentAdded(); // Function YPickup_Base_BP.YPickup_Base_BP_C.BP_OnMeshComponentAdded // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_OnCollected(struct AYPlayerController* collectingPlayer, bool isItemPlacedInPlayerInventory); // Function YPickup_Base_BP.YPickup_Base_BP_C.BP_OnCollected // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_OnItemSet(); // Function YPickup_Base_BP.YPickup_Base_BP_C.BP_OnItemSet // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void AnimateMeshScale(); // Function YPickup_Base_BP.YPickup_Base_BP_C.AnimateMeshScale // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_YPickup_Base_BP(int32_t EntryPoint); // Function YPickup_Base_BP.YPickup_Base_BP_C.ExecuteUbergraph_YPickup_Base_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

