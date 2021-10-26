// BlueprintGeneratedClass BTDecorator_MinDistance.BTDecorator_MinDistance_C
// Size: 0x100 (Inherited: 0xa0)
struct UBTDecorator_MinDistance_C : UBTDecorator_BlueprintBase {
	struct FBlackboardKeySelector Key Location; // 0xa0(0x28)
	struct FBlackboardKeySelector Key Actor; // 0xc8(0x28)
	float MinDistance; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct APawn* Controlled Pawn; // 0xf8(0x08)

	void DistanceCheck(struct FVector TargetLocation, bool isInDistance); // Function BTDecorator_MinDistance.BTDecorator_MinDistance_C.DistanceCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTDecorator_MinDistance.BTDecorator_MinDistance_C.PerformConditionCheckAI // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

