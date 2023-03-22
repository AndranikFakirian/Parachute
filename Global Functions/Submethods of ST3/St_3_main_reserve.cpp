#pragma once
#include "../allincluded.cpp"
#include "../randomizer.cpp"
#include "../isnumber.cpp"

void main_reserve_search()
{
    system("cls");
    Sleep(200);
    switch (randomize(1))
    {
    case 1:
        cout<<"Main or reserve?"<<endl;
        break;
    }
    cout<<"1. Main;"<<endl;
    cout<<"2. Reserve;"<<endl;
    string a;
    cin>>a;
    if (isNumber(a)!=1)
    {
        switch (randomize(1))
        {
        case 1:
            cout<<"Pretty simple thinking for such a mighty intellect."<<endl;
            break;
        }
    }
    else if ((stoi(a)>0)&&(stoi(a)<3))
    {
        //Code...
    }
    else
    {
        switch (randomize(1))
        {
        case 1:
            cout<<"Why is this fool still breathing my air? This is unacceptable!"<<endl;
            break;
        }
    }
}
