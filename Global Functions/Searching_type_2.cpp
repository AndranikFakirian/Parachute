#pragma once
#include "allincluded.cpp"
#include "print.cpp"
#include <cctype>
#include "titleconverter.cpp"




void St_2()
{
    parachute** l=create();
    for (;;)
    {
        cout<<"Enter the title of parachute system"<<endl;
        cout<<"If you want to exit enter \"quit\" or \"q\""<<endl;
        string a;
        cin>>a;
        a=titleConverter(a);
        if ((a=="quit")||(a=="q"))
        {
            system("cls");
            break;
        }
        else if (a=="d6")
            print(1,l);
        else if (a=="d5")
            print(0,l);
        else if (a=="d10")
            print(2,l);
        else if (a=="t11")
            print(7,l);
        else if (a=="d15u")
            print(3,l);
        else if (a=="p1u")
            print(4,l);
        else if (a=="plp60")
            print(5,l);
        else if (a=="ptl72")
            print(6,l);
        else if (a=="ut15")
            print(8,l);
        else if (a=="z5")
            print(9,l);
        else if (a=="z5s4")
            print(10,l);
        else if (a=="z6p")
            print(11,l);
        else
            cout<<"Error: wrong title"<<endl<<"Please, try again";
    }
    del(l);
};
