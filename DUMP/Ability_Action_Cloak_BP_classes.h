// BlueprintGeneratedClass Ability_Action_Cloak_BP.Ability_Action_Cloak_BP_C
// Size: 0x1bd (Inherited: 0x180)
struct UAbility_Action_Cloak_BP_C : UYCharacterAbilityComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	struct AActor* Owner; // 0x188(0x08)
	float velocityMagnitude; // 0x190(0x04)
	float velocityFade; // 0x194(0x04)
	struct FVector OldVelocity; // 0x198(0x0c)
	struct FVector targetVector; // 0x1a4(0x0c)
	struct FVector currentVector; // 0x1b0(0x0c)
	bool IsActiveNow; // 0x1bc(0x01)

	void ReceiveBeginPlay(); // Function Ability_Action_Cloak_BP.Ability_Action_Cloak_BP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ReceiveTick(float DeltaSeconds); // Function Ability_Action_Cloak_BP.Ability_Action_Cloak_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void SetIsFIrstPersonOnMaterial(); // Function Ability_Action_Cloak_BP.Ability_Action_Cloak_BP_C.SetIsFIrstPersonOnMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnAbilityStateChanged_Event_1(enum class EYAbilityState State, enum class EYAbilityState oldState); // Function Ability_Action_Cloak_BP.Ability_Action_Cloak_BP_C.OnAbilityStateChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_Ability_Action_Cloak_BP(int32_t EntryPoint); // Function Ability_Action_Cloak_BP.Ability_Action_Cloak_BP_C.ExecuteUbergraph_Ability_Action_Cloak_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

