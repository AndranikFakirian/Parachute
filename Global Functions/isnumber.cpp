#pragma once
#include <iostream>
#include <cstring>
using namespace std;

bool isNumber (string s)
{
    int len=s.length();
    char* c=new char[len];
    strcpy(c, s.c_str());
    bool t=true;
    for (int i=0; i<len; i++)
    {
        t=t&&isdigit(c[i]);
    }
    return t;
}
