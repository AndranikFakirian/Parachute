#pragma once
#include "sortNum.cpp"
#include "../allincluded.cpp"
#include "../randomizer.cpp"
#include "../isnumber.cpp"

void horizontal_speed_search()
{
    parachute** p=create();
    for (;;)
    {
        system("cls");
        Sleep(200);
        cout<<"Please, enter horizontal speed value you want to find"<<endl;
        string a;
        cin>>a;
        int v=stof(a);
        Sleep(200);
        if (isNumber(a)==0)
        {
            cout<<"Really?"<<endl;
        }
        else
        {
            system("cls");
            Sleep(200);
            parac_param <float>l[12];
            for (int i=0; i<12; i++)
            {
                l[i].Num=i;
                l[i].val=abs((p[i]->get_speed())-v);
            }
            combSort(l, 12);
            if (l[0].val<=5)
            {
                for (int i=0; (i<3) && (l[i].val<=5); i++)
                {
                    cout<<i+1<<". "<<p[(l[i].Num)]->get_title()<<endl;
                }
                Sleep(200);
                cout<<"When you finish reading the information press \"Enter\" to close help."<<endl;
                char x;
                cin.get(x);
                cin.get(x);
                break;
            }
            else
            {
                cout<<"No close values found."<<endl;
                break;
            }
            delete[] l;
        }
        Sleep(1000);
    }
    del(p);
};
