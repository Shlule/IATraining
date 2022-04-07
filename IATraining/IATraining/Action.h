#pragma once
#include<iostream>
// this class define all action executable in the game
using std::string;
class Action
{
public:
	Action(string actionNamep, int PmCostP = 0, int damageP = 0, int nombreAttackP = 0, int rangeP = 0, bool deplacementP = false) :
		actionName{ actionNamep }, damage{ damageP },nombreAttack(nombreAttackP), range{ rangeP }, PmCost{ PmCostP }, deplacement{ deplacementP } {}
	void execute();
private:
	string actionName;
	int damage;
	int range;
	int PmCost;
	int nombreAttack;
	bool deplacement;
};

