// BlueprintGeneratedClass AL_Base_BP.AL_Base_BP_C
// Size: 0x460 (Inherited: 0x448)
struct AAL_Base_BP_C : AYActivityLocationLinked {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x08)
	struct UBillboardComponent* BillboardEditor; // 0x450(0x08)
	struct USceneComponent* Scene; // 0x458(0x08)

	void GetActivityRow(bool FoundRow, struct FYActivityDataTableRow Out Row); // Function AL_Base_BP.AL_Base_BP_C.GetActivityRow // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetDebugCooldownTimeStatus(struct FString DebugCooldownTimer); // Function AL_Base_BP.AL_Base_BP_C.GetDebugCooldownTimeStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FString GetDebugDescription(); // Function AL_Base_BP.AL_Base_BP_C.GetDebugDescription // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UserConstructionScript(); // Function AL_Base_BP.AL_Base_BP_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_AL_Base_BP(int32_t EntryPoint); // Function AL_Base_BP.AL_Base_BP_C.ExecuteUbergraph_AL_Base_BP // (Final|UbergraphFunction) // @ game+0x1e02480
};

