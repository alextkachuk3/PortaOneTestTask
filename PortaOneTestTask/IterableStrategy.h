#pragma once
#include "Strategy.h"

class IterableStrategy : public Strategy
{
public:
	virtual void processElement(int number) = 0;
};
