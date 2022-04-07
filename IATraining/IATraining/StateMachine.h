#pragma once
#include<iostream>
#include<vector>
#include"State.h"
class StateMachine
{
public:
	StateMachine(State& initialStateP) : currentState(initialStateP) {}
	//check and applies transition returning a list of actions
	std::vector<Action> update();



private:
	std::vector<State> states;
	State& currentState;

	// pointer de transition qui est cense recuper les pointer des transition trigger
	Transition* triggeredTransition;

	//check through each transition and store the first one that trigerred
	
};

