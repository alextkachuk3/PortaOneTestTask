#include <iostream>
#include <fstream>
#include <string>

#include "SelectorMenu.h"

bool isFileEmpty(std::ifstream& file)
{
	return file.peek() == std::ifstream::traits_type::eof();
}

int maxValue()
{
	std::ifstream file("10m.txt");

	if (file.is_open())
	{
		if (isFileEmpty(file))
		{
			file.close();
			return 0;
		}

		int numbersCount = 0;
		int number;
		char line[12];
		int maxElement = std::numeric_limits<int>::min();

		while (file.read(line, 11))
		{
			number = std::stoi(line);
			if (number > maxElement) maxElement = number;
			numbersCount++;
		}

		std::cout << maxElement << std::endl;
		file.close();
		return maxElement;
	}
	else
	{
		std::cerr << "Unable to open file!" << std::endl;
		return 0;
	}
}

int main()
{
	SelectorMenu::selectAlgorithms();
	maxValue();
	return 0;
}
