#include "MaxElementStrategy.h"

void MaxElementStrategy::start()
{
	maxElement = std::numeric_limits<int>::min();
}

void MaxElementStrategy::processElement(int number)
{
	if (number > maxElement) maxElement = number;
}

void MaxElementStrategy::finish()
{
	std::cout << "Maximum element: " << maxElement << std::endl;
}
