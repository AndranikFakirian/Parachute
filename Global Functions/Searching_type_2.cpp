#pragma once
#include "allincluded.cpp"
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
            l[1]->help();
        else if (a=="d5")
            l[0]->help();
        else if (a=="d10")
            l[2]->help();
        else if (a=="t11")
            l[7]->help();
        else if (a=="d15u")
            l[3]->help();
        else if (a=="p1u")
            l[4]->help();
        else if (a=="plp60")
            l[5]->help();
        else if (a=="ptl72")
            l[6]->help();
        else if (a=="ut15")
            l[8]->help();
        else if (a=="z5")
            l[9]->help();
        else if (a=="z5s4")
            l[10]->help();
        else if (a=="z6p")
            l[11]->help();
        else
            cout<<"Error: wrong title"<<endl<<"Please, try again";
    }
    del(l);
};
