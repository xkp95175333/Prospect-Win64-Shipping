// BlueprintGeneratedClass VH_Base_BP.VH_Base_BP_C
// Size: 0x6bc (Inherited: 0x5c0)
struct AVH_Base_BP_C : AYVehicle {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c0(0x08)
	struct UParticleSystemComponent* FX_MountThrusterBoost01_Main_PS; // 0x5c8(0x08)
	struct UParticleSystemComponent* FX_MountThrusterBoost01_Right_PS; // 0x5d0(0x08)
	struct UParticleSystemComponent* FX_MountThrusterBoost01_Left_PS; // 0x5d8(0x08)
	struct UParticleSystemComponent* FX_MountWoosh01_PS; // 0x5e0(0x08)
	struct UParticleSystemComponent* FX_MountThruster01_Main_PS; // 0x5e8(0x08)
	struct UYActorUIComponent* YActorUI; // 0x5f0(0x08)
	struct USphereComponent* WeakAreaCollision; // 0x5f8(0x08)
	struct UBoxComponent* MainWeaponCollision; // 0x600(0x08)
	struct UParticleSystemComponent* FX_MountThruster01_Right_PS; // 0x608(0x08)
	struct UParticleSystemComponent* FX_MountThruster01_Left_PS; // 0x610(0x08)
	struct UParticleSystemComponent* FX_MountHover01_PS; // 0x618(0x08)
	struct UNiagaraComponent* TrailRight01; // 0x620(0x08)
	struct UNiagaraComponent* TrailLeft01; // 0x628(0x08)
	float MaxSpeed; // 0x630(0x04)
	float speedCurrentTick; // 0x634(0x04)
	struct FDataTableRowHandle ExplodeAudio; // 0x638(0x10)
	struct FDataTableRowHandle LandingAudio; // 0x648(0x10)
	float TimeSincePlayedLastImpact; // 0x658(0x04)
	bool BoostActive; // 0x65c(0x01)
	char pad_65D[0x3]; // 0x65d(0x03)
	float minTimeBetweenHardLandings; // 0x660(0x04)
	bool thrusterActive_left; // 0x664(0x01)
	bool thrusterActive_leftBoost; // 0x665(0x01)
	bool thrusterActive_right; // 0x666(0x01)
	bool thrusterActive_rightBoost; // 0x667(0x01)
	float thrusterActive_angularVelocityMinValue; // 0x668(0x04)
	bool thrusterActive_showWoosh; // 0x66c(0x01)
	char pad_66D[0x3]; // 0x66d(0x03)
	float thrusterActive_showWooshMinValue; // 0x670(0x04)
	char pad_674[0x4]; // 0x674(0x04)
	struct FDataTableRowHandle AudioBoostSound; // 0x678(0x10)
	bool thrusterActive_main; // 0x688(0x01)
	char pad_689[0x3]; // 0x689(0x03)
	struct FLinearColor ThrusterColor_Trail; // 0x68c(0x10)
	struct FLinearColor ThrusterColor_Regular; // 0x69c(0x10)
	struct FLinearColor ThrusterColor_Boost; // 0x6ac(0x10)

	void RefreshMaterial(); // Function VH_Base_BP.VH_Base_BP_C.RefreshMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_RuntimeDataChanged(enum class EYVehicleStateType oldState, enum class EYVehicleStateType newState); // Function VH_Base_BP.VH_Base_BP_C.BP_RuntimeDataChanged // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ReceiveTick(float DeltaSeconds); // Function VH_Base_BP.VH_Base_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ReceiveBeginPlay(); // Function VH_Base_BP.VH_Base_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__m_interactionComponent_K2Node_ComponentBoundEvent_0_OnPlayerInteractionStarted__DelegateSignature(enum class EYInteractionType interactionType, struct AYPlayerController_Match* interactingPlayer); // Function VH_Base_BP.VH_Base_BP_C.BndEvt__m_interactionComponent_K2Node_ComponentBoundEvent_0_OnPlayerInteractionStarted__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BP_OnMovementModeChanged(struct FYMovementModeDataChanged newData); // Function VH_Base_BP.VH_Base_BP_C.BP_OnMovementModeChanged // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_OnImpact(struct FHitResult Hit); // Function VH_Base_BP.VH_Base_BP_C.BP_OnImpact // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BP_OnBoostState(bool newState); // Function VH_Base_BP.VH_Base_BP_C.BP_OnBoostState // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_OnInventoryItem(struct FYInventoryItem inventoryItem); // Function VH_Base_BP.VH_Base_BP_C.BP_OnInventoryItem // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_VH_Base_BP(int32_t EntryPoint); // Function VH_Base_BP.VH_Base_BP_C.ExecuteUbergraph_VH_Base_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

