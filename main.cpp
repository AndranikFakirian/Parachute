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
    parachuteInterface p;
    switch (randomize(2))
    {
    case 1:
        cout<<"Welcome to the Interactive Guide of Parachute Systems!"<<endl;
        break;
    case 2:
        cout<<"Glad to see you in the Interactive Guide of Parachute Systems!"<<endl;
        break;
    }
    Sleep(2000); //Allows to make delays between messages (milliseconds)
    for (;;)
    {
        switch (randomize(1))
        {
        case 1:
            cout<<"What do you want to find out about parachute systems today?"<<endl;
            break;
        }
        Sleep(2000);
        switch (randomize(1))
        {
        case 1:
            cout<<"Select one of the variants of searching necessary information below by typing the number of this option from the"<<endl<<"keyboard."<<endl;
            break;
        }
        Sleep(2000);
        switch (randomize(1))
        {
        case 1:
            cout<<"If you want to terminate your session, dial \"Quit\" or just \"Q\" with an uppercase or lowercase letter from the keyboard."<<endl;
            break;
        }
        string a;
        cin>>a;
        if ((a=="Quit")|(a=="quit")|(a=="Q")|(a=="q"))
        {
            system("cls"); //It clears the command line (cmd)
            break;
        }
        system("cls");
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
