#pragma once
#include <fstream>
#include <iostream>
#include <iomanip>
#include "Strategy.h"

class MedianStrategy : public Strategy
{
public:
	virtual void execute(std::vector<int>& sortedArray) const override;
};
