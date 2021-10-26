// BlueprintGeneratedClass YBagContainer_BP.YBagContainer_BP_C
// Size: 0x48d (Inherited: 0x480)
struct AYBagContainer_BP_C : AYLootContainer_Base_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	float LifeTime; // 0x488(0x04)
	bool OffsetEnabled; // 0x48c(0x01)

	int32_t GetMaxInventoryWeight(); // Function YBagContainer_BP.YBagContainer_BP_C.GetMaxInventoryWeight // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OffsetMesh(); // Function YBagContainer_BP.YBagContainer_BP_C.OffsetMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnContainerClosedCallback(); // Function YBagContainer_BP.YBagContainer_BP_C.OnContainerClosedCallback // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnContainerOpenedCallback(); // Function YBagContainer_BP.YBagContainer_BP_C.OnContainerOpenedCallback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function YBagContainer_BP.YBagContainer_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_OnItemSet(); // Function YBagContainer_BP.YBagContainer_BP_C.BP_OnItemSet // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_OnMeshComponentAdded(); // Function YBagContainer_BP.YBagContainer_BP_C.BP_OnMeshComponentAdded // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__YBagContainer_BP_m_inventoryComponent_K2Node_ComponentBoundEvent_0_YStateInventoryUpdatedSignature__DelegateSignature(struct UYStateInventoryComponent* stateInventoryComponent); // Function YBagContainer_BP.YBagContainer_BP_C.BndEvt__YBagContainer_BP_m_inventoryComponent_K2Node_ComponentBoundEvent_0_YStateInventoryUpdatedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_YBagContainer_BP(int32_t EntryPoint); // Function YBagContainer_BP.YBagContainer_BP_C.ExecuteUbergraph_YBagContainer_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

