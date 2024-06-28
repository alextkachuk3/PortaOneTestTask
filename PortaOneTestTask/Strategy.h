#pragma once
#include <vector>

class Strategy
{
public:
	virtual ~Strategy() = default;
	virtual void execute(std::vector<int>& sortedArray) const = 0;
};
