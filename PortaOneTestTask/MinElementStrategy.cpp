#include "MinElementStrategy.h"

void MinElementStrategy::execute(std::vector<int>& sortedArray) const
{
	if (!sortedArray.empty()) std::cout << "Min element: " << sortedArray[0] << std::endl;
}
