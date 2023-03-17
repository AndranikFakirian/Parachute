#pragma once
#include "allincluded.cpp"
#include <cctype>
#include "titleconverter.cpp"




void St_2()
{
    parachute** l=create();
    system("cls");
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
        {
            l[1]->help();
            cout<<"Press \"Enter\" to close the help."<<endl;
            char x;
            cin.get(x);
            cin.get(x);
            break;
        }
        else if (a=="d5")
        {
            l[0]->help();
            cout<<"Press \"Enter\" to close the help."<<endl;
            char x;
            cin.get(x);
            cin.get(x);
            break;
        }
        else if (a=="d10")
        {
            l[2]->help();
            cout<<"Press \"Enter\" to close the help."<<endl;
            char x;
            cin.get(x);
            cin.get(x);
            break;
        }
        else if (a=="t11")
        {
            l[7]->help();
            cout<<"Press \"Enter\" to close the help."<<endl;
            char x;
            cin.get(x);
            cin.get(x);
            break;
        }
        else if (a=="d15u")
        {
            l[3]->help();
            cout<<"Press \"Enter\" to close the help."<<endl;
            char x;
            cin.get(x);
            cin.get(x);
            break;
        }
        else if (a=="p1u")
        {
            l[4]->help();
            cout<<"Press \"Enter\" to close the help."<<endl;
            char x;
            cin.get(x);
            cin.get(x);
            break;
        }
        else if (a=="plp60")
        {
            l[5]->help();
            cout<<"Press \"Enter\" to close the help."<<endl;
            char x;
            cin.get(x);
            cin.get(x);
            break;
        }
        else if (a=="ptl72")
        {
            l[6]->help();
            cout<<"Press \"Enter\" to close the help."<<endl;
            char x;
            cin.get(x);
            cin.get(x);
            break;
        }
        else if (a=="ut15")
        {
            l[8]->help();
            cout<<"Press \"Enter\" to close the help."<<endl;
            char x;
            cin.get(x);
            cin.get(x);
            break;
        }
        else if (a=="z5")
        {
            l[9]->help();
            cout<<"Press \"Enter\" to close the help."<<endl;
            char x;
            cin.get(x);
            cin.get(x);
            break;
        }
        else if (a=="z5s4")
        {
            l[10]->help();
            cout<<"Press \"Enter\" to close the help."<<endl;
            char x;
            cin.get(x);
            cin.get(x);
            break;
        }
        else if (a=="z6p")
        {
            l[11]->help();
            cout<<"Press \"Enter\" to close the help."<<endl;
            char x;
            cin.get(x);
            cin.get(x);
            break;
        }
        else
        {
            system("cls");
            cout<<"Error: wrong title"<<endl<<"Please, try again"<<endl;
        }
    }
    del(l);
};
