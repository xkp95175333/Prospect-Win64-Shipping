// Class Strider.StriderMath
// Size: 0x28 (Inherited: 0x28)
struct UStriderMath : UBlueprintFunctionLibrary {

	float WrapAngle(float Angle); // Function Strider.StriderMath.WrapAngle // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1318ec0
	void MoveTowardVector(struct FVector InStart, struct FVector End, float MaxDelta); // Function Strider.StriderMath.MoveTowardVector // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1318d90
	float MoveTowardAngle(float StartAngle, float EndAngle, float MaxDelta); // Function Strider.StriderMath.MoveTowardAngle // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1318c70
	float MoveToward(float Start, float End, float MaxDelta); // Function Strider.StriderMath.MoveToward // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1318b50
	void MoveComponentsToward(struct FVector InStart, struct FVector End, float MaxDelta); // Function Strider.StriderMath.MoveComponentsToward // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1318a20
	float GetRotationRelativeToVelocity(struct AActor* Actor); // Function Strider.StriderMath.GetRotationRelativeToVelocity // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1318990
	int32_t GetNextCardinalDirection(int32_t CurrentCardinalDirection, float RelativeDirection, float StepDelta, float SkipDelta); // Function Strider.StriderMath.GetNextCardinalDirection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1318850
	float GetAngleDelta(float StartAngle, float EndAngle); // Function Strider.StriderMath.GetAngleDelta // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1318780
	float CalculateStrideScale(float TotalSpeedScale, float PlayRate); // Function Strider.StriderMath.CalculateStrideScale // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13186b0
	float CalculatePlayRate(float TotalSpeedScale, float PlaybackWeight, float MinPlayRate, float MaxPlayRate); // Function Strider.StriderMath.CalculatePlayRate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1318550
	float CalculateCircleStrafeDirectionDelta(float LastDirection, float Direction, float DeltaTime); // Function Strider.StriderMath.CalculateCircleStrafeDirectionDelta // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1318430
	float AngleBetween(struct FVector A, struct FVector B); // Function Strider.StriderMath.AngleBetween // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1318340
};

