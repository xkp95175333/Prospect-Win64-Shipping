// BlueprintGeneratedClass AICtrl_Strider_BP.AICtrl_Strider_BP_C
// Size: 0x400 (Inherited: 0x3f8)
struct AAICtrl_Strider_BP_C : AAICtrl_Base_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f8(0x08)

	void OnUsingBlackBoard(struct UBlackboardComponent* BlackboardComp, struct UBlackboardData* BlackboardAsset); // Function AICtrl_Strider_BP.AICtrl_Strider_BP_C.OnUsingBlackBoard // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ClearResting(); // Function AICtrl_Strider_BP.AICtrl_Strider_BP_C.ClearResting // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_AICtrl_Strider_BP(int32_t EntryPoint); // Function AICtrl_Strider_BP.AICtrl_Strider_BP_C.ExecuteUbergraph_AICtrl_Strider_BP // (Final|UbergraphFunction) // @ game+0x1e02480
};

