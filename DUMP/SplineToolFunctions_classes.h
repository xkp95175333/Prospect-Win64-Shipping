// BlueprintGeneratedClass SplineToolFunctions.SplineToolFunctions_C
// Size: 0x28 (Inherited: 0x28)
struct USplineToolFunctions_C : UBlueprintFunctionLibrary {

	void Import(struct TArray<struct FSplinePoint> SplinePoint, struct USplineComponent* Spline, struct UObject* __WorldContext); // Function SplineToolFunctions.SplineToolFunctions_C.Import // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Export(struct USplineComponent* Spline, struct UObject* __WorldContext, struct TArray<struct FSplinePoint> Points); // Function SplineToolFunctions.SplineToolFunctions_C.Export // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void AssignStartEndData(int32_t CurrentIndex, int32_t Spacing, struct USplineComponent* Spline, float OffsetDistanceMin, float OffsetDistanceMax, struct UObject* __WorldContext, float StartDistance, float EndDistance, struct FVector StartLocation, struct FVector StartTangent, struct FVector EndLocation, struct FVector EndTangent); // Function SplineToolFunctions.SplineToolFunctions_C.AssignStartEndData // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void AdjustLandscapeToSpline(struct USplineComponent* Spline, float Width, float Falloff, float Offset, bool PushUp, bool PushDown, struct UObject* __WorldContext); // Function SplineToolFunctions.SplineToolFunctions_C.AdjustLandscapeToSpline // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void AdjustSplineToLandscape(struct USplineComponent* Spline, bool PushDown, bool PushUp, float Offset, struct UObject* __WorldContext); // Function SplineToolFunctions.SplineToolFunctions_C.AdjustSplineToLandscape // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

