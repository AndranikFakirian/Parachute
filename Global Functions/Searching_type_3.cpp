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
        cout<<"Select the option of the parameter by the value of which you want to find the parachute system:"<<endl;
        break;
    case 2:
        cout<<"Here is the list of parameters."<<endl;
        break;
    case 3:
        cout<<""<<endl;
    }
    cout<<"Main boolean values..."<<endl;
    cout<<"Numerical values..."<<endl;
    cout<<"Other boolean values..."<<endl;
    string a;
    cin>>a;
    //Similar to St_1 code...
}
