#pragma once

#include <fstream>
#include <iostream>
#include <iomanip>

#include "Strategy.h"

class MedianStrategy : public Strategy
{
public:
	void start() override
	{
		count = 0;
	}

	void processElement(int number) override {
		count++;
	}

	void finish() override
	{
		if (count == 0)
		{
			std::cerr << "No numbers to calculate median." << std::endl;
			return;
		}

		file->clear();
		file->seekg(0);

		int number = 0;
		int i = 0;
		int half = count / 2;

		while (i != half)
		{
			*file >> number;
			i++;
		}

		double median = number;

		if (count % 2 == 0)
		{
			*file >> number;
			median += number;
			median *= 0.5;
		}

		std::cout << "Median: " << std::fixed << std::setprecision(2) << median << std::endl;
	}

	void setFile(std::ifstream* _file)
	{
		file = _file;
	}

private:
	std::ifstream* file;
	size_t count;
};
