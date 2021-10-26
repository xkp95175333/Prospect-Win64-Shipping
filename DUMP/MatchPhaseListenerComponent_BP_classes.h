// BlueprintGeneratedClass MatchPhaseListenerComponent_BP.MatchPhaseListenerComponent_BP_C
// Size: 0x228 (Inherited: 0x200)
struct UMatchPhaseListenerComponent_BP_C : USceneComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x200(0x08)
	struct FMulticastInlineDelegate OnReplicatedMatchPhaseDataUpdated; // 0x208(0x10)
	struct FMulticastInlineDelegate OnMatchPhaseVisualsUpdated; // 0x218(0x10)

	void ReceiveBeginPlay(); // Function MatchPhaseListenerComponent_BP.MatchPhaseListenerComponent_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnReplicatedMatchPhaseDataUpdated_Event(struct FYMatchPhaseData newMatchPhaseData); // Function MatchPhaseListenerComponent_BP.MatchPhaseListenerComponent_BP_C.OnReplicatedMatchPhaseDataUpdated_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnMatchPhaseVisualsUpdatedEvent(struct FYMatchPhaseVisualRow VisualMatchPhaseData); // Function MatchPhaseListenerComponent_BP.MatchPhaseListenerComponent_BP_C.OnMatchPhaseVisualsUpdatedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_MatchPhaseListenerComponent_BP(int32_t EntryPoint); // Function MatchPhaseListenerComponent_BP.MatchPhaseListenerComponent_BP_C.ExecuteUbergraph_MatchPhaseListenerComponent_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void OnMatchPhaseVisualsUpdated__DelegateSignature(struct FYMatchPhaseVisualRow VisualData); // Function MatchPhaseListenerComponent_BP.MatchPhaseListenerComponent_BP_C.OnMatchPhaseVisualsUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnReplicatedMatchPhaseDataUpdated__DelegateSignature(struct FYMatchPhaseData newMatchPhaseData); // Function MatchPhaseListenerComponent_BP.MatchPhaseListenerComponent_BP_C.OnReplicatedMatchPhaseDataUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

