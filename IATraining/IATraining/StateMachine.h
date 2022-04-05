#pragma once
#include<iostream>
#include<vector>
#include"State.h"
class StateMachine
{
public:
	//check and applies transition returning a list of actions
	Action update();



private:
	std::vector<State> states;
	State initialState;
	State CurrentState;

	// pointer de transition qui est cense recuper les pointer des transition trigger
	Transition* triggeredTransition;

	//check through each transition and store the first one that trigerred
	
};

