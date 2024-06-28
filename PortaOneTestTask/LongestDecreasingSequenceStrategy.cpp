#include "LongestDecreasingSequenceStrategy.h"

void LongestDecreasingSequenceStrategy::execute(std::vector<int>& sortedArray) const
{
    std::cout << "Longest decreasing sequence: ";
    for (int num : sequence) std::cout << num << " ";
    std::cout << std::endl;    
}

void LongestDecreasingSequenceStrategy::processElement(int number)
{
    if (temp.empty() || number < temp.back()) temp.push_back(number);
    else 
    {
        if (temp.size() > sequence.size()) sequence = temp;
        temp.clear();
        temp.push_back(number);
    }
}
