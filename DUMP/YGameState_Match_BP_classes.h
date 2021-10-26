// BlueprintGeneratedClass YGameState_Match_BP.YGameState_Match_BP_C
// Size: 0x5a0 (Inherited: 0x508)
struct AYGameState_Match_BP_C : AYGameState_Match {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x508(0x08)
	struct UMatchPhaseListenerComponent_BP_C* MatchPhaseListenerComponent_BP; // 0x510(0x08)
	struct UMatchPhaseDirectorComponent_BP_C* MatchPhaseDirectorComponent_BP; // 0x518(0x08)
	struct UYPlayerRenderTargetVfxManagerComponent_BP_C* YPlayerRenderTargetVfxManagerComponent_BP; // 0x520(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x528(0x08)
	bool HasEscapeShipTerminals; // 0x530(0x01)
	char pad_531[0x7]; // 0x531(0x07)
	struct AActor* IntroActorClass; // 0x538(0x08)
	float MultiplierMaxValue; // 0x540(0x04)
	char pad_544[0x4]; // 0x544(0x04)
	struct TArray<struct ACharacter*> PlayerCharArray; // 0x548(0x10)
	int32_t playercharindex; // 0x558(0x04)
	int32_t MinAllowedStartingRank; // 0x55c(0x04)
	int32_t MaxAllowedStartingRank; // 0x560(0x04)
	int32_t DifficultyToRankFactor; // 0x564(0x04)
	int32_t MaxDifficulty; // 0x568(0x04)
	int32_t CalculatedStartPenalty; // 0x56c(0x04)
	int32_t BaseStartPenalty; // 0x570(0x04)
	int32_t StartingCredits; // 0x574(0x04)
	int32_t MatchLoopCounter; // 0x578(0x04)
	char pad_57C[0x4]; // 0x57c(0x04)
	struct FMulticastInlineDelegate OnReplicatedMatchPhaseDataUpdated; // 0x580(0x10)
	struct FMulticastInlineDelegate OnMatchPhaseVisualsUpdated; // 0x590(0x10)

	void OnRep_MatchLoopCounter(); // Function YGameState_Match_BP.YGameState_Match_BP_C.OnRep_MatchLoopCounter // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function YGameState_Match_BP.YGameState_Match_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void MatchLoopStart(); // Function YGameState_Match_BP.YGameState_Match_BP_C.MatchLoopStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnReplicatedMatchPhaseDataUpdated_Event_1(struct FYMatchPhaseData newMatchPhaseData); // Function YGameState_Match_BP.YGameState_Match_BP_C.OnReplicatedMatchPhaseDataUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void DebugTime(); // Function YGameState_Match_BP.YGameState_Match_BP_C.DebugTime // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ShowStormWarning_5min(); // Function YGameState_Match_BP.YGameState_Match_BP_C.ShowStormWarning_5min // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ShowStormWarning_1min(); // Function YGameState_Match_BP.YGameState_Match_BP_C.ShowStormWarning_1min // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_YGameState_Match_BP(int32_t EntryPoint); // Function YGameState_Match_BP.YGameState_Match_BP_C.ExecuteUbergraph_YGameState_Match_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void OnMatchPhaseVisualsUpdated__DelegateSignature(struct FYMatchPhaseVisualRow VisualMatchPhaseData); // Function YGameState_Match_BP.YGameState_Match_BP_C.OnMatchPhaseVisualsUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnReplicatedMatchPhaseDataUpdated__DelegateSignature(struct FYMatchPhaseData newMatchPhaseData); // Function YGameState_Match_BP.YGameState_Match_BP_C.OnReplicatedMatchPhaseDataUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

