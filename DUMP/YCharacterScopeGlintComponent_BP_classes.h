// BlueprintGeneratedClass YCharacterScopeGlintComponent_BP.YCharacterScopeGlintComponent_BP_C
// Size: 0xc8 (Inherited: 0xb0)
struct UYCharacterScopeGlintComponent_BP_C : UYCharacterWeaponGlintComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct UParticleSystemComponent* GlintPS; // 0xb8(0x08)
	struct UCurveFloat* GlintEffectCurve; // 0xc0(0x08)

	float GetCameraDistanceToGlint(); // Function YCharacterScopeGlintComponent_BP.YCharacterScopeGlintComponent_BP_C.GetCameraDistanceToGlint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	float CalculateCameraToScopeDot(); // Function YCharacterScopeGlintComponent_BP.YCharacterScopeGlintComponent_BP_C.CalculateCameraToScopeDot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetOwningPawnViewPoint(struct FVector ViewLocation, struct FRotator ViewRotation); // Function YCharacterScopeGlintComponent_BP.YCharacterScopeGlintComponent_BP_C.GetOwningPawnViewPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function YCharacterScopeGlintComponent_BP.YCharacterScopeGlintComponent_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_OnEnterTargeting(bool ShouldCreateGlint); // Function YCharacterScopeGlintComponent_BP.YCharacterScopeGlintComponent_BP_C.BP_OnEnterTargeting // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_OnLeaveTargeting(bool ShouldCreateGlint); // Function YCharacterScopeGlintComponent_BP.YCharacterScopeGlintComponent_BP_C.BP_OnLeaveTargeting // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ReceiveTick(float DeltaSeconds); // Function YCharacterScopeGlintComponent_BP.YCharacterScopeGlintComponent_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_YCharacterScopeGlintComponent_BP(int32_t EntryPoint); // Function YCharacterScopeGlintComponent_BP.YCharacterScopeGlintComponent_BP_C.ExecuteUbergraph_YCharacterScopeGlintComponent_BP // (Final|UbergraphFunction) // @ game+0x1e02480
};

