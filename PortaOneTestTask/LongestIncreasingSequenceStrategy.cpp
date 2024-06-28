#include "LongestIncreasingSequenceStrategy.h"

void LongestIncreasingSequenceStrategy::execute(std::vector<int>& sortedArray) const
{
	std::cout << "Longest increasing sequence: ";
	for (int num : sequence) std::cout << num << " ";
	std::cout << std::endl;
}

void LongestIncreasingSequenceStrategy::processElement(int number)
{
	if (temp.empty() || number > temp.back()) temp.push_back(number);
	else
	{
		if (temp.size() > sequence.size()) sequence = temp;
		temp.clear();
		temp.push_back(number);
	}
}
