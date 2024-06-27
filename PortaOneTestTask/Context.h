#pragma once

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "CalculationStrategy.h"

class Context {
private:
    std::vector<CalculationStrategy*> strategies;
public:
    void addStrategy(CalculationStrategy* strategy) {
        strategies.push_back(strategy);
    }

    void processFile(const std::string& filename) {
        std::ifstream file(filename);
        if (!file.is_open()) {
            std::cerr << "Unable to open file" << std::endl;
            return;
        }

        for (auto& strategy : strategies) {
            strategy->start();
        }

        int number;
        while (file >> number) {
            for (auto& strategy : strategies) {
                strategy->processElement(number);
            }
        }

        for (auto& strategy : strategies) {
            strategy->finish();
        }

        file.close();
    }

    ~Context() {
        for (auto& strategy : strategies) {
            delete strategy;
        }
    }
};
