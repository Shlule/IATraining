#pragma once
#include"Action.h"

class State;
class Condition;
class Transition
{
public:
	Transition(Condition* conditionP,const Action& actionP) :
		action{ actionP }, targetState{ nullptr }, condition{ conditionP }{}
	bool isTriggered()const;
	State* getTargetState() const;
	Action getAction() const;
	void setTargetState(State* targetStateP) { targetState = targetStateP; }

	

private:
	State* targetState;
	Condition* condition;
	Action action;
	
};

