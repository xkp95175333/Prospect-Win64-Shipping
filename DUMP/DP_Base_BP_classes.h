// BlueprintGeneratedClass DP_Base_BP.DP_Base_BP_C
// Size: 0x390 (Inherited: 0x288)
struct ADP_Base_BP_C : AYPodActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UYMapMarkerComponent* YMapMarker; // 0x290(0x08)
	struct UYSkeletalMeshComponentFOV* DopPodComponentFOV; // 0x298(0x08)
	struct USphereComponent* Sphere; // 0x2a0(0x08)
	struct UPointLightComponent* PointLight; // 0x2a8(0x08)
	struct UPointLightComponent* lightOrange; // 0x2b0(0x08)
	struct UDecalComponent* CraterDecal; // 0x2b8(0x08)
	struct UStaticMeshComponent* HiddenShadowCaster; // 0x2c0(0x08)
	struct UParticleSystemComponent* window_PS; // 0x2c8(0x08)
	struct UParticleSystemComponent* retroThruster_PS; // 0x2d0(0x08)
	struct USphereComponent* SphereCollision; // 0x2d8(0x08)
	struct UParticleSystemComponent* ground_PS; // 0x2e0(0x08)
	struct UPointLightComponent* light_green; // 0x2e8(0x08)
	struct UPointLightComponent* light_redFlashing; // 0x2f0(0x08)
	float Timeline_1_HiddenShadowCaster_2AD71DC7452E2068EE6B52B28D961CF2; // 0x2f8(0x04)
	enum class ETimelineDirection Timeline_1__Direction_2AD71DC7452E2068EE6B52B28D961CF2; // 0x2fc(0x01)
	char pad_2FD[0x3]; // 0x2fd(0x03)
	struct UTimelineComponent* Timeline_2; // 0x300(0x08)
	struct FVector Timeline_0_location_3668E36A4761944F15CDCB9D1CE453C5; // 0x308(0x0c)
	float Timeline_0_lightRed_3668E36A4761944F15CDCB9D1CE453C5; // 0x314(0x04)
	float Timeline_0_lightGreen_3668E36A4761944F15CDCB9D1CE453C5; // 0x318(0x04)
	float Timeline_0_lightRedFlashing_3668E36A4761944F15CDCB9D1CE453C5; // 0x31c(0x04)
	enum class ETimelineDirection Timeline_0__Direction_3668E36A4761944F15CDCB9D1CE453C5; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct UTimelineComponent* Timeline_1; // 0x328(0x08)
	struct FVector StartPosition; // 0x330(0x0c)
	char pad_33C[0x4]; // 0x33c(0x04)
	struct AYPlayerCharacter* CachedPlayerCharacter; // 0x340(0x08)
	struct FDataTableRowHandle Landing SFX 1; // 0x348(0x10)
	struct FDataTableRowHandle Landing SFX 3; // 0x358(0x10)
	struct FDataTableRowHandle retroThrusters; // 0x368(0x10)
	struct UAnimMontage* PodOpenHatchAnim; // 0x378(0x08)
	struct AYPlayerState* RelevantState; // 0x380(0x08)
	struct USoundBase* DropPodMusic; // 0x388(0x08)

	void SetUseCustomFOV(bool newState); // Function DP_Base_BP.DP_Base_BP_C.SetUseCustomFOV // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Timeline_0__FinishedFunc(); // Function DP_Base_BP.DP_Base_BP_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x1e02480
	void Timeline_0__UpdateFunc(); // Function DP_Base_BP.DP_Base_BP_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x1e02480
	void Timeline_0__retroThrusters__EventFunc(); // Function DP_Base_BP.DP_Base_BP_C.Timeline_0__retroThrusters__EventFunc // (BlueprintEvent) // @ game+0x1e02480
	void Timeline_0__TriggerInitialSupportingEffects__EventFunc(); // Function DP_Base_BP.DP_Base_BP_C.Timeline_0__TriggerInitialSupportingEffects__EventFunc // (BlueprintEvent) // @ game+0x1e02480
	void Timeline_0__TriggerLandingEffects__EventFunc(); // Function DP_Base_BP.DP_Base_BP_C.Timeline_0__TriggerLandingEffects__EventFunc // (BlueprintEvent) // @ game+0x1e02480
	void Timeline_0__ground dust__EventFunc(); // Function DP_Base_BP.DP_Base_BP_C.Timeline_0__ground dust__EventFunc // (BlueprintEvent) // @ game+0x1e02480
	void Timeline_1__FinishedFunc(); // Function DP_Base_BP.DP_Base_BP_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x1e02480
	void Timeline_1__UpdateFunc(); // Function DP_Base_BP.DP_Base_BP_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x1e02480
	void OnNotifyEnd_78EA5A814B497F0C2C80439B93BD053F(struct FName NotifyName); // Function DP_Base_BP.DP_Base_BP_C.OnNotifyEnd_78EA5A814B497F0C2C80439B93BD053F // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnNotifyBegin_78EA5A814B497F0C2C80439B93BD053F(struct FName NotifyName); // Function DP_Base_BP.DP_Base_BP_C.OnNotifyBegin_78EA5A814B497F0C2C80439B93BD053F // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnInterrupted_78EA5A814B497F0C2C80439B93BD053F(struct FName NotifyName); // Function DP_Base_BP.DP_Base_BP_C.OnInterrupted_78EA5A814B497F0C2C80439B93BD053F // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnBlendOut_78EA5A814B497F0C2C80439B93BD053F(struct FName NotifyName); // Function DP_Base_BP.DP_Base_BP_C.OnBlendOut_78EA5A814B497F0C2C80439B93BD053F // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnCompleted_78EA5A814B497F0C2C80439B93BD053F(struct FName NotifyName); // Function DP_Base_BP.DP_Base_BP_C.OnCompleted_78EA5A814B497F0C2C80439B93BD053F // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnNotifyEnd_E3E1655941965588221796876DC7ADDF(struct FName NotifyName); // Function DP_Base_BP.DP_Base_BP_C.OnNotifyEnd_E3E1655941965588221796876DC7ADDF // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnNotifyBegin_E3E1655941965588221796876DC7ADDF(struct FName NotifyName); // Function DP_Base_BP.DP_Base_BP_C.OnNotifyBegin_E3E1655941965588221796876DC7ADDF // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnInterrupted_E3E1655941965588221796876DC7ADDF(struct FName NotifyName); // Function DP_Base_BP.DP_Base_BP_C.OnInterrupted_E3E1655941965588221796876DC7ADDF // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnBlendOut_E3E1655941965588221796876DC7ADDF(struct FName NotifyName); // Function DP_Base_BP.DP_Base_BP_C.OnBlendOut_E3E1655941965588221796876DC7ADDF // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnCompleted_E3E1655941965588221796876DC7ADDF(struct FName NotifyName); // Function DP_Base_BP.DP_Base_BP_C.OnCompleted_E3E1655941965588221796876DC7ADDF // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnNotifyEnd_C858DD4F4BA062AE666252A04AB0EA85(struct FName NotifyName); // Function DP_Base_BP.DP_Base_BP_C.OnNotifyEnd_C858DD4F4BA062AE666252A04AB0EA85 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnNotifyBegin_C858DD4F4BA062AE666252A04AB0EA85(struct FName NotifyName); // Function DP_Base_BP.DP_Base_BP_C.OnNotifyBegin_C858DD4F4BA062AE666252A04AB0EA85 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnInterrupted_C858DD4F4BA062AE666252A04AB0EA85(struct FName NotifyName); // Function DP_Base_BP.DP_Base_BP_C.OnInterrupted_C858DD4F4BA062AE666252A04AB0EA85 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnBlendOut_C858DD4F4BA062AE666252A04AB0EA85(struct FName NotifyName); // Function DP_Base_BP.DP_Base_BP_C.OnBlendOut_C858DD4F4BA062AE666252A04AB0EA85 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnCompleted_C858DD4F4BA062AE666252A04AB0EA85(struct FName NotifyName); // Function DP_Base_BP.DP_Base_BP_C.OnCompleted_C858DD4F4BA062AE666252A04AB0EA85 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnNotifyEnd_4743CB0A4F7EF368E043898E87CC5139(struct FName NotifyName); // Function DP_Base_BP.DP_Base_BP_C.OnNotifyEnd_4743CB0A4F7EF368E043898E87CC5139 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnNotifyBegin_4743CB0A4F7EF368E043898E87CC5139(struct FName NotifyName); // Function DP_Base_BP.DP_Base_BP_C.OnNotifyBegin_4743CB0A4F7EF368E043898E87CC5139 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnInterrupted_4743CB0A4F7EF368E043898E87CC5139(struct FName NotifyName); // Function DP_Base_BP.DP_Base_BP_C.OnInterrupted_4743CB0A4F7EF368E043898E87CC5139 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnBlendOut_4743CB0A4F7EF368E043898E87CC5139(struct FName NotifyName); // Function DP_Base_BP.DP_Base_BP_C.OnBlendOut_4743CB0A4F7EF368E043898E87CC5139 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnCompleted_4743CB0A4F7EF368E043898E87CC5139(struct FName NotifyName); // Function DP_Base_BP.DP_Base_BP_C.OnCompleted_4743CB0A4F7EF368E043898E87CC5139 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OpenPodDoor(); // Function DP_Base_BP.DP_Base_BP_C.OpenPodDoor // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StartMovement(); // Function DP_Base_BP.DP_Base_BP_C.StartMovement // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_SpawnContextAssigned(enum class EYPodSpawningTypeContext spawnContext); // Function DP_Base_BP.DP_Base_BP_C.BP_SpawnContextAssigned // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function DP_Base_BP.DP_Base_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void DebugLights(); // Function DP_Base_BP.DP_Base_BP_C.DebugLights // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_SetContextPlayerActor(struct AActor* playerActorContext); // Function DP_Base_BP.DP_Base_BP_C.BP_SetContextPlayerActor // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_DP_Base_BP(int32_t EntryPoint); // Function DP_Base_BP.DP_Base_BP_C.ExecuteUbergraph_DP_Base_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

