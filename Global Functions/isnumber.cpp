#pragma once
#include <iostream>
#include <cstring>
using namespace std;

string fl(string s)
{
    int x=s.find(",");
    return (s.substr(0, x)+"."+s.substr(x+1, s.length()));
}
int isNumber (string s)
{
    int len=s.length();
    char* c=new char[len];
    strcpy(c, s.c_str());
    int t=1;
    for (int i=0; i<len; i++)
    {
        if ((c[i]=='.')&&(t<2))
        {
            t=2;
        }
        else if ((c[i]==',')&&(t<2))
        {
            t=3;
        }
        else if (!(isdigit(c[i])))
        {
            t=0;
            break;
        }
    }
    delete [] c;
    return t;
}
