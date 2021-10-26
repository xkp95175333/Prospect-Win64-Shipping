// BlueprintGeneratedClass PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C
// Size: 0x5d8 (Inherited: 0x5a0)
struct APlayerCustomizationPreview_BP_C : AYCharacterCustomizationPlayerActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5a0(0x08)
	struct USkeletalMeshComponent* DBNO_FoamMesh_SK; // 0x5a8(0x08)
	struct FName CurrentArchetype; // 0x5b0(0x08)
	struct FName AttachWeaponBoneName; // 0x5b8(0x08)
	enum class EYCustomizationCategory MontageActiveCategory; // 0x5c0(0x01)
	bool IsEndOfMatch; // 0x5c1(0x01)
	char pad_5C2[0x6]; // 0x5c2(0x06)
	struct UAnimMontage* DeathAnimMontage; // 0x5c8(0x08)
	struct UAnimSequence* EmoteAnimSequence; // 0x5d0(0x08)

	void SetupEndOfMatchState(); // Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.SetupEndOfMatchState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetupForArchetype(struct FName archetypeId); // Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.SetupForArchetype // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	bool IsPreviewedPlayerDead(); // Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.IsPreviewedPlayerDead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void RefreshActiveMontage(enum class EYCustomizationCategory Category); // Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.RefreshActiveMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_PlayCustomizationMontage(struct UAnimMontage* Montage, enum class EYCustomizationCategory Category); // Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.BP_PlayCustomizationMontage // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_OnShowCustomizationCategory(struct FYShowBodyTypeCategoryUpdateData customizationCategory); // Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.BP_OnShowCustomizationCategory // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_OnResetRequest(enum class EYCharacterVanityResetRequest resetRequest); // Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.BP_OnResetRequest // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_SetDeathEmote(struct FYCharacterCustomizationRowBase deathEmoteRowBase); // Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.BP_SetDeathEmote // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BP_SetEmote(struct FYCharacterCustomizationRowBase deathEmoteRowBase); // Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.BP_SetEmote // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BP_OnEOMMapLoaded(); // Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.BP_OnEOMMapLoaded // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_OnActiveCustomizationDataChanged(struct FYActiveCustomizationData newCustomizationData); // Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.BP_OnActiveCustomizationDataChanged // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void OnEnteredQuickMenu(); // Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.OnEnteredQuickMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_PlayerCustomizationPreview_BP(int32_t EntryPoint); // Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.ExecuteUbergraph_PlayerCustomizationPreview_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

