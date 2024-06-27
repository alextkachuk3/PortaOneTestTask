#include "Context.h"
#include "MedianStrategy.h"

void Context::addStrategy(Strategy* strategy)
{
	strategies.push_back(strategy);
}

void Context::processFile(const std::string& filename)
{
	std::ifstream file(filename);
	if (!file.is_open())
	{
		std::cerr << "Unable to open file" << std::endl;
		return;
	}

	for (auto& strategy : strategies) strategy->start();

	int number;
	while (file >> number)
	{
		for (auto& strategy : strategies) strategy->processElement(number);
	}

	for (auto& strategy : strategies)
	{
		if (auto medianStrategy = dynamic_cast<MedianStrategy*>(strategy)) medianStrategy->setFile(&file);

		strategy->finish();
	}

	file.close();
}
