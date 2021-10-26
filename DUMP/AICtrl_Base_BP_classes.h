// BlueprintGeneratedClass AICtrl_Base_BP.AICtrl_Base_BP_C
// Size: 0x3f8 (Inherited: 0x3d8)
struct AAICtrl_Base_BP_C : AYAIController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UAIAggroComponent_BP_C* AIAggroComponent_BP; // 0x3e0(0x08)
	struct UYAIPerceptionComponent* YAIPerception; // 0x3e8(0x08)
	struct AAICharacter_Base_BP_C* PossesedAICharacter; // 0x3f0(0x08)

	struct UYAIAggroComponent* GetAggroComponent(); // Function AICtrl_Base_BP.AICtrl_Base_BP_C.GetAggroComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void SetAIReactionContext(enum class EYAIReactionContext newReactionContext); // Function AICtrl_Base_BP.AICtrl_Base_BP_C.SetAIReactionContext // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void InitializeAIBehavior(); // Function AICtrl_Base_BP.AICtrl_Base_BP_C.InitializeAIBehavior // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnInitializeBehavior(); // Function AICtrl_Base_BP.AICtrl_Base_BP_C.BP_OnInitializeBehavior // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function AICtrl_Base_BP.AICtrl_Base_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_AICtrl_Base_BP(int32_t EntryPoint); // Function AICtrl_Base_BP.AICtrl_Base_BP_C.ExecuteUbergraph_AICtrl_Base_BP // (Final|UbergraphFunction) // @ game+0x1e02480
};

