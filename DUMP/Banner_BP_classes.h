// BlueprintGeneratedClass Banner_BP.Banner_BP_C
// Size: 0x6e8 (Inherited: 0x258)
struct ABanner_BP_C : AYBannerActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct UChildActorComponent* SeasonDetailView; // 0x260(0x08)
	struct UChildActorComponent* SeasonFirstView; // 0x268(0x08)
	struct UBoxComponent* BoxToTriggerOverlaps; // 0x270(0x08)
	struct UTextRenderComponent* SecondPlate; // 0x278(0x08)
	struct UParticleSystemComponent* Banner_PS; // 0x280(0x08)
	struct USkeletalMeshComponent* Prop_Banner_SK; // 0x288(0x08)
	struct UTextRenderComponent* NamePlate; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	struct APlayerState* PlayerState; // 0x2a0(0x08)
	float ParticleSize; // 0x2a8(0x04)
	struct FVector ParticleOffset; // 0x2ac(0x0c)
	struct FLinearColor ParticleSystemColor; // 0x2b8(0x10)
	struct FDataTableRowHandle BannerDTRow; // 0x2c8(0x10)
	struct FYBannerVanityRow BannerVanityRow; // 0x2d8(0x3e0)
	struct FText BannerNameOverride; // 0x6b8(0x18)
	float LineTraceCeilingDistance; // 0x6d0(0x04)
	char pad_6D4[0x4]; // 0x6d4(0x04)
	struct TArray<struct UObject*> SoundsLoaded; // 0x6d8(0x10)

	void GetName(struct FText returnResult); // Function Banner_BP.Banner_BP_C.GetName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void UserConstructionScript(); // Function Banner_BP.Banner_BP_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnLoaded_4A0385474C8EACF19812D19508361D30(struct UObject* Loaded); // Function Banner_BP.Banner_BP_C.OnLoaded_4A0385474C8EACF19812D19508361D30 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnLoaded_E3ED64D64653F1E69C56DF89C98F009D(struct UObject* Loaded); // Function Banner_BP.Banner_BP_C.OnLoaded_E3ED64D64653F1E69C56DF89C98F009D // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnLoaded_0074BA974BE052B7FF9369A7D5DDF321(struct UObject* Loaded); // Function Banner_BP.Banner_BP_C.OnLoaded_0074BA974BE052B7FF9369A7D5DDF321 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnLoaded_EED911CE44C8CCD77EDDB3A4329542A0(struct UObject* Loaded); // Function Banner_BP.Banner_BP_C.OnLoaded_EED911CE44C8CCD77EDDB3A4329542A0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnLoaded_994CAFF44D2DD18F243915A76E8BB079(struct UObject* Loaded); // Function Banner_BP.Banner_BP_C.OnLoaded_994CAFF44D2DD18F243915A76E8BB079 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnLoaded_DBD0CE2141F452DB2698AF94D8E4CE9D(struct UObject* Loaded); // Function Banner_BP.Banner_BP_C.OnLoaded_DBD0CE2141F452DB2698AF94D8E4CE9D // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__m_rowAssociationComponent_K2Node_ComponentBoundEvent_2_OnRowHandleChanged__DelegateSignature(struct FDataTableRowHandle oldRowHandle, struct FDataTableRowHandle newRowHandle); // Function Banner_BP.Banner_BP_C.BndEvt__m_rowAssociationComponent_K2Node_ComponentBoundEvent_2_OnRowHandleChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_SetIsAttached(bool attachedStatus); // Function Banner_BP.Banner_BP_C.BP_SetIsAttached // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void SetUpBannerPreviewInEditor(); // Function Banner_BP.Banner_BP_C.SetUpBannerPreviewInEditor // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void LoadSounds(); // Function Banner_BP.Banner_BP_C.LoadSounds // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void LoadParticle(); // Function Banner_BP.Banner_BP_C.LoadParticle // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void LoadMaterial(); // Function Banner_BP.Banner_BP_C.LoadMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PlaySound(); // Function Banner_BP.Banner_BP_C.PlaySound // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void lineTraceCeilingHeightForParticles(); // Function Banner_BP.Banner_BP_C.lineTraceCeilingHeightForParticles // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetupTextPlates(); // Function Banner_BP.Banner_BP_C.SetupTextPlates // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function Banner_BP.Banner_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_OnOwnerChanged(); // Function Banner_BP.Banner_BP_C.BP_OnOwnerChanged // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void SetupLIghtAndFlareColor(); // Function Banner_BP.Banner_BP_C.SetupLIghtAndFlareColor // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_Banner_BP(int32_t EntryPoint); // Function Banner_BP.Banner_BP_C.ExecuteUbergraph_Banner_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

