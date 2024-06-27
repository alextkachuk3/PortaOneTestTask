#pragma once

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "Strategy.h"

class Context {
private:
    std::vector<Strategy*> strategies;
public:
    void addStrategy(Strategy* strategy);
    void processFile(const std::string& filename);
};
