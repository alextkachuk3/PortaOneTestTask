#pragma once

class CalculationStrategy {
public:
    virtual void start() = 0;
    virtual void processElement(int number) = 0;
    virtual void finish() = 0;
};