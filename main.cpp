#include <iostream>
using namespace std;
/*
//Function which returns a random integer number in the range from min to max
//Can be useful in generating different phrases in each session
#include <stdlib.h>
#include <time.h>
int randomize(max, min)
{
    srand(time(NULL));
    return min+rand()%(max-min+1);
}
*/
#include "Classes/parachuteInterface.cpp"
int main ()
{
    parachuteInterface p;
    p.itWorks();
    //cout<<"Welcome to the Interactive Guide of Parachute Systems!"<<endl;
    //cout<<"Glad to see you in the Interactive Guide of Parachute Systems!"<<endl;
    //cout<<"What do you want to find out about parachute systems today?"<<endl;
    //cout<<"Select one of the variants of searching necessary information by typing the number of this option from the keyboard."<<endl;
    //cout<<"If you want to terminate your session, dial \"Quit\" from the keyboard."<<endl;

    return 0;
}
