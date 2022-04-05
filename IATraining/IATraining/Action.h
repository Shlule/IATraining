#pragma once
#include<iostream>
// this class define all action executable in the game
using std::string;
class Action
{
public:
	Action(string actionNamep) :actionName{actionNamep} {}
	void execute();
private:
	string actionName;
};

