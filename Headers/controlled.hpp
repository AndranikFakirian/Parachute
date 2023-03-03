#pragma once
#include "main.hpp"

class controlled:public main
{
protected:
    float speed;
    int round_time;
public:
    controlled();
};
