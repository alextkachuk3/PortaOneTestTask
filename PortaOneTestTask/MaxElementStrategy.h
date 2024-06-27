#pragma once

#include <iostream>

#include "Strategy.h"

class MaxElementStrategy : public Strategy
{
public:
	void start() override;
	void processElement(int number) override;
	void finish() override;
private:
	int maxElement = 0;
};
