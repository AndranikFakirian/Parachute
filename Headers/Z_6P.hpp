#pragma once
#include "reserve.hpp"

class Z_6P:public reserve
{
protected:
    bool has_safety;
    bool has_spring;
public:
    Z_6P();
};
