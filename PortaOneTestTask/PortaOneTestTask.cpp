#include <iostream>
#include <fstream>
#include <string>

#include "SelectorMenu.h"
#include "Context.h"

int main()
{
	Context context;
	SelectorMenu::selectAlgorithms(context);
	context.processFile("10m.txt");
	return 0;
}
