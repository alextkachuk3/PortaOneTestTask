#include "MinElementStrategy.h"

void MinElementStrategy::start() 
{
    minElement = std::numeric_limits<int>::max();
}

void MinElementStrategy::processElement(int number) 
{
    if (number < minElement) minElement = number;
}

void MinElementStrategy::finish() 
{
    std::cout << "Minimum element: " << minElement << std::endl;
}
