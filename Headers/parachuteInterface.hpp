#pragma once

class parachuteInterface
{
public:
<<<<<<< Updated upstream
    void itWorks();
=======
    parachute();
    virtual ~parachute();
    void help();
    string get_title;
    float get_area;
    float get_weight;
    float get_des_speed;
    int get_min_height;
    bool get_is_main;
    bool get_forced_only;
    float get_speed;
    int get_round_time;
    bool get_has_extra_safety;
    bool get_manual_only;
    bool get_has_spring;
>>>>>>> Stashed changes
protected:
    string title;
};
