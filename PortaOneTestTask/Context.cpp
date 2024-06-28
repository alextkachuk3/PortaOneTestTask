#include "Context.h"

void Context::addStrategy(Strategy* strategy)
{
	strategies.push_back(strategy);
	if (auto iterableStrategy = dynamic_cast<IterableStrategy*>(strategy)) iterableStrategies.push_back(iterableStrategy);
}

void Context::processFile(const std::string& filename)
{
	std::ifstream file(filename);
	if (!file.is_open())
	{
		std::cerr << "Unable to open file" << std::endl;
		return;
	}

	std::vector<int> array;
	array.reserve(ARRAY_MAX_SIZE);

	int number;
	while (file >> number)
	{
		array.push_back(number);

		for (auto& iterableStrategy : iterableStrategies)
		{
			iterableStrategy->processElement(number);
		}
	}

	std::sort(array.begin(), array.end());

	for (auto& strategy : strategies)
	{
		strategy->execute(array);
	}

	file.close();
}
