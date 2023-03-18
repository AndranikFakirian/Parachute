#pragma once
#include "allincluded.cpp"
#include "titleconverter.cpp"
#include "randomizer.cpp"

void St_2()
{
    parachute** p=create();
    for (;;)
    {
        system("cls");
        Sleep(200);
        switch (randomize(3))
        {
        case 1:
            cout<<"Type the title of parachute system to search for it."<<endl;
            break;
        case 2:
            cout<<"To search for parachute system, dial its title."<<endl;
            break;
        case 3:
            cout<<"Enter the title of the parachute system you are looking for."<<endl;
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
        if (a.length()>7)
        {
            switch (randomize(1))
            {
            case 1:
                cout<<"It seems you have written too long a title. Interactive Guide of Parachute Systems cannot process such long"<<endl<<"titles. Please type a shorter one or use another type of searching."<<endl;
                break;
            case 2:
                cout<<"Interactive Guide of Parachute Systems cannot process too long title you have written. Please enter more"<<endl<<"brief one or use a different type of searching."<<endl;
                break;
            case 3:
                cout<<"The title is too long to process for an Interactive Guide of Parachute Systems. Please dial more concise one or use another type of searching."<<endl;
                break;
            }
        }
        else
        {
            a=titleConverter(a);
            if ((a=="quit")||(a=="q"))
            {
                system("cls");
                break;
            }
            else
            {
                bool t=false;
                for (int i=0; i<12; i++)
                {
                    if (a==titleConverter(p[i]->get_title()))
                    {
                        p[i]->help();
                        t=true;
                        break;
                    }
                }
                if (t)
                {
                    switch (randomize(3))
                    {
                    case 1:
                        cout<<"When you finish reading the information press \"Enter\" to close help."<<endl;
                        break;
                    case 2:
                        cout<<"Press \"Enter\" to close the help."<<endl;
                        break;
                    case 3:
                        cout<<"If you have finished reading the help, close it by pressing \"Enter\"."<<endl;
                        break;
                    }
                    char x;
                    cin.get(x);
                    cin.get(x);
                    break;
                }
                else
                {
                    switch (randomize(1))
                    {
                    case 1:
                        cout<<"Interactive Guide of Parachute Systems couldn\'t find a parachute system with that title. Please write"<<endl<<"the title correctly next time or use another type of searching."<<endl;
                        break;
                    case 2:
                        cout<<"Interactive Guide of Parachute Systems don\'t have a parachute system with that title in its database."<<endl<<"Please type the title correctly next time or use a different type of searching."<<endl;
                        break;
                    case 3:
                        cout<<"You have written a title of parachute system that is missing in database of Interactive Guide of"<<endl<<"Parachute Systems. Please enter the title correctly next time or use another type of searching"<<endl;
                        break;
                    }
                }
            }
        }
        Sleep(1000);
    }
    system("cls");
    del(p);
};
