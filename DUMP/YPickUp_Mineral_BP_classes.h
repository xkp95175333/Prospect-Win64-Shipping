// BlueprintGeneratedClass YPickUp_Mineral_BP.YPickUp_Mineral_BP_C
// Size: 0x498 (Inherited: 0x48c)
struct AYPickUp_Mineral_BP_C : AYPickup_Base_BP_C {
	char pad_48C[0x4]; // 0x48c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)

	void TryPlaySpecialPickUpAnimation(struct AYPlayerController* PlayerController); // Function YPickUp_Mineral_BP.YPickUp_Mineral_BP_C.TryPlaySpecialPickUpAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void RetrieveStaticMeshVisualization(struct UStaticMesh* AsStatic Mesh); // Function YPickUp_Mineral_BP.YPickUp_Mineral_BP_C.RetrieveStaticMeshVisualization // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnCollected(struct AYPlayerController* collectingPlayer, bool isItemPlacedInPlayerInventory); // Function YPickUp_Mineral_BP.YPickUp_Mineral_BP_C.BP_OnCollected // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_YPickUp_Mineral_BP(int32_t EntryPoint); // Function YPickUp_Mineral_BP.YPickUp_Mineral_BP_C.ExecuteUbergraph_YPickUp_Mineral_BP // (Final|UbergraphFunction) // @ game+0x1e02480
};

