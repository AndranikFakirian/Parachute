#pragma once
#include "allincluded.cpp"
#include "randomizer.cpp"
#include "isnumber.cpp"

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
        if (!isNumber(a))
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
            }
        }
        else if ((stoi(a)<12)&(stoi(a)>0))
        {
            switch (stoi(a))
            {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                break;
            case 10:
                break;
            case 11:
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
        Sleep(1000);
    }
}
