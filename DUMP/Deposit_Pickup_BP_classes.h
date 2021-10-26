// BlueprintGeneratedClass Deposit_Pickup_BP.Deposit_Pickup_BP_C
// Size: 0x4a0 (Inherited: 0x48c)
struct ADeposit_Pickup_BP_C : AYPickup_Base_BP_C {
	char pad_48C[0x4]; // 0x48c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct USphereComponent* ExtraPickupColl; // 0x498(0x08)

	void ReceiveBeginPlay(); // Function Deposit_Pickup_BP.Deposit_Pickup_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_Deposit_Pickup_BP(int32_t EntryPoint); // Function Deposit_Pickup_BP.Deposit_Pickup_BP_C.ExecuteUbergraph_Deposit_Pickup_BP // (Final|UbergraphFunction) // @ game+0x1e02480
};

