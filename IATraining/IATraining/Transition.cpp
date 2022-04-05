#include "Transition.h"
#include"State.h"

bool Transition::isTriggered() const{
	return false;
}

State* Transition::getTargetState() const{
	return targetState;
}
Action Transition::getAction()const {
	return action;
}
