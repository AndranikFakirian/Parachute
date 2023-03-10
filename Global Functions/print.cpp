#pragma once
#include "allincluded.cpp"
void print(int i, parachute** l)
{
    system("cls");
    cout<<boolalpha;
    cout<<"Area "<<l[i].get_area()<<endl;
    cout<<"Weight "<<l[i].get_weight()<<endl;
    cout<<"Decent speed "<<l[i].get_des_speed()<<endl;
    cout<<"Min height "<<l[i].get_min_height()<<endl;
    cout<<"Is main "<<l[i].get_is_main()<<endl;
    if (i<9)
        cout<<"Forced only "<<l[i].get_forced_only()<<endl;
    if ((i==3)||(i==4)||(i==6)||(i==8))
    {
        cout<<"Round time "<<l[i].get_round_time()<<endl;
        cout<<"Speed "<<l[i].get_speed()<<endl;
    }
    if (i==0)
        cout<<"Has extra safety device "<<l[i].get_has_extra_safety<<endl;
    if (i==11)
    {
        cout<<"Has safety device "<<l[i].get_has_safety()<<endl;
        cout<<"Has spring platform "<<l[i].get_has_spring()<<endl;
    }
    if (i==8)
    {
        cout<<"Manual only "<<l[i].get_manual_only()<<endl;
    }
    cout<<"If you want to exit enter \"quit\" or \"q\""<<endl;
}
