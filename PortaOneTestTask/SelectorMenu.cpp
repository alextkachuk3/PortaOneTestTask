#include "SelectorMenu.h"

void SelectorMenu::selectAlgorithms(Context& context)
{
	std::vector<std::string> menuItems = { "Find Minimum", "Find Maximum", "Find Median", "Start" };
	std::vector<bool> selectedMenuItems(menuItems.size(), false);
	int selectedItem = 0;
	const int numItems = static_cast<int>(menuItems.size());

	while (true)
	{
		system("cls");

		std::cout << "Select algorithms:" << std::endl;
		for (int i = 0; i < numItems; ++i)
		{
			if (selectedItem == i) std::cout << "> ";
			else std::cout << "  ";

			if (i == numItems - 1) std::cout << "    ";
			else if (selectedMenuItems[i]) std::cout << "[x] ";
			else std::cout << "[ ] ";

			std::cout << menuItems[i] << std::endl;
		}

		int key = _getch();

		if (key == UP_KEY) selectedItem = (selectedItem - 1 + numItems) % numItems;
		else if (key == DOWN_KEY) selectedItem = (selectedItem + 1) % numItems;
		else if (key == ENTER_KEY)
		{
			if (selectedItem < numItems - 1) selectedMenuItems[selectedItem] = !selectedMenuItems[selectedItem];
			else break;
		}
	}

	for (int i = 0; i < numItems - 1; ++i)
	{
		if (selectedMenuItems[i])
		{
			if (i == 0)
			{
				context.addStrategy(new MinElementStrategy());
			}
			if (i == 1)
			{
				context.addStrategy(new MaxElementStrategy());
			}
			if (i == 2)
			{
				context.addStrategy(new MedianStrategy());
			}
		}
	}
}
