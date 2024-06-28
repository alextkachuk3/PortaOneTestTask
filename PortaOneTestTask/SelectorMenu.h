#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include "Context.h"
#include "MinElementStrategy.h"
#include "MaxElementStrategy.h"
#include "MedianStrategy.h"

constexpr int ENTER_KEY = 13;
constexpr int UP_KEY = 72;
constexpr int DOWN_KEY = 80;

class SelectorMenu
{
public:
	static void selectAlgorithms(Context& context);	
};
