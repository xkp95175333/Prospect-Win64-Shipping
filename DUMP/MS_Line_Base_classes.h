// BlueprintGeneratedClass MS_Line_Base.MS_Line_Base_C
// Size: 0x1b0 (Inherited: 0x180)
struct UMS_Line_Base_C : UYMetaQuestPlayerInstanceComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	struct TArray<struct AActor*> HintIndicators; // 0x188(0x10)
	struct FMS_HintMarkerReplicatedData_ST HintData; // 0x198(0x18)

	void OnRep_HintData(); // Function MS_Line_Base.MS_Line_Base_C.OnRep_HintData // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void IsPlayerFacing(bool IsPlayerFacing); // Function MS_Line_Base.MS_Line_Base_C.IsPlayerFacing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void CreateHintIndicator(struct FTransform RelatedTransform); // Function MS_Line_Base.MS_Line_Base_C.CreateHintIndicator // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ClearIndicators(); // Function MS_Line_Base.MS_Line_Base_C.ClearIndicators // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_ClearHindIndicator(); // Function MS_Line_Base.MS_Line_Base_C.BP_ClearHindIndicator // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_MS_Line_Base(int32_t EntryPoint); // Function MS_Line_Base.MS_Line_Base_C.ExecuteUbergraph_MS_Line_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

