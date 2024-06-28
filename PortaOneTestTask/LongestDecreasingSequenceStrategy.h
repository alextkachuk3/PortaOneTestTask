#pragma once
#include <iostream>
#include "IterableStrategy.h"

class LongestDecreasingSequenceStrategy : public IterableStrategy
{
public:
	virtual void execute(std::vector<int>& sortedArray) const override;
	virtual void processElement(int number) override;
private:
	std::vector<int> sequence;
	std::vector<int> temp;
};
