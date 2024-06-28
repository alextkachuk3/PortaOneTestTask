#pragma once

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include "Strategy.h"

constexpr int ARRAY_MAX_SIZE = 10000000;

class Context {
private:
    std::vector<Strategy*> strategies;
public:
    void addStrategy(Strategy* strategy);
    void processFile(const std::string& filename);
};
