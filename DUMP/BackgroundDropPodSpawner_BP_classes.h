// BlueprintGeneratedClass BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C
// Size: 0xf8 (Inherited: 0xb0)
struct UBackgroundDropPodSpawner_BP_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct AActor* LoadedDropPodClass; // 0xb8(0x08)
	struct AActor* CLassToLoad; // 0xc0(0x08)
	SoftClassProperty AssetClass; // 0xc8(0x28)
	struct APlayerState* ReturnValue; // 0xf0(0x08)

	void IsPlayerInAnotherTeam(struct APlayerState* PlayerStateSpawned, bool Result); // Function BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C.IsPlayerInAnotherTeam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnPlayerSpawnedAt(struct AYPlayerState* PlayerState, struct AActor* startActor); // Function BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C.OnPlayerSpawnedAt // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnLoaded_765CCE974A1B409C950961841FA0B596(struct UObject* Loaded); // Function BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C.OnLoaded_765CCE974A1B409C950961841FA0B596 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ClientOnPlayerSpawnedAtLocation(struct FVector Location); // Function BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C.ClientOnPlayerSpawnedAtLocation // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnPlayerSpawned(struct AYPlayerState* PlayerState, struct AActor* startActor); // Function BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C.OnPlayerSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SpawnPodAt(struct FVector Location); // Function BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C.SpawnPodAt // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDebugSpawnPod(struct FVector Location); // Function BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C.OnDebugSpawnPod // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_BackgroundDropPodSpawner_BP(int32_t EntryPoint); // Function BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C.ExecuteUbergraph_BackgroundDropPodSpawner_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

