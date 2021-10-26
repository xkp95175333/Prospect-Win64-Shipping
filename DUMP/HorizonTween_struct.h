// Enum HorizonTween.EHorizonTweenLerpMode
enum class EHorizonTweenLerpMode : uint8 {
	Lerp,
	LerpStable,
	InterpSinIn,
	InterpSinOut,
	InterpSinInOut,
	InterpExpoIn,
	InterpExpoOut,
	InterpExpoInOut,
	InterpCircularIn,
	InterpCircularOut,
	InterpCircularInOut,
	InterpEaseIn,
	InterpEaseOut,
	InterpEaseInOut,
	BounceIn,
	BounceOut,
	BounceInOut,
	ElasticIn,
	ElasticOut,
	ElasticInOut,
	BackIn,
	BackOut,
	BackInOut,
	QuadIn,
	QuadOut,
	QuadInOut,
	CubicIn,
	CubicOut,
	CubicInOut,
	QuartIn,
	QuartOut,
	QuartInOut,
	QuintIn,
	QuintOut,
	QuintInOut,
	EHorizonTweenLerpMode_MAX,
};

// Enum HorizonTween.EHorizonTweenPlayMode
enum class EHorizonTweenPlayMode : uint8 {
	Forward,
	Reverse,
	PingPong,
	EHorizonTweenPlayMode_MAX,
};

// Enum HorizonTween.EHorizonTweenCoordinateSpace
enum class EHorizonTweenCoordinateSpace : uint8 {
	Local,
	World,
	EHorizonTweenCoordinateSpace_MAX,
};

// Enum HorizonTween.EHorizonTweenRotatorConstraints
enum class EHorizonTweenRotatorConstraints : uint8 {
	None,
	RollOnly,
	PitchOnly,
	YawOnly,
	RollAndPitchOnly,
	PitchAndYawOnly,
	RollAndYawOnly,
	EHorizonTweenRotatorConstraints_MAX,
};

// Enum HorizonTween.EHorizonTweenVector2DConstraints
enum class EHorizonTweenVector2DConstraints : uint8 {
	None,
	XOnly,
	YOnly,
	EHorizonTweenVector2DConstraints_MAX,
};

// Enum HorizonTween.EHorizonTweenVectorConstraints
enum class EHorizonTweenVectorConstraints : uint8 {
	None,
	XOnly,
	YOnly,
	ZOnly,
	XYPlane,
	YZPlane,
	XZPlane,
	EHorizonTweenVectorConstraints_MAX,
};

// ScriptStruct HorizonTween.HorizonTweenEventActorParameters
// Size: 0x740 (Inherited: 0x00)
struct FHorizonTweenEventActorParameters {
	struct FHorizonTweenEventParameters MoveFromToParam; // 0x00(0x38)
	struct FHorizonTweenEventActorMoveFromToParameters MoveFromToParamImpl; // 0x38(0x150)
	bool bMoveFromTo; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
	struct FHorizonTweenEventParameters RotatorFromToParam; // 0x190(0x38)
	struct FHorizonTweenEventActorRotatorFromToParameters RotatorFromToParamImpl; // 0x1c8(0x160)
	bool bRotateFromTo; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct FHorizonTweenEventParameters ScaleFromToParam; // 0x330(0x38)
	struct FHorizonTweenEventActorScaleFromToParameters ScaleFromToParamImpl; // 0x368(0x150)
	bool bScaleFromTo; // 0x4b8(0x01)
	char pad_4B9[0x7]; // 0x4b9(0x07)
	struct FHorizonTweenEventParameters ColorFromToParam; // 0x4c0(0x38)
	struct FHorizonTweenEventActorColorFromToParameters ColorFromToParamImpl; // 0x4f8(0x240)
	bool bColorFromTo; // 0x738(0x01)
	char pad_739[0x7]; // 0x739(0x07)
};

// ScriptStruct HorizonTween.HorizonTweenEventImplementParameters
// Size: 0x01 (Inherited: 0x00)
struct FHorizonTweenEventImplementParameters {
	bool bUseCustomCurve; // 0x00(0x01)
};

// ScriptStruct HorizonTween.HorizonTweenEventTweenListImplementParameters
// Size: 0x02 (Inherited: 0x01)
struct FHorizonTweenEventTweenListImplementParameters : FHorizonTweenEventImplementParameters {
	bool bLoopTweenList; // 0x01(0x01)
};

