#include "Condition.h"

FloatCondition::FloatCondition(float testValueP,float minValueP , float maxValueP):minValue(minValueP),maxValue(maxValueP), testValue(testValueP){}

bool FloatCondition::test() {
	return minValue <= testValue <= maxValue;
}