#pragma once
#include"State.h"
#include"Transition.h"
#include"Action.h"
class Boss
{
public:
	Boss(){}
	int getMaxPv() { return maxPv; }
	int getMaxPm() { return maxPm; }
	int getCurrentPv() { return currentPv; }
	int getCurrentPm() { return currentPm; }
	int gettaille() { return taille; }
	int getVd() { return Vd; }
	
private:

	int maxPv;
	int maxPm;
	int currentPv;
	int currentPm;
	int taille;
	int Vd;


   


	
};

