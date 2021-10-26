// Class PrefabricatorRuntime.PrefabActor
// Size: 0x260 (Inherited: 0x240)
struct APrefabActor : AActor {
	struct UPrefabComponent* PrefabComponent; // 0x240(0x08)
	struct FGuid LastUpdateID; // 0x248(0x10)
	int32_t Seed; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)

	void SavePrefab(); // Function PrefabricatorRuntime.PrefabActor.SavePrefab // (Final|Native|Public|BlueprintCallable) // @ game+0x14130c0
	void RandomizeSeed(struct FRandomStream InRandom, bool bRecursive); // Function PrefabricatorRuntime.PrefabActor.RandomizeSeed // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1412fe0
	void LoadPrefab(); // Function PrefabricatorRuntime.PrefabActor.LoadPrefab // (Final|Native|Public|BlueprintCallable) // @ game+0x1412fc0
	bool IsPrefabOutdated(); // Function PrefabricatorRuntime.PrefabActor.IsPrefabOutdated // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1412f90
	struct UPrefabricatorAsset* GetPrefabAsset(); // Function PrefabricatorRuntime.PrefabActor.GetPrefabAsset // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1412f60
};

// Class PrefabricatorRuntime.ReplicablePrefabActor
// Size: 0x260 (Inherited: 0x260)
struct AReplicablePrefabActor : APrefabActor {
};

// Class PrefabricatorRuntime.PrefabComponent
// Size: 0x220 (Inherited: 0x200)
struct UPrefabComponent : USceneComponent {
	struct TSoftObjectPtr<struct UPrefabricatorAssetInterface> PrefabAssetInterface; // 0x1f8(0x28)
};

// Class PrefabricatorRuntime.PrefabDebugActor
// Size: 0x258 (Inherited: 0x240)
struct APrefabDebugActor : AActor {
	struct AActor* Actor; // 0x240(0x08)
	struct TArray<char> ActorData; // 0x248(0x10)
};

// Class PrefabricatorRuntime.PrefabRandomizer
// Size: 0x290 (Inherited: 0x240)
struct APrefabRandomizer : AActor {
	bool bRandomizeOnBeginPlay; // 0x240(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	int32_t SeedOffset; // 0x244(0x04)
	float MaxBuildTimePerFrame; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct FMulticastInlineDelegate OnRandomizationComplete; // 0x250(0x10)
	bool bFastSyncBuild; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	struct TArray<struct APrefabActor*> ActorsToRandomize; // 0x268(0x10)
	char pad_278[0x18]; // 0x278(0x18)

	void Randomize(int32_t InSeed); // Function PrefabricatorRuntime.PrefabRandomizer.Randomize // (Final|Native|Public|BlueprintCallable) // @ game+0x1413510
};

// Class PrefabricatorRuntime.PrefabricatorProperty
// Size: 0x70 (Inherited: 0x28)
struct UPrefabricatorProperty : UObject {
	struct FString PropertyName; // 0x28(0x10)
	struct FString ExportedValue; // 0x38(0x10)
	struct TArray<struct FPrefabricatorPropertyAssetMapping> AssetSoftReferenceMappings; // 0x48(0x10)
	bool bIsCrossReferencedActor; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	struct FGuid CrossReferencePrefabActorId; // 0x5c(0x10)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class PrefabricatorRuntime.PrefabricatorEventListener
// Size: 0x28 (Inherited: 0x28)
struct UPrefabricatorEventListener : UObject {

	void PostSpawn(struct APrefabActor* Prefab); // Function PrefabricatorRuntime.PrefabricatorEventListener.PostSpawn // (Native|Event|Public|BlueprintEvent) // @ game+0x1333ea0
};

// Class PrefabricatorRuntime.PrefabricatorAssetInterface
// Size: 0x38 (Inherited: 0x28)
struct UPrefabricatorAssetInterface : UObject {
	struct UPrefabricatorEventListener* EventListener; // 0x28(0x08)
	bool bReplicates; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class PrefabricatorRuntime.PrefabricatorAsset
// Size: 0x70 (Inherited: 0x38)
struct UPrefabricatorAsset : UPrefabricatorAssetInterface {
	struct TArray<struct FPrefabricatorActorData> ActorData; // 0x38(0x10)
	enum class EComponentMobility PrefabMobility; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FGuid LastUpdateID; // 0x4c(0x10)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct UThumbnailInfo* ThumbnailInfo; // 0x60(0x08)
	uint32_t Version; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class PrefabricatorRuntime.PrefabricatorAssetCollection
// Size: 0x50 (Inherited: 0x38)
struct UPrefabricatorAssetCollection : UPrefabricatorAssetInterface {
	struct TArray<struct FPrefabricatorAssetCollectionItem> Prefabs; // 0x38(0x10)
	uint32_t Version; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class PrefabricatorRuntime.PrefabricatorAssetUserData
// Size: 0x40 (Inherited: 0x28)
struct UPrefabricatorAssetUserData : UAssetUserData {
	struct TWeakObjectPtr<struct APrefabActor> PrefabActor; // 0x28(0x08)
	struct FGuid ItemId; // 0x30(0x10)
};

// Class PrefabricatorRuntime.PrefabricatorBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPrefabricatorBlueprintLibrary : UBlueprintFunctionLibrary {

	void UnlinkPrefab(struct APrefabActor* PrefabActor); // Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.UnlinkPrefab // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1414e00
	struct APrefabActor* SpawnPrefab(struct UObject* WorldContextObject, struct UPrefabricatorAssetInterface* Prefab, struct FTransform Transform, int32_t Seed); // Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SpawnPrefab // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1414c50
	void SetPrefabAsset(struct APrefabActor* PrefabActor, struct UPrefabricatorAssetInterface* Prefab, bool bReloadPrefab); // Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SetPrefabAsset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1414b50
	void RandomizePrefab(struct APrefabActor* PrefabActor, struct FRandomStream InRandom); // Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.RandomizePrefab // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1414a80
	void GetAllAttachedActors(struct AActor* Prefab, struct TArray<struct AActor*> AttachedActors); // Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.GetAllAttachedActors // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x14149a0
	struct APrefabActor* FindTopMostPrefabActor(struct AActor* InActor); // Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.FindTopMostPrefabActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1414910
};

// Class PrefabricatorRuntime.PrefabricatorSettings
// Size: 0xa0 (Inherited: 0x38)
struct UPrefabricatorSettings : UDeveloperSettings {
	enum class EPrefabricatorPivotPosition PivotPosition; // 0x38(0x01)
	bool bAllowDynamicUpdate; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct TSet<struct UObject*> IgnoreBoundingBoxForObjects; // 0x40(0x50)
	float DefaultThumbnailPitch; // 0x90(0x04)
	float DefaultThumbnailYaw; // 0x94(0x04)
	float DefaultThumbnailZoom; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class PrefabricatorRuntime.PrefabSeedLinkerComponent
// Size: 0x200 (Inherited: 0x200)
struct UPrefabSeedLinkerComponent : USceneComponent {
};

// Class PrefabricatorRuntime.PrefabSeedLinker
// Size: 0x258 (Inherited: 0x240)
struct APrefabSeedLinker : AActor {
	struct TArray<struct TWeakObjectPtr<struct APrefabActor>> LinkedActors; // 0x240(0x10)
	struct UPrefabSeedLinkerComponent* SeedLinkerComponent; // 0x250(0x08)
};

