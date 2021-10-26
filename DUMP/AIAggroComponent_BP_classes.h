// BlueprintGeneratedClass AIAggroComponent_BP.AIAggroComponent_BP_C
// Size: 0x1a0 (Inherited: 0x190)
struct UAIAggroComponent_BP_C : UYAIAggroComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x190(0x08)
	struct UBlackboardComponent* BlackboardComponent; // 0x198(0x08)

	void UpdateVisibilityValues(struct AActor* targetActor, struct FYAITargetInfo targetInfo); // Function AIAggroComponent_BP.AIAggroComponent_BP_C.UpdateVisibilityValues // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void TrySetReplicatedCombatTarget(struct AActor* Actor); // Function AIAggroComponent_BP.AIAggroComponent_BP_C.TrySetReplicatedCombatTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateBlackboard(struct AActor* AggroActor, struct FYAITargetInfo targetInfo); // Function AIAggroComponent_BP.AIAggroComponent_BP_C.UpdateBlackboard // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function AIAggroComponent_BP.AIAggroComponent_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_UpdateAggroTarget(struct AActor* Actor, struct FYAITargetInfo aiTargetInfo); // Function AIAggroComponent_BP.AIAggroComponent_BP_C.BP_UpdateAggroTarget // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_AIAggroComponent_BP(int32_t EntryPoint); // Function AIAggroComponent_BP.AIAggroComponent_BP_C.ExecuteUbergraph_AIAggroComponent_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

