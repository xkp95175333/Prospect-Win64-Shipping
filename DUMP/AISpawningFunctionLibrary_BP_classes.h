// BlueprintGeneratedClass AISpawningFunctionLibrary_BP.AISpawningFunctionLibrary_BP_C
// Size: 0x28 (Inherited: 0x28)
struct UAISpawningFunctionLibrary_BP_C : UBlueprintFunctionLibrary {

	void LogSpawnError(struct UObject* contextObject, struct FDataTableRowHandle OptionalDT, struct FString contextString, struct UObject* __WorldContext); // Function AISpawningFunctionLibrary_BP.AISpawningFunctionLibrary_BP_C.LogSpawnError // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetAIsToSpawnFromDT(struct FDataTableRowHandle DataTableRowHandle, struct UObject* Context, struct UObject* __WorldContext, struct TArray<struct FYSquadAIType> Result); // Function AISpawningFunctionLibrary_BP.AISpawningFunctionLibrary_BP_C.GetAIsToSpawnFromDT // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SpawnAISquadSpecificAIs(struct FYAISquadSpawnDefinition m_spawnDefinition, struct TArray<struct FYSquadAIType> SpawnAis, struct UObject* __WorldContext, struct UYPersistentDataAISquad* PersistentSquadObject); // Function AISpawningFunctionLibrary_BP.AISpawningFunctionLibrary_BP_C.SpawnAISquadSpecificAIs // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SpawnAISquadFromDT(struct FYAISquadSpawnDefinition SpawnDefinition, struct FDataTableRowHandle AISquadRowHandle, struct UObject* contextObject, struct UObject* __WorldContext, struct UYPersistentDataAISquad* PersistentSquadObject); // Function AISpawningFunctionLibrary_BP.AISpawningFunctionLibrary_BP_C.SpawnAISquadFromDT // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SpawnAISquadGeneric(struct FYAISquadSpawnDefinition SpawnDefinition, struct UObject* __WorldContext, struct UYPersistentDataAISquad* PersistentSquadObject); // Function AISpawningFunctionLibrary_BP.AISpawningFunctionLibrary_BP_C.SpawnAISquadGeneric // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

