// Enum PowerIKRuntime.EEffectorSpaceEnum
enum class EEffectorSpaceEnum : uint8 {
	ES_Additive,
	ES_World,
	ES_Component,
	ES_MAX,
};

// Enum PowerIKRuntime.EPoleVectorModeEnum
enum class EPoleVectorModeEnum : uint8 {
	PV_None,
	PV_Position,
	PV_Bone,
	PV_AngleOffset,
	PV_MAX,
};

// ScriptStruct PowerIKRuntime.AnimNode_PowerIK
// Size: 0x208 (Inherited: 0xc8)
struct FAnimNode_PowerIK : FAnimNode_SkeletalControlBase {
	struct FName CharacterRoot; // 0xc8(0x08)
	float RootRotationMultiplier; // 0xd0(0x04)
	struct FPowerIKBodyInertia BodyInertia; // 0xd4(0x14)
	struct TArray<struct FPowerIKBoneBendDirection> BendDirections; // 0xe8(0x10)
	struct TArray<struct FPowerIKExcludedBone> ExcludedBones; // 0xf8(0x10)
	struct TArray<struct FPowerIKBoneLimit> JointLimits; // 0x108(0x10)
	struct TArray<struct FPowerIKEffector> Effectors; // 0x118(0x10)
	float SmoothingMaxSpeedMultiplier; // 0x128(0x04)
	float SmoothingMaxDistanceMultiplier; // 0x12c(0x04)
	struct FPowerIKCenterOfGravity CenterOfGravityConstraint; // 0x130(0x10)
	int32_t MaxSquashIterations; // 0x140(0x04)
	int32_t MaxStretchIterations; // 0x144(0x04)
	int32_t MaxFinalIterations; // 0x148(0x04)
	bool AllowBoneTranslation; // 0x14c(0x01)
	char pad_14D[0x3]; // 0x14d(0x03)
	float SolverAlpha; // 0x150(0x04)
	float DebugDrawSize; // 0x154(0x04)
	char pad_158[0xb0]; // 0x158(0xb0)
};

// ScriptStruct PowerIKRuntime.PowerIKCenterOfGravity
// Size: 0x10 (Inherited: 0x00)
struct FPowerIKCenterOfGravity {
	float Alpha; // 0x00(0x04)
	float HorizAmount; // 0x04(0x04)
	float VertAmount; // 0x08(0x04)
	float PullBodyAmount; // 0x0c(0x04)
};

// ScriptStruct PowerIKRuntime.PowerIKEffector
// Size: 0xd0 (Inherited: 0x00)
struct FPowerIKEffector {
	struct FName BoneName; // 0x00(0x08)
	struct FVector Position; // 0x08(0x0c)
	enum class EEffectorSpaceEnum PositionSpace; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FRotator Rotation; // 0x18(0x0c)
	enum class EEffectorSpaceEnum RotationSpace; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float PullWeight; // 0x28(0x04)
	bool NormalizePulling; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct FVector PositivePullFactor; // 0x30(0x0c)
	struct FVector NegativePullFactor; // 0x3c(0x0c)
	bool RotateBone; // 0x48(0x01)
	bool RotateLimb; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	float DeltaSmoothSpeed; // 0x4c(0x04)
	float AngularDeltaSmoothSpeed; // 0x50(0x04)
	struct FPowerIKSmoothing Smoothing; // 0x54(0x18)
	struct FPowerIKPoleVector PoleVector; // 0x6c(0x20)
	bool AffectsCenterOfGravity; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	float Alpha; // 0x90(0x04)
	char pad_94[0x3c]; // 0x94(0x3c)
};

// ScriptStruct PowerIKRuntime.PowerIKPoleVector
// Size: 0x20 (Inherited: 0x00)
struct FPowerIKPoleVector {
	enum class EPoleVectorModeEnum Mode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Position; // 0x04(0x0c)
	struct FName BoneName; // 0x10(0x08)
	char pad_18[0x4]; // 0x18(0x04)
	float AngleOffset; // 0x1c(0x04)
};

// ScriptStruct PowerIKRuntime.PowerIKSmoothing
// Size: 0x18 (Inherited: 0x00)
struct FPowerIKSmoothing {
	bool SmoothPositionOverTime; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MaxPositionSpeed; // 0x04(0x04)
	float MaxPositionDistance; // 0x08(0x04)
	bool SmoothRotationOverTime; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float MaxDegreesSpeed; // 0x10(0x04)
	float MaxDegreesDistance; // 0x14(0x04)
};

// ScriptStruct PowerIKRuntime.PowerIKBoneLimit
// Size: 0x2c (Inherited: 0x00)
struct FPowerIKBoneLimit {
	struct FName BoneName; // 0x00(0x08)
	float Stiffness; // 0x08(0x04)
	char pad_C[0x20]; // 0x0c(0x20)
};

// ScriptStruct PowerIKRuntime.PowerIKExcludedBone
// Size: 0x08 (Inherited: 0x00)
struct FPowerIKExcludedBone {
	struct FName BoneName; // 0x00(0x08)
};

