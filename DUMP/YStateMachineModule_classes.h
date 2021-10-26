// Class YStateMachineModule.YHierarchicalStateBase
// Size: 0x70 (Inherited: 0x28)
struct UYHierarchicalStateBase : UObject {
	struct FMulticastInlineDelegate RequestStateChangeDelegate; // 0x28(0x10)
	struct FMulticastInlineDelegate RequestStatePopDelegate; // 0x38(0x10)
	struct FMulticastInlineDelegate StateExitedDelegate; // 0x48(0x10)
	struct FMulticastInlineDelegate StateEnteredDelegate; // 0x58(0x10)
	bool m_pushOnStack; // 0x68(0x01)
	bool m_currentlyActive; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)

	void StateExitTransitionDoneSignature__DelegateSignature(struct UYHierarchicalStateBase* exitedState); // DelegateFunction YStateMachineModule.YHierarchicalStateBase.StateExitTransitionDoneSignature__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1e02480
	void StateEnterTransitionDoneSignature__DelegateSignature(struct UYHierarchicalStateBase* enteredState); // DelegateFunction YStateMachineModule.YHierarchicalStateBase.StateEnterTransitionDoneSignature__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1e02480
	void RequestStatePopSignature__DelegateSignature(); // DelegateFunction YStateMachineModule.YHierarchicalStateBase.RequestStatePopSignature__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1e02480
	void RequestStateChangeSignature__DelegateSignature(struct UYHierarchicalStateBase* newState, bool emptyStack); // DelegateFunction YStateMachineModule.YHierarchicalStateBase.RequestStateChangeSignature__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1e02480
	void OnStateExitedEvent(); // Function YStateMachineModule.YHierarchicalStateBase.OnStateExitedEvent // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void OnStateEnteredEvent(); // Function YStateMachineModule.YHierarchicalStateBase.OnStateEnteredEvent // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
};

// Class YStateMachineModule.YHierarchicalStateMachine
// Size: 0x38 (Inherited: 0x28)
struct UYHierarchicalStateMachine : UObject {
	struct TArray<struct UYHierarchicalStateBase*> m_stateStack; // 0x28(0x10)

	void RequestStateStackPop(bool removeOnlyIfMoreThenOne); // Function YStateMachineModule.YHierarchicalStateMachine.RequestStateStackPop // (Final|Native|Public) // @ game+0x1336f90
	void RequestStateChange(struct UYHierarchicalStateBase* newState, bool emptyScreenStack); // Function YStateMachineModule.YHierarchicalStateMachine.RequestStateChange // (Final|Native|Public) // @ game+0x1336ec0
	void OnStateRequestRemovalFromStack(); // Function YStateMachineModule.YHierarchicalStateMachine.OnStateRequestRemovalFromStack // (Final|Native|Protected) // @ game+0x1336ea0
	void OnStateExitDone(struct UYHierarchicalStateBase* exitedState); // Function YStateMachineModule.YHierarchicalStateMachine.OnStateExitDone // (Final|Native|Protected) // @ game+0x1336e10
	void OnStateEnterPushDone(struct UYHierarchicalStateBase* enteredState); // Function YStateMachineModule.YHierarchicalStateMachine.OnStateEnterPushDone // (Final|Native|Protected) // @ game+0x1336d80
	void OnStateEnterDone(struct UYHierarchicalStateBase* enteredState); // Function YStateMachineModule.YHierarchicalStateMachine.OnStateEnterDone // (Final|Native|Protected) // @ game+0x1336cf0
	struct UYHierarchicalStateBase* GetStateFromStack(int32_t Index); // Function YStateMachineModule.YHierarchicalStateMachine.GetStateFromStack // (Final|Native|Public|Const) // @ game+0x1336c50
	int32_t GetNumberOfStatesOnStack(); // Function YStateMachineModule.YHierarchicalStateMachine.GetNumberOfStatesOnStack // (Final|Native|Public|Const) // @ game+0x1336c30
	struct UYHierarchicalStateBase* GetActiveState(); // Function YStateMachineModule.YHierarchicalStateMachine.GetActiveState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1336c00
};

// Class YStateMachineModule.YTestStateBase
// Size: 0x70 (Inherited: 0x70)
struct UYTestStateBase : UYHierarchicalStateBase {
};

// Class YStateMachineModule.YTestStateBerlin
// Size: 0x70 (Inherited: 0x70)
struct UYTestStateBerlin : UYTestStateBase {
};

// Class YStateMachineModule.YTestStateBerlinWedding
// Size: 0x70 (Inherited: 0x70)
struct UYTestStateBerlinWedding : UYTestStateBerlin {
};

// Class YStateMachineModule.YTestStateBerlinKreuzberg
// Size: 0x70 (Inherited: 0x70)
struct UYTestStateBerlinKreuzberg : UYTestStateBerlin {
};

// Class YStateMachineModule.YTestStateCostaDelSol
// Size: 0x70 (Inherited: 0x70)
struct UYTestStateCostaDelSol : UYTestStateBase {
};

