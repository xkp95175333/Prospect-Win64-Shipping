// BlueprintGeneratedClass MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C
// Size: 0x118 (Inherited: 0xe0)
struct UMatchPhaseDirectorComponent_BP_C : UYMatchPhaseDirectorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe0(0x08)
	struct FDataTableRowHandle MatchFlowRowHandle; // 0xe8(0x10)
	struct TArray<struct FDataTableRowHandle> MatchFlowPhaseHandles; // 0xf8(0x10)
	bool useNewMatchPhaseFlow; // 0x108(0x01)
	bool shouldSkipBlending; // 0x109(0x01)
	char pad_10A[0x6]; // 0x10a(0x06)
	struct UDataTable* MatchFlowsDataTable; // 0x110(0x08)

	void LogMatchFlowPhaseHandles(); // Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.LogMatchFlowPhaseHandles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void TrySetupMatchFlowPhaseHandles(); // Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.TrySetupMatchFlowPhaseHandles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StartNextMatchPhase(); // Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.StartNextMatchPhase // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetupMatchFlow(); // Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.SetupMatchFlow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void FindPreviousMatchPhase(struct FDataTableRowHandle NewMatchPhase); // Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.FindPreviousMatchPhase // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void FindNextMatchPhase(struct FDataTableRowHandle NewMatchPhase); // Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.FindNextMatchPhase // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void SetMatchPhase(struct FDataTableRowHandle MatchPhaseDefinitionRowHandle, bool DebugSetMatchPhase); // Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.SetMatchPhase // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StartMatchFlow(); // Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.StartMatchFlow // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ForceSetMatchPhase(struct FDataTableRowHandle MatchPhaseDefinitionRowHandle); // Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.ForceSetMatchPhase // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_OnRep_CurrentMatchPhaseData(); // Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.BP_OnRep_CurrentMatchPhaseData // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_MatchPhaseDirectorComponent_BP(int32_t EntryPoint); // Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.ExecuteUbergraph_MatchPhaseDirectorComponent_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

