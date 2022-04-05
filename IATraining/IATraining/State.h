#pragma once
#include"Transition.h"
#include"Action.h"
#include<vector>
class State
{
public:
	State(const Action& actionP, const Action& entryActionP, const Action& exitActionP, std::vector<Transition*> transitionP) :
		action(actionP), entryAction(entryActionP), exitAction(exitActionP), transitions(transitionP) {}

	Action getAction()const { return action; }
	Action getEntryAction()const { return entryAction; }
	Action getExitAction()const { return exitAction; }

	std::vector<Transition*> getTransition()const { return transitions; }
	void AddTransition(Transition* transitionP);

private:
	Action action;
	Action entryAction;
	Action exitAction;

	std::vector<Action> actions;
	std::vector<Transition*> transitions;
};

