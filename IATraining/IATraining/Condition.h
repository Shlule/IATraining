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
class SupCondition : public Condition {
public:
	SupCondition(int testValueP, int borneValueP);
	virtual bool test() override;
private:
	float borneValue;
	float testValue;
};
class InfCondition : public Condition {
public:
	InfCondition(int testValueP, int borneValueP);
	virtual bool test() override;
private:
	float borneValue;
	float testValue;
};

class TrueCondition : public Condition
{
public: TrueCondition(bool testValep);
	  virtual bool test() override;
private:
	bool  testValue;
};
