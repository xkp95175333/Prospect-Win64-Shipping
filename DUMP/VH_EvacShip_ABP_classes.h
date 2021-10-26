// AnimBlueprintGeneratedClass VH_EvacShip_ABP.VH_EvacShip_ABP_C
// Size: 0xb9e (Inherited: 0x2c0)
struct UVH_EvacShip_ABP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x370(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x398(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x3c0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x3e8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x410(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x438(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x460(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x488(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x4b0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x530(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x560(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x5e0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x610(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x690(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x6c0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x740(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x770(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x7f0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x820(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x8a0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x8d0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x950(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x980(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xa00(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xa30(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xab0(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xae0(0xb0)
	struct AAC_EvacShip_BP_C* EvacShipOwner; // 0xb90(0x08)
	enum class AC_EscapeShip_State EvacShipState; // 0xb98(0x01)
	bool IsFlying; // 0xb99(0x01)
	bool isLanding; // 0xb9a(0x01)
	bool isLanded; // 0xb9b(0x01)
	bool isPreparingTakeOff; // 0xb9c(0x01)
	bool isLeaving; // 0xb9d(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_TransitionResult_8C11B22E48456B34C65995B716630B0A(); // Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_TransitionResult_8C11B22E48456B34C65995B716630B0A // (BlueprintEvent) // @ game+0x1e02480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_TransitionResult_DCDDE588455F047C003276999035DEF0(); // Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_TransitionResult_DCDDE588455F047C003276999035DEF0 // (BlueprintEvent) // @ game+0x1e02480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_TransitionResult_FFE40C014BA1E6F9756A80803E96E0E3(); // Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_TransitionResult_FFE40C014BA1E6F9756A80803E96E0E3 // (BlueprintEvent) // @ game+0x1e02480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_TransitionResult_E76D6FF24F8EB3154D8050987D1EB52D(); // Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_TransitionResult_E76D6FF24F8EB3154D8050987D1EB52D // (BlueprintEvent) // @ game+0x1e02480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_TransitionResult_69D96BEA482B5D2CE373B98EE8DDA967(); // Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_TransitionResult_69D96BEA482B5D2CE373B98EE8DDA967 // (BlueprintEvent) // @ game+0x1e02480
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BlueprintInitializeAnimation(); // Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_VH_EvacShip_ABP(int32_t EntryPoint); // Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.ExecuteUbergraph_VH_EvacShip_ABP // (Final|UbergraphFunction) // @ game+0x1e02480
};

