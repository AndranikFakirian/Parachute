#pragma once
#include "allincluded.cpp"
#include "randomizer.cpp"
#include "isnumber.cpp"

void St_3()
{
    system("cls");
    Sleep(200);
    switch (randomize(1))
    {
    case 1:
        cout<<"Which?"<<endl;
        break;
    }
    cout<<"Main boolean values..."<<endl;
    cout<<"Numerical values..."<<endl;
    cout<<"Other boolean values..."<<endl;
    string a;
    cin>>a;
    //Similar to St_1 code...
}
