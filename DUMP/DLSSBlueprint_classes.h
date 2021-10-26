// Class DLSSBlueprint.DLSSLibrary
// Size: 0x28 (Inherited: 0x28)
struct UDLSSLibrary : UBlueprintFunctionLibrary {

	void SetDLSSSharpness(float Sharpness); // Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x1326b50
	void SetDLSSMode(enum class UDLSSMode DLSSMode); // Function DLSSBlueprint.DLSSLibrary.SetDLSSMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x1326ae0
	enum class UDLSSSupport QueryDLSSSupport(); // Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1326ab0
	bool IsDLSSSupported(); // Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1326980
	bool IsDLSSModeSupported(enum class UDLSSMode DLSSMode); // Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1326a30
	struct TArray<enum class UDLSSMode> GetSupportedDLSSModes(); // Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x13269b0
	float GetDLSSSharpness(); // Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1326950
	void GetDLSSScreenPercentageRange(float MinScreenPercentage, float MaxScreenPercentage); // Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1326870
	void GetDLSSModeInformation(enum class UDLSSMode DLSSMode, struct FVector2D ScreenResolution, bool bIsSupported, float OptimalScreenPercentage, bool bIsFixedScreenPercentage, float MinScreenPercentage, float MaxScreenPercentage, float OptimalSharpness); // Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x13265d0
	enum class UDLSSMode GetDLSSMode(); // Function DLSSBlueprint.DLSSLibrary.GetDLSSMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x13265a0
	void GetDLSSMinimumDriverVersion(int32_t MinDriverVersionMajor, int32_t MinDriverVersionMinor); // Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x13264c0
	enum class UDLSSMode GetDefaultDLSSMode(); // Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1326980
};

