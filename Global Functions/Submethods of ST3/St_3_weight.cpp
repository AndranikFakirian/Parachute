#pragma once
#include "sortNum.cpp"
#include "../allincluded.cpp"
#include "../randomizer.cpp"
#include "../isnumber.cpp"

void weight_search()
{
    parachute** p=create();
    for (;;)
    {
        system("cls");
        Sleep(200);
        cout<<"Please, enter weight value you want to find"<<endl;
        string a;
        cin>>a;
        int v=stoi(a);
        Sleep(200);
        if (isNumber(a)!=1)
        {
            cout<<"Really?"<<endl;
        }
        else
        {
            system("cls");
            Sleep(200);
            parac_param <int>l[12];
            for (int i=0; i<12; i++)
            {
                l[i].Num=i;
                l[i].val=abs((p[i]->get_weight())-v);
            }
            combSort(l, v);
            if (l[0]<=5)
            {
                for (int i=0; (i<3) && (p[i]<=5); i++)
                {
                    cout<<i+1<<". "<<p[i]->get_title()<<endl;
                }
                Sleep(200);
                cout<<"When you finish reading the information press \"Enter\" to close help."<<endl;
                del[] l;
                char x;
                cin.get(x);
                cin.get(x);
                break;
            }
            else
            {
                del[] l;
                cout<<"No close values found."<<endl;
                break;
            }
        }
        Sleep(1000);
    }
    del(p);
};




