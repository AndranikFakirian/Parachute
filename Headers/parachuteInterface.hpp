#pragma once

class parachute
{
public:
    parachute();
    virtual ~parachute();
    void help();
protected:
    string title;
    float area;
    float weight;
    float des_speed;
    int min_height;
    bool is_main;
    bool forced_only;
    float speed;
    int round_time;
    bool has_extra_safety;
    bool manual_only;
    bool has_spring;
};
