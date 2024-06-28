#include "AverageStrategy.h"

void AverageStrategy::execute(std::vector<int>& sortedArray) const
{
	if (sortedArray.empty()) return;

	double average = 0.0;
	double averageMultiplier = 1.0 / sortedArray.size();

	for (auto& value : sortedArray)	average += value * averageMultiplier;

	std::cout << "Average: " << std::fixed << std::setprecision(8) << average << std::endl;
}
