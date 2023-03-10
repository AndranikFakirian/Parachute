#pragma once

#include "../Headers/parachuteInterface.hpp"
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
void parachute::help()
{
        //Considering all parameters
}
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
