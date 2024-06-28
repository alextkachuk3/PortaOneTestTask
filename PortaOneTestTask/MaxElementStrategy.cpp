#include "MaxElementStrategy.h"

void MaxElementStrategy::execute(std::vector<int>& sortedArray) const
{
	if (!sortedArray.empty()) std::cout << "Max element: " << sortedArray[sortedArray.size() - 1] << std::endl;
}
