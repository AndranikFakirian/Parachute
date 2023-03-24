#pragma once

#include "../Headers/parachuteInterface.hpp"
#include <windows.h>
parachute::parachute() //Default (if variable appears in inheritors it gives an error when you are trying to call it in ancestor's pointer
{                       //on that inheritor (AB: public A, x' - variable which firstly appeared in AB => A *a=new AB(); a->x'=... //error))
    title="Parachute";
    area=-1;
    weight=-1;
    des_speed=-1;
    min_height=-1;
    is_main=false;
    forced_only=false;
    speed=-1;
    round_time=-1;
    has_extra_safety=false;
    manual_only=false;
    has_spring=false;
    has_safety=true;
}
parachute::~parachute() {};
string parachute::get_title()
{
    return title;
}
float parachute::get_area()
{
    return area;
}
float parachute::get_weight()
{
    return parachute::weight;
}
float parachute::get_des_speed()
{
    return des_speed;
}
int parachute::get_min_height()
{
    return min_height;
}
bool parachute::get_is_main()
{
    return is_main;
}
bool parachute::get_forced_only()
{
    return forced_only;
}
float parachute::get_speed()
{
    return speed;
}
int parachute::get_round_time()
{
    return round_time;
}
bool parachute::get_has_extra_safety()
{
    return has_extra_safety;
}
bool parachute::get_manual_only()
{
    return manual_only;
}
bool parachute::get_has_spring()
{
    return has_spring;
}
bool parachute::get_has_safety()
{
    return has_safety;
}
void parachute::help()
{
    Sleep(200);
    system("cls");
    Sleep(200);
    cout<<get_title()<<endl;
    Sleep(200);
    if (get_is_main())
    {
        cout<<"Main ";
        if (get_speed()>0)
        {
            cout<<"controlled parachute system."<<endl;
        }
        else
        {
            cout<<"uncontrolled parachute system."<<endl;
        }
    }
    else
    {
        cout<<"Reserve parachute system."<<endl;
    }
    Sleep(200);
    cout<<"Characteristics:"<<endl;
    Sleep(500);
    cout<<"Area: "<<get_area()<<" m^2"<<endl;
    Sleep(200);
    cout<<"Weight: "<<get_weight()<<" kg"<<endl;
    Sleep(200);
    cout<<"Descent speed: "<<get_des_speed()<<" m/s"<<endl; //Decent speed? What is indecent speed? 3*10^8 m/s?
    Sleep(200);
    cout<<"Minimal height: "<<get_min_height()<<" m"<<endl;
    Sleep(200);
    if (get_speed()>0)
    {
        cout<<"Horizontal speed: "<<get_speed()<<" m/s"<<endl;
        Sleep(200);
        cout<<"The period of one turn: "<<get_round_time()<<" s"<<endl;
        Sleep(200);
    }
    if (get_forced_only())
    {
        cout<<"Puts into effect automatically."<<endl;
        Sleep(200);
    }
    else if (get_manual_only())
    {
        cout<<"Puts into effect only manually."<<endl;
        Sleep(200);
    }
    else if (get_is_main())
    {
        cout<<"Can be put into effect either manually or automatically."<<endl;
        Sleep(200);
    }
    if (!(get_is_main())&&(get_has_safety()))
    {
        cout<<"Has a safety device and a spring platform."<<endl;
        Sleep(200);
    }
    if (get_has_extra_safety())
    {
        cout<<"Has an extra safety device."<<endl;
        Sleep(200);
    }
}
