#pragma once
#include "allincluded.cpp"
#include "randomizer.cpp"

void St_1()
{
    parachute** p=create();
    system("cls");
    Sleep(200);
    switch (randomize(1))
    {
    case 1:
        cout<<"Here is the list:"<<endl;
        break;
    }
    for (int i=0; i<12; i++)
    {
        cout<<i<<". "<<p[i]/*.get_title()*/<<";"<<endl;
    }
    switch (randomize(1))
    {
    case 1:
        cout<<"Type the number of interested parachute system"<<endl;
        break;
    }
    string a;
    cin>>a;
    if (a<12)
    {
        p[a].help();
    }
    else
    {
        cout
    }
    switch (randomize(1))
    {
    case 1:
        cout<<"When you finish reading the information press Enter to close help"<<endl;
        break;
    }
    cin>>a;

    system("cls");
    del(p);
}
