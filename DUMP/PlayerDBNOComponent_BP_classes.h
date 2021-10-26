// BlueprintGeneratedClass PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C
// Size: 0x661 (Inherited: 0x1d8)
struct UPlayerDBNOComponent_BP_C : UYCharacterDBNOComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d8(0x08)
	bool MIDsSetUp; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
	struct APRO_PlayerCharacter_C* PlayerCharacterOwner; // 0x1e8(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> PlayerMeshMIDArray; // 0x1f0(0x10)
	struct FDataTableRowHandle DBNO_ShieldActivateSfx; // 0x200(0x10)
	struct UAudioComponent* DBNOAudioComponent; // 0x210(0x08)
	struct FDataTableRowHandle DBNO_ExecutedSfx; // 0x218(0x10)
	struct FDataTableRowHandle DBNO_ReviveSfx; // 0x228(0x10)
	int32_t DBNOHighlight; // 0x238(0x04)
	float foamAnimationSlider; // 0x23c(0x04)
	struct FYDeathEmoteDataTableRow deathEmoteRow; // 0x240(0x410)
	struct FDataTableRowHandle VO_Revived; // 0x650(0x10)
	bool UsedRecallRecently; // 0x660(0x01)

	void GetDeathEmoteRow(struct FYDeathEmoteDataTableRow deathEmoteRow); // Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.GetDeathEmoteRow // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void CreateMids(struct UPrimitiveComponent* MeshComponent); // Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.CreateMids // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnLoaded_CBD006CF4860C797A8D149B6BA851463(struct UObject* Loaded); // Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.OnLoaded_CBD006CF4860C797A8D149B6BA851463 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnLoaded_233255E8404EEFDC580D49BE592B34D1(struct UObject* Loaded); // Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.OnLoaded_233255E8404EEFDC580D49BE592B34D1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void DBNO_Deactivate(bool interupted); // Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.DBNO_Deactivate // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void DBNO_Activate(); // Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.DBNO_Activate // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PlayExecutedFX(); // Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.PlayExecutedFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnRevived_Event(struct AController* Controller); // Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.OnRevived_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void InitializeMidsIfNeeded(); // Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.InitializeMidsIfNeeded // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void setFoamAnimationSlider(); // Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.setFoamAnimationSlider // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnTeleportedDBNO_Event(struct FVector OldLocation, struct FVector NewLocation, struct AActor* relevantActor); // Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.OnTeleportedDBNO_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_PlayerDBNOComponent_BP(int32_t EntryPoint); // Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.ExecuteUbergraph_PlayerDBNOComponent_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