// ScriptStruct PowerIKRuntime.PowerIKBoneBendDirection
// Size: 0x14 (Inherited: 0x00)
struct FPowerIKBoneBendDirection {
	struct FName BoneName; // 0x00(0x08)
	struct FVector BendDirection; // 0x08(0x0c)
};

// ScriptStruct PowerIKRuntime.PowerIKBodyInertia
// Size: 0x14 (Inherited: 0x00)
struct FPowerIKBodyInertia {
	bool ApplyInertiaToBody; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float SmoothFactor; // 0x04(0x04)
	bool UseSpring; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float SpringStrength; // 0x0c(0x04)
	float SpringDamping; // 0x10(0x04)
};

// ScriptStruct PowerIKRuntime.AnimNode_PowerIK_Ground
// Size: 0x390 (Inherited: 0xc8)
struct FAnimNode_PowerIK_Ground : FAnimNode_SkeletalControlBase {
	struct FName CharacterRoot; // 0xc8(0x08)
	struct FPowerIKBodyInertia BodyInertia; // 0xd0(0x14)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct TArray<struct FPowerIKGroundFoot> Feet; // 0xe8(0x10)
	float FeetDeltaSmoothSpeed; // 0xf8(0x04)
	float RootRotationMultiplier; // 0xfc(0x04)
	struct FPowerIKGroundCollision GroundCollision; // 0x100(0x14)
	struct FPowerIKGroundSlope GroundSlope; // 0x114(0x94)
	struct TArray<struct FPowerIKBoneBendDirection> BendDirections; // 0x1a8(0x10)
	struct TArray<struct FPowerIKExcludedBone> ExcludedBones; // 0x1b8(0x10)
	struct TArray<struct FPowerIKBoneLimit> JointLimits; // 0x1c8(0x10)
	char pad_1D8[0x10]; // 0x1d8(0x10)
	int32_t MaxSquashIterations; // 0x1e8(0x04)
	int32_t MaxStretchIterations; // 0x1ec(0x04)
	int32_t MaxFinalIterations; // 0x1f0(0x04)
	bool AllowBoneTranslation; // 0x1f4(0x01)
	char pad_1F5[0x3]; // 0x1f5(0x03)
	float SolverAlpha; // 0x1f8(0x04)
	float DebugDrawSize; // 0x1fc(0x04)
	char pad_200[0x190]; // 0x200(0x190)
};

// ScriptStruct PowerIKRuntime.PowerIKGroundSlope
// Size: 0x94 (Inherited: 0x00)
struct FPowerIKGroundSlope {
	struct FVector StrideDirection; // 0x00(0x0c)
	float MaxGroundAngle; // 0x0c(0x04)
	float MaxNormalAngularSpeed; // 0x10(0x04)
	bool OrientToGround; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float OrientToPitch; // 0x18(0x04)
	float OrientToRoll; // 0x1c(0x04)
	bool ScaleStride; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float UphillStrideScale; // 0x24(0x04)
	float DownhillStrideScale; // 0x28(0x04)
	float SidehillStrideScale; // 0x2c(0x04)
	float SidehillPushOuterFeet; // 0x30(0x04)
	bool Lean; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float UphillLean; // 0x38(0x04)
	float DownhillLean; // 0x3c(0x04)
	float SidehillLean; // 0x40(0x04)
	bool CounterLean; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FName CounterLeanBoneName; // 0x48(0x08)
	char pad_50[0x4]; // 0x50(0x04)
	float UphillCounterLean; // 0x54(0x04)
	float DownhillCounterLean; // 0x58(0x04)
	float SidehillCounterLean; // 0x5c(0x04)
	bool MoveRoot; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float UphillVertOffset; // 0x64(0x04)
	float UphillHorizOffset; // 0x68(0x04)
	float DownhillVertOffset; // 0x6c(0x04)
	float DownhillHorizOffset; // 0x70(0x04)
	float SidehillHorizOffset; // 0x74(0x04)
	float SidehillVertOffset; // 0x78(0x04)
	bool RotateFootToGround; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	float PitchFootAmount; // 0x80(0x04)
	float RollFootAmount; // 0x84(0x04)
	float FootAngleDeltaSmoothSpeed; // 0x88(0x04)
	bool OffsetFeetPositions; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	float StaticFootOffset; // 0x90(0x04)
};

// ScriptStruct PowerIKRuntime.PowerIKGroundCollision
// Size: 0x14 (Inherited: 0x00)
struct FPowerIKGroundCollision {
	enum class ECollisionChannel CollisionChannel; // 0x00(0x01)
	bool TraceComplex; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float RayCastUp; // 0x04(0x04)
	float RayCastDown; // 0x08(0x04)
	bool EnableWallCollision; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float WallOffset; // 0x10(0x04)
};

