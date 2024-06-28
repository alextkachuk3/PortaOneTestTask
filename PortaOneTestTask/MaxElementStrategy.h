#pragma once
#include <iostream>
#include "Strategy.h"

class MaxElementStrategy : public Strategy
{
public:
	virtual void execute(std::vector<int>& sortedArray) const override;
};
