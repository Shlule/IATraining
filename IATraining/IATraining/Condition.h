#pragma once
class Condition {
public:
	virtual bool test() =0;
};
class FloatCondition : public Condition
{
public:
	FloatCondition(float testValueP,float minValueP, float maxValueP);
	virtual bool test() override;

private:
	float minValue;
	float maxValue;
	float testValue;
};

