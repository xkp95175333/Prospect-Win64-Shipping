// BlueprintGeneratedClass BP_AimAssist.BP_AimAssist_C
// Size: 0x250 (Inherited: 0xb0)
struct UBP_AimAssist_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct USceneComponent* CameraManagerTransformComponent; // 0xb8(0x08)
	enum class ENUM_CharacterAimState CharacterAimState; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	struct FSTR_AimAssistWPNPresetDesc AimAssistWPNPresetLib; // 0xc4(0x48)
	int32_t TraceSegments; // 0x10c(0x04)
	float TraceRate; // 0x110(0x04)
	float TargetPrecision; // 0x114(0x04)
	struct FSTR_AimAssistTarget CurrentTarget; // 0x118(0x28)
	float CurrentHoldTargetTime; // 0x140(0x04)
	struct FRotator AutoAimRotator; // 0x144(0x0c)
	struct FVector CentralLineEndPoint; // 0x150(0x0c)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct FSTR_AimAssistPresetDesc AimAssistPresetLib; // 0x160(0x30)
	float PreviousTargetAngle; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
	struct APawn* Pawn; // 0x198(0x08)
	struct UCurveFloat* CurveMagnetismSens; // 0x1a0(0x08)
	float AddedControlRotationAngleYaw; // 0x1a8(0x04)
	float AddedControlRotationAnglePitch; // 0x1ac(0x04)
	float AutoAimCoefficient; // 0x1b0(0x04)
	float AutoAimAngle; // 0x1b4(0x04)
	float MagnetismCoefficient; // 0x1b8(0x04)
	float FinalMagnetismCoefficient; // 0x1bc(0x04)
	float AutoAimDistanceCoefficient; // 0x1c0(0x04)
	float MagnetismAngleCoefficient; // 0x1c4(0x04)
	float MagnetismDistanceCoefficient; // 0x1c8(0x04)
	float AutoAimAngleCoefficient; // 0x1cc(0x04)
	float AngularVelocityYaw; // 0x1d0(0x04)
	float AngularVelocityPitch; // 0x1d4(0x04)
	float PlayerInputMax; // 0x1d8(0x04)
	float MagnetismSensCoefficient; // 0x1dc(0x04)
	float FrictionFraction; // 0x1e0(0x04)
	struct FVector CameraVelocity; // 0x1e4(0x0c)
	struct FVector TargetVelocity; // 0x1f0(0x0c)
	float AdhesionFraction; // 0x1fc(0x04)
	float ControllerYawInput; // 0x200(0x04)
	float ControllerPitchInput; // 0x204(0x04)
	float MouseYawInput; // 0x208(0x04)
	float MousePitchInput; // 0x20c(0x04)
	float FinalYawInput; // 0x210(0x04)
	float FinalPitchInput; // 0x214(0x04)
	enum class EDrawDebugTrace DrawConeTraces; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
	struct TArray<enum class EObjectTypeQuery> ObjectTypeForConeTrace; // 0x220(0x10)
	struct FName Aim Assist WPN Preset Name; // 0x230(0x08)
	bool Found Valid Target?; // 0x238(0x01)
	bool Scanning?; // 0x239(0x01)
	char pad_23A[0x2]; // 0x23a(0x02)
	struct FName Default Aim Preset ; // 0x23c(0x08)
	char pad_244[0x4]; // 0x244(0x04)
	struct FTimerHandle DefiningTargetTimerHandle; // 0x248(0x08)

	void GetAutoAimRotator(struct FRotator AutoAimRotator); // Function BP_AimAssist.BP_AimAssist_C.GetAutoAimRotator // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetAutoAimPureAngle(float AutoAimAngle, bool IsAngleValueNOTNull?); // Function BP_AimAssist.BP_AimAssist_C.GetAutoAimPureAngle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void ModifyFrictionByMovementCoeff(float Initial Friction Value, float Movement Coeff, float Final Friction); // Function BP_AimAssist.BP_AimAssist_C.ModifyFrictionByMovementCoeff // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Logging(); // Function BP_AimAssist.BP_AimAssist_C.Logging // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void AdditionalCheckHittingTarget(struct FVector Start Point, struct FVector Forward Vector, bool IsHittedTargetDirectTrace?); // Function BP_AimAssist.BP_AimAssist_C.AdditionalCheckHittingTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetAutoAimAngle(float AutoAimAngle); // Function BP_AimAssist.BP_AimAssist_C.GetAutoAimAngle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetAutoAimRotatorPure(struct FRotator AutoAimRotator); // Function BP_AimAssist.BP_AimAssist_C.GetAutoAimRotatorPure // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetCurrentHoldTargetTime(float CurrentHoldTargetTime); // Function BP_AimAssist.BP_AimAssist_C.GetCurrentHoldTargetTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetFoundValidTarget(bool Found Valid Target?); // Function BP_AimAssist.BP_AimAssist_C.GetFoundValidTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetAimAssistPresetSettings(struct FString PresetName, float HoldTargetTime, float MagnetismFriction In Bliend, float MagnetismAdhesion In Bliend, float MagnetismFriction In Aim, float MagnetismAdhesion In Aim); // Function BP_AimAssist.BP_AimAssist_C.GetAimAssistPresetSettings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetMagnetismAImSettings(float MagnetismAngle, float MagnetismDistance, float MagnetismFalloffDistance, float MagnetismNearFalloffDistance); // Function BP_AimAssist.BP_AimAssist_C.GetMagnetismAImSettings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetMagnetismBliendSettings(float MagnetismAngle, float MagnetismDistance, float MagnetismFalloffDistance, float MagnetismNearFalloffDistance); // Function BP_AimAssist.BP_AimAssist_C.GetMagnetismBliendSettings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetAutoAimAimSettings(float DeviationAngle, float AutoAimAngle, float AutoAimDistance, float AutoAimFalloffDistance, float AutoAimNearFalloffDistance); // Function BP_AimAssist.BP_AimAssist_C.GetAutoAimAimSettings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetAutoAimBliendSettings(float DeviationAngle, float AutoAimAngle, float AutoAimDistance, float AutoAimFalloffDistance, float AutoAimNearFalloffDistance); // Function BP_AimAssist.BP_AimAssist_C.GetAutoAimBliendSettings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetAimAssistWPNPresetName(struct FName Aim Assist WPN Preset Name); // Function BP_AimAssist.BP_AimAssist_C.GetAimAssistWPNPresetName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void SetPitchInputByController(float Pitch, float Input Pitch Value After Inf Magsm); // Function BP_AimAssist.BP_AimAssist_C.SetPitchInputByController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetYawInputByController(float Yaw, float Input Yaw Value After Inf Magsm); // Function BP_AimAssist.BP_AimAssist_C.SetYawInputByController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetMagnetismStatus(float YawInput, float PitchInput, float PlayerInputMax, float MagnetismSensCoefficient, float FinalMagnetismCoefficient, float Friction, float AddedControlRotationAngleYaw, float AddedControlRotationAnglePitch, float FrictionFraction); // Function BP_AimAssist.BP_AimAssist_C.GetMagnetismStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetTargetBone(struct FName TargetHitBoneName); // Function BP_AimAssist.BP_AimAssist_C.GetTargetBone // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetTargetActor(struct AActor* Current Target Hit Actor); // Function BP_AimAssist.BP_AimAssist_C.GetTargetActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetTargetImpactPoint(struct FVector TargetImpactPoint); // Function BP_AimAssist.BP_AimAssist_C.GetTargetImpactPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetDistanceToTarget(float TargetDistance); // Function BP_AimAssist.BP_AimAssist_C.GetDistanceToTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetMagnetismCoefficients(float MagnetismCoefficient, float FinalMagnetismCoefficient, float MagnetismAngleCoefficient, float MagnetismDistanceCoefficient, float MagnetismSensCoefficient); // Function BP_AimAssist.BP_AimAssist_C.GetMagnetismCoefficients // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetAutoAimCoefficients(float AutoAimCoefficient, float AutoAimDistanceCoefficient, float AutoAimAngleCoefficient); // Function BP_AimAssist.BP_AimAssist_C.GetAutoAimCoefficients // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetAimAssistPreset(struct FSTR_AimAssistPresetDesc AimAssistPresetLib); // Function BP_AimAssist.BP_AimAssist_C.GetAimAssistPreset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetAimAssistWPNPreset(struct FSTR_AimAssistWPNPresetDesc AimAssistWPNPresetLib); // Function BP_AimAssist.BP_AimAssist_C.GetAimAssistWPNPreset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetAimState(enum class ENUM_CharacterAimState AimState); // Function BP_AimAssist.BP_AimAssist_C.GetAimState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void SetPitchInputByMouse(float Pitch, float Input Pitch Value After Inf Magsm); // Function BP_AimAssist.BP_AimAssist_C.SetPitchInputByMouse // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetYawInputByMouse(float Yaw, float Input Yaw Value After Inf Magsm); // Function BP_AimAssist.BP_AimAssist_C.SetYawInputByMouse // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ApplyMagnetism(float MagnetismCoefficient, struct FVector CameraWorldLocation); // Function BP_AimAssist.BP_AimAssist_C.ApplyMagnetism // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ApplyAutoAim(struct FVector StartPoint, struct FVector ForwardVector, struct FVector WorldPoint); // Function BP_AimAssist.BP_AimAssist_C.ApplyAutoAim // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void CalculateCoefficients(float TargetDistance, float TargetAngle, float AutoAimCoefficient, float MagnetismCoefficient); // Function BP_AimAssist.BP_AimAssist_C.CalculateCoefficients // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreciseTarget(struct FSTR_AimAssistTarget AimAssistTarget, struct FVector CameraWorldLocation, struct FVector CameraForwardVector, float TraceDistance); // Function BP_AimAssist.BP_AimAssist_C.PreciseTarget // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetSuitableTargetFast(struct FVector CameraWorldLocation, struct FVector CameraForwardVector, struct FSTR_AimAssistTarget AimAssistTarget); // Function BP_AimAssist.BP_AimAssist_C.GetSuitableTargetFast // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void DefiningTarget(); // Function BP_AimAssist.BP_AimAssist_C.DefiningTarget // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void InitializeAimPresetLib(struct FName RowName); // Function BP_AimAssist.BP_AimAssist_C.InitializeAimPresetLib // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetCharacterAimState(enum class ENUM_CharacterAimState CharacterAimState); // Function BP_AimAssist.BP_AimAssist_C.SetCharacterAimState // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetAimAssitWPNPreset(struct FName Preset Name); // Function BP_AimAssist.BP_AimAssist_C.SetAimAssitWPNPreset // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void AimAssistScanTurn ON OFF(bool Scanning?); // Function BP_AimAssist.BP_AimAssist_C.AimAssistScanTurn ON OFF // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function BP_AimAssist.BP_AimAssist_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void SetAnimAssistPreset(struct FName RowName); // Function BP_AimAssist.BP_AimAssist_C.SetAnimAssistPreset // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void CharacterChangeState(enum class ENUM_CharacterAimState newState); // Function BP_AimAssist.BP_AimAssist_C.CharacterChangeState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void InitializeAimAssistWPNPreset(struct FString PresetName); // Function BP_AimAssist.BP_AimAssist_C.InitializeAimAssistWPNPreset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void KeybindingDataChanged(); // Function BP_AimAssist.BP_AimAssist_C.KeybindingDataChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StartTimerBasedOnInputDevice(); // Function BP_AimAssist.BP_AimAssist_C.StartTimerBasedOnInputDevice // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_BP_AimAssist(int32_t EntryPoint); // Function BP_AimAssist.BP_AimAssist_C.ExecuteUbergraph_BP_AimAssist // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

