// WidgetBlueprintGeneratedClass WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C
// Size: 0x390 (Inherited: 0x260)
struct UWBP_AimAssistDebugUI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* text_AutoAimAngleCoeff; // 0x268(0x08)
	struct UTextBlock* text_AutoAimAngleCoeff_2; // 0x270(0x08)
	struct UTextBlock* text_AutoAimAngleCoeff_3; // 0x278(0x08)
	struct UTextBlock* text_AutoAimAngleCoeff_4; // 0x280(0x08)
	struct UTextBlock* text_AutoAimAngleCoeff_5; // 0x288(0x08)
	struct UTextBlock* text_AutoAimAngleCoeff_6; // 0x290(0x08)
	struct UTextBlock* text_AutoAimAngleCoeff_7; // 0x298(0x08)
	struct UTextBlock* text_AutoAimAngleCoeff_8; // 0x2a0(0x08)
	struct UTextBlock* text_AutoAimAngleCoeff_9; // 0x2a8(0x08)
	struct UTextBlock* text_AutoAimAngleCoeff_10; // 0x2b0(0x08)
	struct UTextBlock* text_AutoAimAngleCoeff_11; // 0x2b8(0x08)
	struct UTextBlock* text_AutoAimAngleCoeff_12; // 0x2c0(0x08)
	struct UTextBlock* text_AutoAimAngleCoeff_13; // 0x2c8(0x08)
	struct UTextBlock* text_AutoAimAngleCoeff_14; // 0x2d0(0x08)
	struct UTextBlock* text_AutoAimAngleCoeff_15; // 0x2d8(0x08)
	struct UTextBlock* text_AutoAimAngleCoeff_16; // 0x2e0(0x08)
	struct UTextBlock* text_AutoAimAngleCoeff_17; // 0x2e8(0x08)
	struct UTextBlock* text_AutoAimAngleCoeff_18; // 0x2f0(0x08)
	struct UTextBlock* text_AutoAimAngleCoeff_19; // 0x2f8(0x08)
	struct UTextBlock* text_AutoAimAngleCoeff_20; // 0x300(0x08)
	struct UTextBlock* text_AutoAimAngleCoeff_21; // 0x308(0x08)
	struct UTextBlock* text_AutoAimAngleCoeff_22; // 0x310(0x08)
	struct UTextBlock* text_AutoAimAngleCoeff_23; // 0x318(0x08)
	struct UTextBlock* text_AutoAimAngleCoeff_24; // 0x320(0x08)
	struct UTextBlock* TextBlock; // 0x328(0x08)
	struct UTextBlock* TextBlock_2; // 0x330(0x08)
	struct UTextBlock* TextBlock_3; // 0x338(0x08)
	struct UTextBlock* TextBlock_4; // 0x340(0x08)
	struct UTextBlock* TextBlock_5; // 0x348(0x08)
	struct UTextBlock* TextBlock_6; // 0x350(0x08)
	struct UTextBlock* TextBlock_7; // 0x358(0x08)
	struct UTextBlock* TextBlock_8; // 0x360(0x08)
	struct UTextBlock* TextBlock_12; // 0x368(0x08)
	struct UTextBlock* TextBlock_13; // 0x370(0x08)
	struct UTextBlock* TextBlock_14; // 0x378(0x08)
	struct UTextBlock* TextBlock_377; // 0x380(0x08)
	struct UBP_AimAssist_C* AimAssist; // 0x388(0x08)

	struct FText UpdateFrictionFraction(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateFrictionFraction // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateAddedControlRotationAnglePitch(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateAddedControlRotationAnglePitch // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateAddedControlRotationAngleYaw(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateAddedControlRotationAngleYaw // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateFriction(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateFriction // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdatePlayerInputMax(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdatePlayerInputMax // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdatePitchInput(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdatePitchInput // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateYawInput(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateYawInput // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateCurrentHoldTargetTime(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateCurrentHoldTargetTime // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateAutoAimRotator(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateAutoAimRotator // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateTargetHitBoneName(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateTargetHitBoneName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateTargetHitActorName(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateTargetHitActorName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateTargetDistance(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateTargetDistance // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateMagnetismDistanceCoefficient(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateMagnetismDistanceCoefficient // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateMagnetismAngleCoefficient(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateMagnetismAngleCoefficient // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateFinalMagnetismCoefficient(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateFinalMagnetismCoefficient // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateMagnetismSensCoefficient(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateMagnetismSensCoefficient // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateMagnetismCoefficient(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateMagnetismCoefficient // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateAutoAimAngleCoefficient(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateAutoAimAngleCoefficient // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateAutoAimDistanceCoefficient(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateAutoAimDistanceCoefficient // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateAutoAimCoefficient(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateAutoAimCoefficient // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateAimAssistPresetMagnetismAdhesion(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateAimAssistPresetMagnetismAdhesion // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateAimAssistPresetMagnetismFriction (); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateAimAssistPresetMagnetismFriction  // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateAimAssisPresetHoldTargetTime(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateAimAssisPresetHoldTargetTime // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateAimAssisPresetName(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateAimAssisPresetName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateMagnetismNearFalloffDistance(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateMagnetismNearFalloffDistance // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateMagnetismFalloffDistance(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateMagnetismFalloffDistance // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateMagnetismDistance(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateMagnetismDistance // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateMagnetismAngle(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateMagnetismAngle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateAutoAimNearFalloffDistance(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateAutoAimNearFalloffDistance // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateAutoAimFalloffDistance(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateAutoAimFalloffDistance // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateAutoAimDistance(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateAutoAimDistance // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateAutoAimAngle(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateAutoAimAngle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateDeviationAngle(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateDeviationAngle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateAimAssistWPNPresetName(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateAimAssistWPNPresetName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	struct FText UpdateAimStateFromComponent(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.UpdateAimStateFromComponent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void Construct(); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_AimAssistDebugUI(int32_t EntryPoint); // Function WBP_AimAssistDebugUI.WBP_AimAssistDebugUI_C.ExecuteUbergraph_WBP_AimAssistDebugUI // (Final|UbergraphFunction) // @ game+0x1e02480
};

