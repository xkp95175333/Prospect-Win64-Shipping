// BlueprintGeneratedClass AIAttackComponent_BP.AIAttackComponent_BP_C
// Size: 0x138 (Inherited: 0x120)
struct UAIAttackComponent_BP_C : UYAIAttackComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x120(0x08)
	struct UMeshComponent* AttachFXComponentOverride; // 0x128(0x08)
	struct AYAICharacter* AICharOwner; // 0x130(0x08)

	void PlayMuzzleFX(); // Function AIAttackComponent_BP.AIAttackComponent_BP_C.PlayMuzzleFX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnFireTansport(); // Function AIAttackComponent_BP.AIAttackComponent_BP_C.BP_OnFireTansport // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function AIAttackComponent_BP.AIAttackComponent_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_AIAttackComponent_BP(int32_t EntryPoint); // Function AIAttackComponent_BP.AIAttackComponent_BP_C.ExecuteUbergraph_AIAttackComponent_BP // (Final|UbergraphFunction) // @ game+0x1e02480
};

