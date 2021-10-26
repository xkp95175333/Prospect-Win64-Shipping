// BlueprintGeneratedClass CarryableComponent_BP.CarryableComponent_BP_C
// Size: 0xf8 (Inherited: 0xb0)
struct UCarryableComponent_BP_C : UYCarryableComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct UPlayerCarryingComponent_BP_C* PlayerCarryingComponent; // 0xb8(0x08)
	struct FMulticastInlineDelegate OnStartedGettingCarried; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnStoppedGettingCarried; // 0xd0(0x10)
	float ThrowSpeed; // 0xe0(0x04)
	float DesiredDistance; // 0xe4(0x04)
	float CollisionSphereRadiusOverride; // 0xe8(0x04)
	struct FVector LastFrame; // 0xec(0x0c)

	void GetCollisionRadius(float SphereRadius); // Function CarryableComponent_BP.CarryableComponent_BP_C.GetCollisionRadius // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetDesiredDistanceFromCarrier(float Distance); // Function CarryableComponent_BP.CarryableComponent_BP_C.GetDesiredDistanceFromCarrier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct FString BP_GetDebugDescription(); // Function CarryableComponent_BP.CarryableComponent_BP_C.BP_GetDebugDescription // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetComponentForCollisionChecks(struct UPrimitiveComponent* AsPrimitive Component); // Function CarryableComponent_BP.CarryableComponent_BP_C.GetComponentForCollisionChecks // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnRep_PlayerCarryingComponent(); // Function CarryableComponent_BP.CarryableComponent_BP_C.OnRep_PlayerCarryingComponent // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ThrowActorDueDrop(); // Function CarryableComponent_BP.CarryableComponent_BP_C.ThrowActorDueDrop // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StartGettingCarried(struct UPlayerCarryingComponent_BP_C* CarryingComponent); // Function CarryableComponent_BP.CarryableComponent_BP_C.StartGettingCarried // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StopGettingCarried(); // Function CarryableComponent_BP.CarryableComponent_BP_C.StopGettingCarried // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void TryRequestStopCarry(); // Function CarryableComponent_BP.CarryableComponent_BP_C.TryRequestStopCarry // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void NotifyOnStartedGettingCarried(); // Function CarryableComponent_BP.CarryableComponent_BP_C.NotifyOnStartedGettingCarried // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void NotifyOnStoppedGettingCarried(); // Function CarryableComponent_BP.CarryableComponent_BP_C.NotifyOnStoppedGettingCarried // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void MulticastThrow(struct FVector Velocity); // Function CarryableComponent_BP.CarryableComponent_BP_C.MulticastThrow // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveTick(float DeltaSeconds); // Function CarryableComponent_BP.CarryableComponent_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_CarryableComponent_BP(int32_t EntryPoint); // Function CarryableComponent_BP.CarryableComponent_BP_C.ExecuteUbergraph_CarryableComponent_BP // (Final|UbergraphFunction) // @ game+0x1e02480
	void OnStoppedGettingCarried__DelegateSignature(); // Function CarryableComponent_BP.CarryableComponent_BP_C.OnStoppedGettingCarried__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnStartedGettingCarried__DelegateSignature(); // Function CarryableComponent_BP.CarryableComponent_BP_C.OnStartedGettingCarried__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

