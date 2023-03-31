#pragma once
#include "Submethods of ST3/St_3_main_reserve.cpp"
#include "Submethods of ST3/St_3_controlled_uncontrolled.cpp"
#include "Submethods of ST3/St_3_area.cpp"
#include "Submethods of ST3/St_3_weight.cpp"
#include "Submethods of ST3/St_3_descent_speed.cpp"
#include "Submethods of ST3/St_3_min_height.cpp"
#include "Submethods of ST3/St_3_horizontal_speed.cpp"
#include "Submethods of ST3/St_3_round_time.cpp"
#include "Submethods of ST3/St_3_type_of_put.cpp"
#include "Submethods of ST3/St_3_safety.cpp"
#include "Submethods of ST3/St_3_extra_safety.cpp"

void St_3()
{
    for (;;)
    {
        system("cls");
        Sleep(200);
        switch (randomize(3))
        {
        case 1:
            cout<<"Select the option of the parameter by the value of which you want to find the parachute system:"<<endl;
            break;
        case 2:
            cout<<"Here is the list of parameters of parachute systems. Choose the variant with the corresponding parameter"<<endl<<"by the value of which you want to search:"<<endl;
            break;
        case 3:
            cout<<"Choose the variant with the parameter of interest to search for parachute systems by its value:"<<endl;
            break;
        }
        Sleep(500);
        cout<<"1. Main or reserve parachute system;"<<endl;
        Sleep(200);
        cout<<"2. Controlled or uncontrolled parachute system;"<<endl;
        Sleep(200);
        cout<<"3. Area of parachute system;"<<endl;
        Sleep(200);
        cout<<"4. Weight of parachute system;"<<endl;
        Sleep(200);
        cout<<"5. Descent speed of parachute system;"<<endl;
        Sleep(200);
        cout<<"6. Minimal height of parachute system;"<<endl;
        Sleep(200);
        cout<<"7. Horizontal speed of parachute system;"<<endl;
        Sleep(200);
        cout<<"8. The period of one turn of parachute system;"<<endl;
        Sleep(200);
        cout<<"9. Type of putting into effect (automatically or manually) of parachute system;"<<endl;
        Sleep(200);
        cout<<"10. Availability of a safety device of parachute system;"<<endl;
        Sleep(200);
        cout<<"11. Availability of an extra safety device of parachute system;"<<endl;
        Sleep(2000);
        switch (randomize(3))
        {
        case 1:
            cout<<"Type the number of interested option."<<endl;
            break;
        case 2:
            cout<<"Enter the number of the parameter you want to search for."<<endl;
            break;
        case 3:
            cout<<"Dial the number of appropriate variant."<<endl;
            break;
        }
        Sleep(2000);
        switch (randomize(3))
        {
        case 1:
            cout<<"If you want to terminate your session, dial \"Quit\" or just \"Q\" with an uppercase or lowercase letter from the keyboard."<<endl;
            break;
        case 2:
            cout<<"Do you no longer need Interactive Guide of Parachute Systems now? You can type \"Quit\" or just \"Q\" with an uppercase or"<<endl<<"lowercase letter from the keyboard to cease your session."<<endl;
            break;
        case 3:
            cout<<"If you don't need more help from Interactive Guide of Parachute Systems now, end your session by dialing \"Quit\" or"<<endl<<"just \"Q\" with an uppercase or lowercase letter from the keyboard."<<endl;
            break;
        }
        string a;
        cin>>a;
        Sleep(200);
        if (isNumber(a)!=1)
        {
            if ((a=="Quit")||(a=="quit")||(a=="Q")||(a=="q"))
            {
                system("cls");
                break;
            }
            else
            {
                switch (randomize(4))
                {
                case 1:
                    cout<<"Genius user, Interactive Guide of Parachute Systems isn\'t bright enough to understand what you\'ve written."<<endl<<"Please, condescend to a foolish Interactive Guide of Parachute Systems and explain yourself more simply."<<endl;
                    break;
                case 2:
                    cout<<"Seriously? Why do Interactive Guide of Parachute Systems have to explain that there are a \"Backspace\" and"<<endl<<"\"Delete\" buttons on your keyboard if you type something wrong? Just dial what you want correctly next time and don\'t"<<endl<<"drive Interactive Guide of Parachute Systems crazy."<<endl;
                    break;
                case 3:
                    cout<<"Let Interactive Guide of Parachute Systems just pretend like it didn\'t see what you wrote and we\'ll start"<<endl<<"from the beginning and you write what you wanted correctly. Do you like this option, user?!"<<endl;
                    break;
                case 4:
                    cout<<"Mistake. Realize. Correct. Repeat."<<endl;
                    break;
                }
                Sleep(3000);
            }
        }
        else if ((stoi(a)<12)&(stoi(a)>0))
        {
            switch (stoi(a))
            {
            case 1:
                main_reserve_search();
                break;
            case 2:
                controlled_uncontrolled_search();
                break;
            case 3:
                area_search();
                break;
            case 4:
                weight_search();
                break;
            case 5:
                descent_speed_search();
                break;
            case 6:
                min_height_search();
                break;
            case 7:
                horizontal_speed_search();
                break;
            case 8:
                round_time_search();
                break;
            case 9:
                type_of_put_search();
                break;
            case 10:
                safety_search();
                break;
            case 11:
                extra_safety_search();
                break;
            }
        }
        else
        {
            switch (randomize(3))
            {
            case 1:
                cout<<"You wrote the wrong number, try to write it correctly next time."<<endl;
                break;
            case 2:
                cout<<"The wrong number was dialed, next time enter the correct number."<<endl;
                break;
            case 3:
                cout<<"Wrong number. Try again."<<endl;
                break;
            }
        }
        Sleep(2000);
    }
}
