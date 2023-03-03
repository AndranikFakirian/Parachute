#include <iostream>
using namespace std;
//Function which returns a random integer number in the range from min to max (randomizer)
//Can be useful in generating different phrases in each session
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int randomize(int max, int min)
{
    srand(time(NULL));
    return min+rand()%(max-min+1);
}
//Simplified randomizer with min argument equal to 1
int randomize(int max)
{
    return randomize(max, 1);
}

#include "Classes/parachuteInterface.cpp"
int main ()
{
    Sleep(200);
    switch (randomize(4))
    {
    case 1:
        cout<<"Welcome to the Interactive Guide of Parachute Systems!"<<endl;
        break;
    case 2:
        cout<<"Glad to see you in the Interactive Guide of Parachute Systems!"<<endl;
        break;
    case 3:
        cout<<"Live long and prosper, user! \"I am\" the Interactive Guide of Parachute Systems."<<endl;
        break;
    case 4:
        cout<<"Hello, user! My name is the Interactive Guide of Parachute Systems, nice to meet you!"<<endl;
    }
    Sleep(2000); //Allows to make delays between messages (milliseconds)
    switch (randomize(4))
    {
    case 1:
        cout<<"What do you want to find out about parachute systems today?"<<endl;
        break;
    case 2:
        cout<<"The Interactive Guide of Parachute Systems is ready to help you to find some information."<<endl;
        break;
    case 3:
        cout<<"The Interactive Guide of Parachute Systems at your disposal."<<endl;
        break;
    case 4:
        cout<<"What information do you want to gain about parachute systems?"<<endl;
        break;
    }
    for (;;)
    {
        Sleep(2000);
        switch (randomize(3))
        {
        case 1:
            cout<<"Select one of the variants of searching necessary information below by typing the number of this option from the"<<endl<<"keyboard."<<endl;
            break;
        case 2:
            cout<<"Choose the type of searching interested information by dialing the number of appropriate variant from the keyboard."<<endl;
            break;
        case 3:
            cout<<"Which method of searching necessary information do you want to use? Type the number of appropriate variant from the"<<endl<<"keyboard."<<endl;
            break;
        }
        //Some variants
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
        if ((a=="Quit")|(a=="quit")|(a=="Q")|(a=="q"))
        {
            system("cls"); //It clears the command line (cmd)
            break;
        }
        //Choice
        system("cls");
        Sleep(200);
        switch (randomize(4))
        {
        case 1:
            cout<<"What do you want to find out about parachute systems next?"<<endl;
            break;
        case 2:
            cout<<"Wake up, user, we have the information about parachute systems to find."<<endl;
            break;
        case 3:
            cout<<"What information about parachute systems do you learn?"<<endl;
            break;
        case 4:
            cout<<"You need more things about parachute systems to know? The Interactive Guide of Parachute Systems at your service."<<endl;
            break;
        }
    }
    Sleep(200);
    switch (randomize(4))
    {
    case 1:
        cout<<"Goodbye, dear user! Hope Interactive Guide of Parachute Systems was helpful!"<<endl;
        break;
    case 2:
        cout<<"Goodbye, user! Interactive Guide of Parachute Systems is looking forward to help you once again!"<<endl;
        break;
    case 3:
        cout<<"Goodbye, dear user! Interactive Guide of Parachute Systems will be glad to see you again!"<<endl;
        break;
    case 4:
        cout<<"Go your own way, user."<<endl;
        break;
    }

    return 0;
}
