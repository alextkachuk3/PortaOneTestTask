#include "MedianStrategy.h"

void MedianStrategy::execute(std::vector<int>& sortedArray) const
{
	if (sortedArray.empty()) return;

	int half = sortedArray.size() / 2;

	double median = sortedArray[half];

	if (sortedArray.size() % 2 == 0)
	{
		median += sortedArray[half + 1];
		median *= 0.5;
	}

	std::cout << "Median: " << std::fixed << std::setprecision(1) << median << std::endl;
}
