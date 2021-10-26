// BlueprintGeneratedClass YLootContainer_Variation_BP.YLootContainer_Variation_BP_C
// Size: 0x4e1 (Inherited: 0x480)
struct AYLootContainer_Variation_BP_C : AYLootContainer_Base_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x488(0x08)
	struct UYAssetVariationComponent* YAssetVariation; // 0x490(0x08)
	struct FDataTableRowHandle LootContainerDefinition; // 0x498(0x10)
	struct UAnimSequenceBase* OpenAnimation; // 0x4a8(0x08)
	bool IsOpened; // 0x4b0(0x01)
	bool IsEmpty; // 0x4b1(0x01)
	char pad_4B2[0x6]; // 0x4b2(0x06)
	struct TArray<struct UMaterialInstanceDynamic*> DynamicMaterialInstances; // 0x4b8(0x10)
	struct FName MaterialParameterNameGleam; // 0x4c8(0x08)
	struct FDataTableRowHandle LootContainerDefinition_PlacedInWorld; // 0x4d0(0x10)
	enum class EYLootContainerTier LootTier; // 0x4e0(0x01)

	void PlayInteractionSound(); // Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.PlayInteractionSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnRep_IsEmpty(); // Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.OnRep_IsEmpty // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	int32_t GetMaxInventoryWeight(); // Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.GetMaxInventoryWeight // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetupLootContainer(); // Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.SetupLootContainer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnRep_IsOpened(); // Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.OnRep_IsOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct FText BP_GetInteractionAvailableMessage(int32_t numInputBindings); // Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.BP_GetInteractionAvailableMessage // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1e02480
	void OnRep_LootContainerDefinition(); // Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.OnRep_LootContainerDefinition // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetDefinitionRow(struct FYLootContainerDefinitionRow LootContainerRow); // Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.GetDefinitionRow // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UserConstructionScript(); // Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetupVisuals(); // Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.SetupVisuals // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__YAssetVariation_K2Node_ComponentBoundEvent_0_OnRowLoaded__DelegateSignature(); // Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.BndEvt__YAssetVariation_K2Node_ComponentBoundEvent_0_OnRowLoaded__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__m_objectInteractionComponent_K2Node_ComponentBoundEvent_2_OnPlayerInteractionCompleted__DelegateSignature(enum class EYInteractionType interactionType, struct AYPlayerController_Match* interactingPlayer, bool perfectInteraction); // Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.BndEvt__m_objectInteractionComponent_K2Node_ComponentBoundEvent_2_OnPlayerInteractionCompleted__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void UpdateOpenAnimationStatea(); // Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.UpdateOpenAnimationStatea // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void RefreshEmptyState(); // Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.RefreshEmptyState // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__m_inventoryComponent_K2Node_ComponentBoundEvent_5_YStateInventoryUpdatedSignature__DelegateSignature(struct UYStateInventoryComponent* stateInventoryComponent); // Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.BndEvt__m_inventoryComponent_K2Node_ComponentBoundEvent_5_YStateInventoryUpdatedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void UpdateEmptyState(); // Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.UpdateEmptyState // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void MulticastPlayInteractionSound(); // Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.MulticastPlayInteractionSound // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_YLootContainer_Variation_BP(int32_t EntryPoint); // Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.ExecuteUbergraph_YLootContainer_Variation_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

