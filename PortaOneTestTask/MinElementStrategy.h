#pragma once

#include <iostream>

#include "Strategy.h"

class MinElementStrategy : public Strategy
{
public:
    void start() override;
    void processElement(int number) override;
    void finish() override;
private:
    int minElement = 0;
};
