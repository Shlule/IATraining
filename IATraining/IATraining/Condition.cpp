#include "Condition.h"

FloatCondition::FloatCondition(float testValueP,float minValueP , float maxValueP):minValue(minValueP),maxValue(maxValueP), testValue(testValueP){}

bool FloatCondition::test() {
	return testValue >= minValue && testValue <= maxValue;
}

SupCondition::SupCondition(int testValueP, int borneValueP) :testValue(testValueP), borneValue(borneValueP) {}

bool SupCondition::test() {
	return testValue > borneValue;
}

InfCondition::InfCondition(int testValueP, int borneValueP) :testValue(testValueP), borneValue(borneValueP) {}

bool InfCondition::test() {
	return testValue <= borneValue;
}

TrueCondition::TrueCondition(bool testValueP) :testValue{ testValueP } {}

bool TrueCondition::test() {
	return testValue == true;
}