// ScriptStruct HorizonTween.HorizonTweenEventLinearColorParameters
// Size: 0x238 (Inherited: 0x02)
struct FHorizonTweenEventLinearColorParameters : FHorizonTweenEventTweenListImplementParameters {
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FLinearColor> TweenStartList; // 0x08(0x10)
	struct TArray<struct FLinearColor> TweenEndList; // 0x18(0x10)
	bool bSRGB; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FHorizonTweenEventCustomColorCurve CustomTweenCurve; // 0x30(0x208)
};

// ScriptStruct HorizonTween.HorizonTweenEventCustomColorCurve
// Size: 0x208 (Inherited: 0x00)
struct FHorizonTweenEventCustomColorCurve {
	struct FRuntimeCurveLinearColor CustomTweenCurve; // 0x00(0x208)
};

// ScriptStruct HorizonTween.HorizonTweenEventActorColorFromToParameters
// Size: 0x240 (Inherited: 0x238)
struct FHorizonTweenEventActorColorFromToParameters : FHorizonTweenEventLinearColorParameters {
	struct TWeakObjectPtr<struct AActor> TweenTargetWeakPtr; // 0x238(0x08)
};

// ScriptStruct HorizonTween.HorizonTweenEventParameters
// Size: 0x38 (Inherited: 0x00)
struct FHorizonTweenEventParameters {
	struct FName TweenEventName; // 0x00(0x08)
	enum class EHorizonTweenLerpMode LerpMode; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<float> LerpModeExtraParameterList; // 0x10(0x10)
	enum class EHorizonTweenPlayMode PlayMode; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t NumOfLoop; // 0x24(0x04)
	float Duration; // 0x28(0x04)
	float DelayInit; // 0x2c(0x04)
	float DelayLoop; // 0x30(0x04)
	bool bPauseOnTweenLoop; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct HorizonTween.HorizonTweenEventVectorParameters
// Size: 0x148 (Inherited: 0x02)
struct FHorizonTweenEventVectorParameters : FHorizonTweenEventTweenListImplementParameters {
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FVector> TweenStartList; // 0x08(0x10)
	struct TArray<struct FVector> TweenEndList; // 0x18(0x10)
	enum class EHorizonTweenVectorConstraints ConstraintType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FHorizonTweenEventTransformParam TransformParam; // 0x2c(0x94)
	struct FHorizonTweenEventCustomCurve CustomTweenCurve; // 0xc0(0x88)
};

// ScriptStruct HorizonTween.HorizonTweenEventCustomCurve
// Size: 0x88 (Inherited: 0x00)
struct FHorizonTweenEventCustomCurve {
	struct FRuntimeFloatCurve CustomTweenCurve; // 0x00(0x88)
};

// ScriptStruct HorizonTween.HorizonTweenEventTransformParam
// Size: 0x94 (Inherited: 0x00)
struct FHorizonTweenEventTransformParam {
	bool bSweep; // 0x00(0x01)
	bool bTeleport; // 0x01(0x01)
	bool bCollideAndFinishEvent; // 0x02(0x01)
	bool bCollideAndFinishEventTweenToEnd; // 0x03(0x01)
	enum class EHorizonTweenCoordinateSpace CoordinateSpaceType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FHitResult SweepHitResult; // 0x08(0x8c)
};

// ScriptStruct HorizonTween.HorizonTweenEventActorScaleFromToParameters
// Size: 0x150 (Inherited: 0x148)
struct FHorizonTweenEventActorScaleFromToParameters : FHorizonTweenEventVectorParameters {
	struct TWeakObjectPtr<struct AActor> TweenTargetWeakPtr; // 0x148(0x08)
};

// ScriptStruct HorizonTween.HorizonTweenEventRotatorParameters
// Size: 0x150 (Inherited: 0x02)
struct FHorizonTweenEventRotatorParameters : FHorizonTweenEventTweenListImplementParameters {
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FRotator> TweenStartList; // 0x08(0x10)
	struct TArray<struct FRotator> TweenEndList; // 0x18(0x10)
	enum class EHorizonTweenRotatorConstraints ConstraintType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FHorizonTweenEventTransformParam TransformParam; // 0x2c(0x94)
	struct FHorizonTweenEventCustomCurve CustomTweenCurve; // 0xc0(0x88)
	bool bUseShortestPath; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
};

// ScriptStruct HorizonTween.HorizonTweenEventActorRotatorFromToParameters
// Size: 0x160 (Inherited: 0x150)
struct FHorizonTweenEventActorRotatorFromToParameters : FHorizonTweenEventRotatorParameters {
	struct TWeakObjectPtr<struct AActor> TweenTargetWeakPtr; // 0x150(0x08)
	bool bShortestPath; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
};

// ScriptStruct HorizonTween.HorizonTweenEventActorMoveFromToParameters
// Size: 0x150 (Inherited: 0x148)
struct FHorizonTweenEventActorMoveFromToParameters : FHorizonTweenEventVectorParameters {
	struct TWeakObjectPtr<struct AActor> TweenTargetWeakPtr; // 0x148(0x08)
};

// ScriptStruct HorizonTween.HorizonTweenEventSplinePathParameters
// Size: 0x138 (Inherited: 0x01)
struct FHorizonTweenEventSplinePathParameters : FHorizonTweenEventImplementParameters {
	char pad_1[0x7]; // 0x01(0x07)
	struct USplineComponent* SplineComponent; // 0x08(0x08)
	bool bUseConstantVelocity; // 0x10(0x01)
	bool bTweenLocation; // 0x11(0x01)
	bool bTweenRotation; // 0x12(0x01)
	bool bTweenScale; // 0x13(0x01)
	enum class EHorizonTweenVectorConstraints LocationConstraintType; // 0x14(0x01)
	enum class EHorizonTweenRotatorConstraints RotatorConstraintType; // 0x15(0x01)
	enum class EHorizonTweenVectorConstraints ScaleConstraintType; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	struct FHorizonTweenEventTransformParam TransformParam; // 0x18(0x94)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FHorizonTweenEventCustomCurve CustomTweenCurve; // 0xb0(0x88)
};

// ScriptStruct HorizonTween.HorizonTweenEventActorMoveSplinePathParameters
// Size: 0x140 (Inherited: 0x138)
struct FHorizonTweenEventActorMoveSplinePathParameters : FHorizonTweenEventSplinePathParameters {
	struct TWeakObjectPtr<struct AActor> TweenTargetWeakPtr; // 0x138(0x08)
};

// ScriptStruct HorizonTween.HorizonTweenEventFloatParameters
// Size: 0xb0 (Inherited: 0x02)
struct FHorizonTweenEventFloatParameters : FHorizonTweenEventTweenListImplementParameters {
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<float> TweenStartList; // 0x08(0x10)
	struct TArray<float> TweenEndList; // 0x18(0x10)
	struct FHorizonTweenEventCustomCurve CustomTweenCurve; // 0x28(0x88)
};

// ScriptStruct HorizonTween.HorizonTweenEventWidgetVector2DParameters
// Size: 0xb8 (Inherited: 0x02)
struct FHorizonTweenEventWidgetVector2DParameters : FHorizonTweenEventTweenListImplementParameters {
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FVector2D> TweenStartList; // 0x08(0x10)
	struct TArray<struct FVector2D> TweenEndList; // 0x18(0x10)
	enum class EHorizonTweenVector2DConstraints ConstraintType; // 0x28(0x01)
	enum class EHorizonTweenCoordinateSpace CoordinateSpaceType; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct FHorizonTweenEventCustomCurve CustomTweenCurve; // 0x30(0x88)
};

// ScriptStruct HorizonTween.HorizonTweenEventSceneComponentParameters
// Size: 0x740 (Inherited: 0x00)
struct FHorizonTweenEventSceneComponentParameters {
	struct FHorizonTweenEventParameters MoveFromToParam; // 0x00(0x38)
	struct FHorizonTweenEventSceneComponentMoveFromToParameters MoveFromToParamImpl; // 0x38(0x150)
	bool bMoveFromTo; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
	struct FHorizonTweenEventParameters RotatorFromToParam; // 0x190(0x38)
	struct FHorizonTweenEventSceneComponentRotatorFromToParameters RotatorFromToParamImpl; // 0x1c8(0x160)
	bool bRotateFromTo; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct FHorizonTweenEventParameters ScaleFromToParam; // 0x330(0x38)
	struct FHorizonTweenEventSceneComponentScaleFromToParameters ScaleFromToParamImpl; // 0x368(0x150)
	bool bScaleFromTo; // 0x4b8(0x01)
	char pad_4B9[0x7]; // 0x4b9(0x07)
	struct FHorizonTweenEventParameters ColorFromToParam; // 0x4c0(0x38)
	struct FHorizonTweenEventSceneComponentColorFromToParameters ColorFromToParamImpl; // 0x4f8(0x240)
	bool bColorFromTo; // 0x738(0x01)
	char pad_739[0x7]; // 0x739(0x07)
};

// ScriptStruct HorizonTween.HorizonTweenEventSceneComponentColorFromToParameters
// Size: 0x240 (Inherited: 0x238)
struct FHorizonTweenEventSceneComponentColorFromToParameters : FHorizonTweenEventLinearColorParameters {
	struct TWeakObjectPtr<struct USceneComponent> TweenTargetWeakPtr; // 0x238(0x08)
};

// ScriptStruct HorizonTween.HorizonTweenEventSceneComponentScaleFromToParameters
// Size: 0x150 (Inherited: 0x148)
struct FHorizonTweenEventSceneComponentScaleFromToParameters : FHorizonTweenEventVectorParameters {
	struct TWeakObjectPtr<struct USceneComponent> TweenTargetWeakPtr; // 0x148(0x08)
};

// ScriptStruct HorizonTween.HorizonTweenEventSceneComponentRotatorFromToParameters
// Size: 0x160 (Inherited: 0x150)
struct FHorizonTweenEventSceneComponentRotatorFromToParameters : FHorizonTweenEventRotatorParameters {
	struct TWeakObjectPtr<struct USceneComponent> TweenTargetWeakPtr; // 0x150(0x08)
	bool bShortestPath; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
};

// ScriptStruct HorizonTween.HorizonTweenEventSceneComponentMoveFromToParameters
// Size: 0x150 (Inherited: 0x148)
struct FHorizonTweenEventSceneComponentMoveFromToParameters : FHorizonTweenEventVectorParameters {
	struct TWeakObjectPtr<struct USceneComponent> TweenTargetWeakPtr; // 0x148(0x08)
};

// ScriptStruct HorizonTween.HorizonTweenEventSceneComponentMoveSplinePathParameters
// Size: 0x140 (Inherited: 0x138)
struct FHorizonTweenEventSceneComponentMoveSplinePathParameters : FHorizonTweenEventSplinePathParameters {
	struct TWeakObjectPtr<struct USceneComponent> TweenTargetWeakPtr; // 0x138(0x08)
};

// ScriptStruct HorizonTween.HorizonTweenEventSlateWidgetMoveSplinePathParameters
// Size: 0x148 (Inherited: 0x138)
struct FHorizonTweenEventSlateWidgetMoveSplinePathParameters : FHorizonTweenEventSplinePathParameters {
	char pad_138[0x8]; // 0x138(0x08)
	bool bTweenSheer; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
};

// ScriptStruct HorizonTween.HorizonTweenEventSlateWidgetColorFromToParameters
// Size: 0x240 (Inherited: 0x238)
struct FHorizonTweenEventSlateWidgetColorFromToParameters : FHorizonTweenEventLinearColorParameters {
	char pad_238[0x8]; // 0x238(0x08)
};

// ScriptStruct HorizonTween.HorizonTweenEventSlateWidgetSheerFromToParameters
// Size: 0xc0 (Inherited: 0xb8)
struct FHorizonTweenEventSlateWidgetSheerFromToParameters : FHorizonTweenEventWidgetVector2DParameters {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// ScriptStruct HorizonTween.HorizonTweenEventSlateWidgetScaleFromToParameters
// Size: 0xc0 (Inherited: 0xb8)
struct FHorizonTweenEventSlateWidgetScaleFromToParameters : FHorizonTweenEventWidgetVector2DParameters {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// ScriptStruct HorizonTween.HorizonTweenEventSlateWidgetRotatorFromToParameters
// Size: 0xc0 (Inherited: 0xb0)
struct FHorizonTweenEventSlateWidgetRotatorFromToParameters : FHorizonTweenEventFloatParameters {
	char pad_B0[0x8]; // 0xb0(0x08)
	bool bShortestPath; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// ScriptStruct HorizonTween.HorizonTweenEventSlateWidgetMoveFromToParameters
// Size: 0xc0 (Inherited: 0xb8)
struct FHorizonTweenEventSlateWidgetMoveFromToParameters : FHorizonTweenEventWidgetVector2DParameters {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// ScriptStruct HorizonTween.HorizonTweenEventWidgetParameters
// Size: 0x680 (Inherited: 0x00)
struct FHorizonTweenEventWidgetParameters {
	struct FHorizonTweenEventParameters MoveFromToParam; // 0x00(0x38)
	struct FHorizonTweenEventWidgetMoveFromToParameters MoveFromToParamImpl; // 0x38(0xc0)
	bool bMoveFromTo; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FHorizonTweenEventParameters RotatorFromToParam; // 0x100(0x38)
	struct FHorizonTweenEventWidgetRotatorFromToParameters RotatorFromToParamImpl; // 0x138(0xc0)
	bool bRotateFromTo; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
	struct FHorizonTweenEventParameters ScaleFromToParam; // 0x200(0x38)
	struct FHorizonTweenEventWidgetScaleFromToParameters ScaleFromToParamImpl; // 0x238(0xc0)
	bool bScaleFromTo; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct FHorizonTweenEventParameters SheerFromToParam; // 0x300(0x38)
	struct FHorizonTweenEventWidgetSheerFromToParameters SheerFromToParamImpl; // 0x338(0xc0)
	bool bSheerFromTo; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
	struct FHorizonTweenEventParameters ColorFromToParam; // 0x400(0x38)
	struct FHorizonTweenEventWidgetColorFromToParameters ColorFromToParamImpl; // 0x438(0x240)
	bool bColorFromTo; // 0x678(0x01)
	char pad_679[0x7]; // 0x679(0x07)
};

// ScriptStruct HorizonTween.HorizonTweenEventWidgetColorFromToParameters
// Size: 0x240 (Inherited: 0x238)
struct FHorizonTweenEventWidgetColorFromToParameters : FHorizonTweenEventLinearColorParameters {
	struct TWeakObjectPtr<struct UWidget> TweenTargetWeakPtr; // 0x238(0x08)
};

// ScriptStruct HorizonTween.HorizonTweenEventWidgetSheerFromToParameters
// Size: 0xc0 (Inherited: 0xb8)
struct FHorizonTweenEventWidgetSheerFromToParameters : FHorizonTweenEventWidgetVector2DParameters {
	struct TWeakObjectPtr<struct UWidget> TweenTargetWeakPtr; // 0xb8(0x08)
};

// ScriptStruct HorizonTween.HorizonTweenEventWidgetScaleFromToParameters
// Size: 0xc0 (Inherited: 0xb8)
struct FHorizonTweenEventWidgetScaleFromToParameters : FHorizonTweenEventWidgetVector2DParameters {
	struct TWeakObjectPtr<struct UWidget> TweenTargetWeakPtr; // 0xb8(0x08)
};

// ScriptStruct HorizonTween.HorizonTweenEventWidgetRotatorFromToParameters
// Size: 0xc0 (Inherited: 0xb0)
struct FHorizonTweenEventWidgetRotatorFromToParameters : FHorizonTweenEventFloatParameters {
	struct TWeakObjectPtr<struct UWidget> TweenTargetWeakPtr; // 0xb0(0x08)
	bool bShortestPath; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// ScriptStruct HorizonTween.HorizonTweenEventWidgetMoveFromToParameters
// Size: 0xc0 (Inherited: 0xb8)
struct FHorizonTweenEventWidgetMoveFromToParameters : FHorizonTweenEventWidgetVector2DParameters {
	struct TWeakObjectPtr<struct UWidget> TweenTargetWeakPtr; // 0xb8(0x08)
};

// ScriptStruct HorizonTween.HorizonTweenEventWidgetMoveSplinePathParameters
// Size: 0x148 (Inherited: 0x138)
struct FHorizonTweenEventWidgetMoveSplinePathParameters : FHorizonTweenEventSplinePathParameters {
	struct TWeakObjectPtr<struct UWidget> TweenTargetWeakPtr; // 0x138(0x08)
	bool bTweenSheer; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
};

