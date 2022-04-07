#include "StateMachine.h"
using namespace std;

vector<Action> StateMachine::update() {
	//assume no transition is triggered
	triggeredTransition = nullptr;


	for (auto& transition : currentState.getTransition()) {
		if (transition->isTriggered()) {
			triggeredTransition = transition;
			break;
		}
	}
	if (triggeredTransition != nullptr) {
		State* targetState = triggeredTransition->getTargetState();

		vector<Action> actions{
			currentState.getExitAction(),
			triggeredTransition->getAction(),
			targetState->getEntryAction()
		};
		currentState = *targetState;
		return actions;
	}
	return vector<Action>{currentState.getAction()};
}