// ScriptStruct PowerIKRuntime.PowerIKGroundFoot
// Size: 0x60 (Inherited: 0x00)
struct FPowerIKGroundFoot {
	struct FName BoneName; // 0x00(0x08)
	float PullWeight; // 0x08(0x04)
	bool NormalizePulling; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FVector PositivePullFactor; // 0x10(0x0c)
	struct FVector NegativePullFactor; // 0x1c(0x0c)
	char pad_28[0x38]; // 0x28(0x38)
};

// ScriptStruct PowerIKRuntime.AnimNode_PowerIK_Walk
// Size: 0x248 (Inherited: 0xc8)
struct FAnimNode_PowerIK_Walk : FAnimNode_SkeletalControlBase {
	struct FName CharacterRoot; // 0xc8(0x08)
	float RootRotationMultiplier; // 0xd0(0x04)
	struct FPowerIKBodyInertia BodyInertia; // 0xd4(0x14)
	struct TArray<struct FPowerIKWalkingLimb> Limbs; // 0xe8(0x10)
	char pad_F8[0xc]; // 0xf8(0x0c)
	float StepMaxReachDistance; // 0x104(0x04)
	float StepDurationMultiplier; // 0x108(0x04)
	float StepHeightMultiplier; // 0x10c(0x04)
	struct UCurveFloat* StepHeightCurve; // 0x110(0x08)
	struct UCurveFloat* StepSpeedCurve; // 0x118(0x08)
	float TeleportDistance; // 0x120(0x04)
	bool PrintTeleportWarning; // 0x124(0x01)
	enum class ECollisionChannel CollisionChannel; // 0x125(0x01)
	bool TraceComplex; // 0x126(0x01)
	char pad_127[0x1]; // 0x127(0x01)
	struct TArray<struct FPowerIKBoneBendDirection> BendDirections; // 0x128(0x10)
	struct TArray<struct FPowerIKExcludedBone> ExcludedBones; // 0x138(0x10)
	struct TArray<struct FPowerIKBoneLimit> JointLimits; // 0x148(0x10)
	int32_t MaxSquashIterations; // 0x158(0x04)
	int32_t MaxStretchIterations; // 0x15c(0x04)
	int32_t MaxFinalIterations; // 0x160(0x04)
	bool AllowBoneTranslation; // 0x164(0x01)
	char pad_165[0x3]; // 0x165(0x03)
	float SolverAlpha; // 0x168(0x04)
	float DebugDrawSize; // 0x16c(0x04)
	char pad_170[0xd8]; // 0x170(0xd8)
};

// ScriptStruct PowerIKRuntime.PowerIKWalkingLimb
// Size: 0x130 (Inherited: 0x00)
struct FPowerIKWalkingLimb {
	struct FName StartBone; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FName EndBone; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	float LimbMaxLengthMultiplier; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	float StepLengthMultiplier; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	float StepDuration; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	float StepHeight; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<int32_t> RelatedLimbs; // 0x40(0x10)
	float RotateFootToGround; // 0x50(0x04)
	float FootCollisionRadius; // 0x54(0x04)
	char pad_58[0xd8]; // 0x58(0xd8)
};

// ScriptStruct PowerIKRuntime.PlaneConstraint
// Size: 0x10 (Inherited: 0x00)
struct FPlaneConstraint {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct PowerIKRuntime.PowerIKCore
// Size: 0xa8 (Inherited: 0x00)
struct FPowerIKCore {
	char pad_0[0xa8]; // 0x00(0xa8)
};

// ScriptStruct PowerIKRuntime.PowerIKRootData
// Size: 0x28 (Inherited: 0x00)
struct FPowerIKRootData {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct PowerIKRuntime.PowerIKBoneData
// Size: 0x68 (Inherited: 0x00)
struct FPowerIKBoneData {
	char pad_0[0x68]; // 0x00(0x68)
};

// ScriptStruct PowerIKRuntime.PowerIKEffectorData
// Size: 0x30 (Inherited: 0x00)
struct FPowerIKEffectorData {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct PowerIKRuntime.RigUnit_PowerIK
// Size: 0x198 (Inherited: 0x68)
struct FRigUnit_PowerIK : FRigUnitMutable {
	struct FName CharacterRoot; // 0x68(0x08)
	float RootRotationMultiplier; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct FPowerIKEffector> Effectors; // 0x78(0x10)
	struct TArray<struct FPowerIKBoneBendDirection> BendDirections; // 0x88(0x10)
	struct TArray<struct FPowerIKExcludedBone> ExcludedBones; // 0x98(0x10)
	struct TArray<struct FPowerIKBoneLimit> JointLimits; // 0xa8(0x10)
	struct FPowerIKCenterOfGravity CenterOfGravityConstraint; // 0xb8(0x10)
	struct FPowerIKBodyInertia Inertia; // 0xc8(0x14)
	int32_t MaxSquashIterations; // 0xdc(0x04)
	int32_t MaxStretchIterations; // 0xe0(0x04)
	int32_t MaxFinalIterations; // 0xe4(0x04)
	bool AllowBoneTranslation; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	float SolverAlpha; // 0xec(0x04)
	struct FPowerIKCore Core; // 0xf0(0xa8)
};

