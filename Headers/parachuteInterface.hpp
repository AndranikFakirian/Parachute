#pragma once

class parachute
{
public:
    parachute();
    virtual ~parachute();
    void help();
    string get_title();
    float get_area();
    float get_weight();
    float get_des_speed();
    int get_min_height();
    bool get_is_main();
    bool get_forced_only();
    float get_speed();
    int get_round_time();
    bool get_has_extra_safety();
    bool get_manual_only();
    bool get_has_spring();
    bool get_has_safety();
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
    bool has_safety;
};
