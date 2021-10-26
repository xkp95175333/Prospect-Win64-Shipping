// BlueprintGeneratedClass EQSContext_AllyLocationAndCombatLocations.EQSContext_AllyLocationAndCombatLocations_C
// Size: 0x3c (Inherited: 0x30)
struct UEQSContext_AllyLocationAndCombatLocations_C : UEnvQueryContext_BlueprintBase {
	struct FName KeyCombatMoveToLocation; // 0x30(0x08)
	float NearbyAIRadius; // 0x38(0x04)

	void TryGetMoveToLocation(struct AYAICharacter* aiCharacter, struct FVector MoveToLocation, bool HasMoveToLocation); // Function EQSContext_AllyLocationAndCombatLocations.EQSContext_AllyLocationAndCombatLocations_C.TryGetMoveToLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1e02480
	void ProvideLocationsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct FVector> ResultingLocationSet); // Function EQSContext_AllyLocationAndCombatLocations.EQSContext_AllyLocationAndCombatLocations_C.ProvideLocationsSet // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1e02480
	void ProvideSingleActor(struct UObject* QuerierObject, struct AActor* QuerierActor, struct AActor* ResultingActor); // Function EQSContext_AllyLocationAndCombatLocations.EQSContext_AllyLocationAndCombatLocations_C.ProvideSingleActor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1e02480
};

