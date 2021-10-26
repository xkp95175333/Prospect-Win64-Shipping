// Class ChaosSolverEngine.ChaosDebugDrawComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UChaosDebugDrawComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class ChaosSolverEngine.ChaosEventListenerComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UChaosEventListenerComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// Size: 0x270 (Inherited: 0xb8)
struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent {
	char pad_B8[0x110]; // 0xb8(0x110)
	struct TMap<struct UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations; // 0x1c8(0x50)
	struct TMap<struct UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x218(0x50)
	char pad_268[0x8]; // 0x268(0x08)
};

// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// Size: 0x28 (Inherited: 0x28)
struct UChaosNotifyHandlerInterface : UInterface {
};

// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UChaosSolverEngineBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FHitResult ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo PhysicsCollision); // Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3bfa860
};

// Class ChaosSolverEngine.ChaosSolver
// Size: 0x28 (Inherited: 0x28)
struct UChaosSolver : UObject {
};

// Class ChaosSolverEngine.ChaosSolverActor
// Size: 0x338 (Inherited: 0x240)
struct AChaosSolverActor : AActor {
	struct FChaosSolverConfiguration Properties; // 0x240(0x68)
	float TimeStepMultiplier; // 0x2a8(0x04)
	int32_t CollisionIterations; // 0x2ac(0x04)
	int32_t PushOutIterations; // 0x2b0(0x04)
	int32_t PushOutPairIterations; // 0x2b4(0x04)
	float ClusterConnectionFactor; // 0x2b8(0x04)
	enum class EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x2bc(0x01)
	bool DoGenerateCollisionData; // 0x2bd(0x01)
	char pad_2BE[0x2]; // 0x2be(0x02)
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x2c0(0x10)
	bool DoGenerateBreakingData; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x2d4(0x10)
	bool DoGenerateTrailingData; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x2e8(0x10)
	float MassScale; // 0x2f8(0x04)
	bool bGenerateContactGraph; // 0x2fc(0x01)
	bool bHasFloor; // 0x2fd(0x01)
	char pad_2FE[0x2]; // 0x2fe(0x02)
	float FloorHeight; // 0x300(0x04)
	struct FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x304(0x03)
	char pad_307[0x1]; // 0x307(0x01)
	struct UBillboardComponent* SpriteComponent; // 0x308(0x08)
	char pad_310[0x18]; // 0x310(0x18)
	struct UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x328(0x08)
	char pad_330[0x8]; // 0x330(0x08)

	void SetSolverActive(bool bActive); // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive // (Native|Public|BlueprintCallable) // @ game+0x1192740
	void SetAsCurrentWorldSolver(); // Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver // (Final|Native|Public|BlueprintCallable) // @ game+0x3bfa960
};

// Class ChaosSolverEngine.ChaosSolverSettings
// Size: 0x58 (Inherited: 0x38)
struct UChaosSolverSettings : UDeveloperSettings {
	char pad_38[0x8]; // 0x38(0x08)
	struct FSoftClassPath DefaultChaosSolverActorClass; // 0x40(0x18)
};

