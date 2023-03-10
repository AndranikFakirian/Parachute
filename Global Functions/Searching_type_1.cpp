#pragma once
#include <iostream>
#include "isnumber.cpp"
#include "allincluded.cpp"
#include "randomizer.cpp"
void St_1()
{
    parachute** p=create();
    for (;;)
    {
        system("cls");
        Sleep(200);
        switch (randomize(3))
        {
        case 1:
            cout<<"Here is a list of parachute systems:"<<endl;
            break;
        case 2:
            cout<<"Here it is. List of parachute systems:"<<endl;
            break;
        case 3:
            cout<<"Here, as ordered. List of parachute systems:"<<endl;
            break;
        }
        for (int i=0; i<12; i++)
        {
            Sleep(200);
            cout<<i<<". "<<p[i]->get_title()<<";"<<endl;
        }
        Sleep(2000);
        switch (randomize(3))
        {
        case 1:
            cout<<"Type the number of interested parachute system."<<endl;
            break;
        case 2:
            cout<<"Enter the number of the parachute system that you need information about."<<endl;
            break;
        case 3:
            cout<<"About which parachute system information is necessary? Dial the number of appropriate option."<<endl;
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
                switch (randomize(1))
                {
                case 1:
                    cout<<"Did you just hit the keyboard with your face? Next time, write something more intelligible."<<endl;
                    break;
                case 2:
                    cout<<"Interactive Guide of Parachute Systems didn\'t manage to understand what you wrote."<<endl<<"Try to enter what you want correctly next time."<<endl;
                    break;
                case 3:
                    cout<<"Put a smarter ape behind this computer. Then try again to search for information about parachute systems."<<endl;
                    break;
                case 4:
                    cout<<"Interactive Guide of Parachute Systems doesn\'t have so much resources to decipher what you meant."<<endl<<"Try to make yourself clearer next time."<<endl;
                    break;
                }
            }
        }
        else if ((stoi(a)<12)&(stoi(a)>0))
        {
            Sleep(200);
            system("cls");
            p[stoi(a)]->help();
            Sleep(200);
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
            break;
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

    system("cls");
    del(p);
}
