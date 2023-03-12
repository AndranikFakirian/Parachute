#pragma once
#include <cctype>
#include <cstring>

string titleConverter (string s) //Makes from "Z-5_s 4" "z5s4"
{
    int len=s.length();
    char* c=new char[len];
    strcpy(c, s.c_str());
    char* c1=new char[len];
    string S="";
    int j=0;
    for (int i=0; i<len; i++)
    {
        if ((c[i]!=' ')&&(c[i]!='-')&&(c[i]!='_'))
        {
            c1[j]=tolower(c[i]);
            j++;
        }
    }
    S=((string)c1).substr(0, j);
    delete [] c;
    delete [] c1;
    return S;
}
