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
}
parachute::~parachute() {};
void parachute::help()
{
        //Considering all parameters
}
