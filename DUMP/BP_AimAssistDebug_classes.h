// BlueprintGeneratedClass BP_AimAssistDebug.BP_AimAssistDebug_C
// Size: 0x133 (Inherited: 0xb0)
struct UBP_AimAssistDebug_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct FSTR_AimAssistWPNPresetDesc Aim Assist WPN Preset; // 0xb8(0x48)
	bool IsAimState?; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	struct FVector CameraLocation; // 0x104(0x0c)
	struct FVector CameraDirectionVector; // 0x110(0x0c)
	bool Toggle Visible Cones?; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	struct UWBP_AimAssistDebugUI_C* DebugUI; // 0x120(0x08)
	struct UBP_AimAssist_C* AimAssistRef; // 0x128(0x08)
	bool Toggle Visible Circles?; // 0x130(0x01)
	bool Toggle Visible Influence Point?; // 0x131(0x01)
	bool Toggle Visible Auto Aim Point?; // 0x132(0x01)

	void GetMagnetismAIMProperties(float MagnetismAngle, float MagnetismDistance, float MagnetismFalloffDistance, float MagnetismNearFalloffDistance); // Function BP_AimAssistDebug.BP_AimAssistDebug_C.GetMagnetismAIMProperties // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetAutoAimAIMProperties(float DeviationAngle, float AutoAimAngle, float AutoAimDistance, float AutoAimFalloffDistance, float AutoAimNearFalloffDistance); // Function BP_AimAssistDebug.BP_AimAssistDebug_C.GetAutoAimAIMProperties // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetMagnetismBlindProperties(float MagnetismAngle, float MagnetismDistance, float MagnetismFalloffDistance, float MagnetismNearFalloffDistance); // Function BP_AimAssistDebug.BP_AimAssistDebug_C.GetMagnetismBlindProperties // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void DrawDebugCircle(struct FVector Camera Location, struct FVector Camera Direction, float Cone Angle, struct FRotator Camera Rotation, struct FLinearColor Debug Color); // Function BP_AimAssistDebug.BP_AimAssistDebug_C.DrawDebugCircle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetAutoAimBlindProperties(float DeviationAngle, float AutoAimAngle, float AutoAimDistance, float AutoAimFalloffDistance, float AutoAimNearFalloffDistance); // Function BP_AimAssistDebug.BP_AimAssistDebug_C.GetAutoAimBlindProperties // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void DrawnCone(struct FVector Origin, struct FVector Direction, float Angle, float Distance, struct FLinearColor LineColor); // Function BP_AimAssistDebug.BP_AimAssistDebug_C.DrawnCone // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveTick(float DeltaSeconds); // Function BP_AimAssistDebug.BP_AimAssistDebug_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OpenTickForDebug(); // Function BP_AimAssistDebug.BP_AimAssistDebug_C.OpenTickForDebug // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void CreateDebug(); // Function BP_AimAssistDebug.BP_AimAssistDebug_C.CreateDebug // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void RemoveDebug(); // Function BP_AimAssistDebug.BP_AimAssistDebug_C.RemoveDebug // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void CloseTickForDebug(); // Function BP_AimAssistDebug.BP_AimAssistDebug_C.CloseTickForDebug // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ToggleDebug(); // Function BP_AimAssistDebug.BP_AimAssistDebug_C.ToggleDebug // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_BP_AimAssistDebug(int32_t EntryPoint); // Function BP_AimAssistDebug.BP_AimAssistDebug_C.ExecuteUbergraph_BP_AimAssistDebug // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

