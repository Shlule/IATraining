#include "StateMachine.h"
using namespace std;

Action StateMachine::update() {
	//assume no transition is triggered
	if (triggeredTransition == nullptr) {


		for (auto& transition : CurrentState.getTransition()) {
			if (transition->isTriggered()) {
				triggeredTransition = transition;
				break;
			}
		}

		State* targetState = triggeredTransition->getTargetState();

	}
	else {
		return CurrentState.getAction();
	}
}
