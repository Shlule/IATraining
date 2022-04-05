#pragma once
#include"Action.h"

class State;
class Condition;
class Transition
{
public:
	Transition(const Action& actionP, Condition* conditionP) :
		action{ actionP }, condition{ conditionP }{}
	bool isTriggered()const;
	State* getTargetState() const;
	Action getAction() const;
	void setTargetState(State* targetStateP) { targetState = targetStateP; }

	

private:
	State* targetState;
	Condition* condition;
	Action action;
	
};

