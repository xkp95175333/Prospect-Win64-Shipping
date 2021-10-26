// BlueprintGeneratedClass BTService_Dodge.BTService_Dodge_C
// Size: 0x190 (Inherited: 0x98)
struct UBTService_Dodge_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	struct FBlackboardKeySelector KeyDodgeMontage; // 0xa0(0x28)
	struct UAnimInstance* AnimInstanceOwner; // 0xc8(0x08)
	float DodgeValueCurrent; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FBlackboardKeySelector KeyTimeLastDodge; // 0xd8(0x28)
	struct AYAICharacter* AICharacterOwner; // 0x100(0x08)
	float MaxCurrentPossibleDodgeDistance; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct FBlackboardKeySelector KeyCombatTarget; // 0x110(0x28)
	struct FBlackboardKeySelector KeyIsDodgeBlocked; // 0x138(0x28)
	struct FBlackboardKeySelector KeyStabilityAnimationInfo; // 0x160(0x28)
	bool MostRecentDodgeIsRight; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	float DodgeEvalDistanceConsidereEqual; // 0x18c(0x04)

	void EvaluateDodgeAnim(bool TryOtherDirectionAsFallback, struct UAnimMontage* DodgeMontage); // Function BTService_Dodge.BTService_Dodge_C.EvaluateDodgeAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTService_Dodge.BTService_Dodge_C.ReceiveActivationAI // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void OnTakeDamage_Event(struct FYDealtDamageData Data); // Function BTService_Dodge.BTService_Dodge_C.OnTakeDamage_Event // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_BTService_Dodge(int32_t EntryPoint); // Function BTService_Dodge.BTService_Dodge_C.ExecuteUbergraph_BTService_Dodge // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

