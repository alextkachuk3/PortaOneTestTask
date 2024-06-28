#pragma once
#include <iostream>
#include "Strategy.h"

class AverageStrategy : public Strategy
{
	virtual void execute(std::vector<int>& sortedArray) const override;
};
