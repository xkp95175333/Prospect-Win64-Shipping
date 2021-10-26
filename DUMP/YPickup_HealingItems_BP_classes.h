// BlueprintGeneratedClass YPickup_HealingItems_BP.YPickup_HealingItems_BP_C
// Size: 0x4d0 (Inherited: 0x48c)
struct AYPickup_HealingItems_BP_C : AYPickup_Base_BP_C {
	char pad_48C[0x4]; // 0x48c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct USkeletalMeshComponent* medicalItem; // 0x498(0x08)
	struct FTransform MedKitLocation; // 0x4a0(0x30)

	void BP_OnItemSet(); // Function YPickup_HealingItems_BP.YPickup_HealingItems_BP_C.BP_OnItemSet // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function YPickup_HealingItems_BP.YPickup_HealingItems_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_OnMeshComponentAdded(); // Function YPickup_HealingItems_BP.YPickup_HealingItems_BP_C.BP_OnMeshComponentAdded // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_YPickup_HealingItems_BP(int32_t EntryPoint); // Function YPickup_HealingItems_BP.YPickup_HealingItems_BP_C.ExecuteUbergraph_YPickup_HealingItems_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

