#include <iostream>
#include <vector>
#include <string>
#include <conio.h>

#define	ENTER_KEY 13
#define UP_KEY 72
#define DOWN_KEY 80

class SelectorMenu
{
public:
	static void selectAlgorithms() 
	{
		std::vector<std::string> algorithmNames = { "Find Minimum", "Find Maximum", "Start" };
		std::vector<bool> selected(algorithmNames.size(), false);
		int selectedItem = 0;
		const int numItems = static_cast<int>(algorithmNames.size());

		while (true)
		{
			system("cls");

			std::cout << "Select algorithms:" << std::endl;
			for (int i = 0; i < numItems; ++i)
			{
				if (selectedItem == i) std::cout << "> ";
				else std::cout << "  ";

				if (i == numItems - 1) std::cout << "    ";
				else if (selected[i]) std::cout << "[x] ";
				else std::cout << "[ ] ";

				std::cout << algorithmNames[i] << std::endl;
			}

			int key = _getch();

			if (key == UP_KEY) selectedItem = (selectedItem - 1 + numItems) % numItems;
			else if (key == DOWN_KEY) selectedItem = (selectedItem + 1) % numItems;
			else if (key == ENTER_KEY)
			{
				if (selectedItem < numItems - 1) selected[selectedItem] = !selected[selectedItem];
				else break;
			}
		}

		for (int i = 0; i < numItems - 1; ++i)
		{
			if (selected[i])
			{
				std::cout << algorithmNames[i] << std::endl;
			}
		}
	}
};
