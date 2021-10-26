// BlueprintGeneratedClass AIHitReactionComponent_BP.AIHitReactionComponent_BP_C
// Size: 0x250 (Inherited: 0xb0)
struct UAIHitReactionComponent_BP_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct TMap<struct FName, float> BonePhysBlendTimeMap; // 0xb8(0x50)
	struct UCurveFloat* PhysicsBlendOutCurve; // 0x108(0x08)
	struct AYAICharacter* OwningChar; // 0x110(0x08)
	struct FName Bone Name Hit; // 0x118(0x08)
	struct FVector From Direction; // 0x120(0x0c)
	float PhysImpulseMultiplier; // 0x12c(0x04)
	struct FVector PhysicsImpulse; // 0x130(0x0c)
	bool Allow Physics; // 0x13c(0x01)
	char pad_13D[0x3]; // 0x13d(0x03)
	struct TArray<struct FName> ExcludedBones; // 0x140(0x10)
	struct FYDealtDamageData CurrentDamageData; // 0x150(0x100)

	void BlendPhysicsForBone(struct FName BoneName, float TargetBlendTime); // Function AIHitReactionComponent_BP.AIHitReactionComponent_BP_C.BlendPhysicsForBone // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdatePhysicsBlendWeights(float DeltaSeconds); // Function AIHitReactionComponent_BP.AIHitReactionComponent_BP_C.UpdatePhysicsBlendWeights // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function AIHitReactionComponent_BP.AIHitReactionComponent_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnTakeDamage(struct FYDealtDamageData Data); // Function AIHitReactionComponent_BP.AIHitReactionComponent_BP_C.OnTakeDamage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveTick(float DeltaSeconds); // Function AIHitReactionComponent_BP.AIHitReactionComponent_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_AIHitReactionComponent_BP(int32_t EntryPoint); // Function AIHitReactionComponent_BP.AIHitReactionComponent_BP_C.ExecuteUbergraph_AIHitReactionComponent_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

