#pragma once
#include "allincluded.cpp"
#include "print.cpp"
#include <cctype>




void St_2()
{
    parachute** l=create();
    for (;;)
    {
        cout<<"Enter the title of parachute system"<<endl;
        cout<<"If you want to exit enter \"quit\" or \"q\""<<endl;
        string a;
        char c[6];
        int len;
        for (int i=0;i<8;i++)
        {
            cin.get(c[i]);
            if (c[i]=='\n')
            {
                len=i;
                break;
            }
            c[i]=tolower(c[i]);
        }
        a=((string)c).substr(0, len+1);
        if ((a=="quit")||(a=="q"))
        {
            system("cls");
            break;
        }
        else if ((a=="d-6")||(a=="d6")||(a=="d_6")||(a=="d 6"))
            print(1,l);
        else if ((a=="d-5")||(a=="d5")||(a=="d_5")||(a=="d 5"))
            print(0,l);
        else if ((a=="d-10")||(a=="d10")||(a=="d_10")||(a=="d 10"))
            print(2,l);
        else if ((a=="t-11")||(a=="t11")||(a=="t_11")||(a=="t 11"))
            print(7,l);
        else if ((a=="d1-5u")||(a=="d15u")||(a=="d1_5u")||(a=="d1 5u"))
            print(3,l);
        else if ((a=="p1-u")||(a=="p1u")||(a=="p1_u")||(a=="p1 u"))
            print(4,l);
        else if ((a=="plp-60")||(a=="plp60")||(a=="plp_60")||(a=="plp 60"))
            print(5,l);
        else if ((a=="ptl-72")||(a=="ptl72")||(a=="ptl_72")||(a=="ptl 72"))
            print(6,l);
        else if ((a=="ut-15")||(a=="ut15")||(a=="ut_15")||(a=="ut 15"))
            print(8,l);
        else if ((a=="z-5")||(a=="z5")||(a=="z_5")||(a=="z 5"))
            print(9,l);
        else if ((a=="z-5-s4")||(a=="z5s4")||(a=="z_5_s4")||(a=="z 5 s4")||(a=="z5 s4"))
            print(10,l);
        else if ((a=="z-6p")||(a=="z6p")||(a=="z_6p")||(a=="z 6p"))
            print(11,l);
        else
            cout<<"Error: wrong title"<<endl<<"Please, try again";
    }
    del(l);
};
