#pragma once
#include <iostream>
#include "Strategy.h"

class MinElementStrategy : public Strategy
{
public:
	virtual void execute(std::vector<int>& sortedArray) const override;
};
