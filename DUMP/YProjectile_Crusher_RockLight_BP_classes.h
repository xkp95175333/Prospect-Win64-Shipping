// BlueprintGeneratedClass YProjectile_Crusher_RockLight_BP.YProjectile_Crusher_RockLight_BP_C
// Size: 0x3b1 (Inherited: 0x3a0)
struct AYProjectile_Crusher_RockLight_BP_C : AYProjectile_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x3a8(0x08)
	bool hasBeenThrown; // 0x3b0(0x01)

	void ReceiveTick(float DeltaSeconds); // Function YProjectile_Crusher_RockLight_BP.YProjectile_Crusher_RockLight_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_OnInitialized(); // Function YProjectile_Crusher_RockLight_BP.YProjectile_Crusher_RockLight_BP_C.BP_OnInitialized // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_YProjectile_Crusher_RockLight_BP(int32_t EntryPoint); // Function YProjectile_Crusher_RockLight_BP.YProjectile_Crusher_RockLight_BP_C.ExecuteUbergraph_YProjectile_Crusher_RockLight_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

