#include "State.h"

void State::AddTransition(Transition* transitionP) {
	transitions.push_back(transitionP);
}