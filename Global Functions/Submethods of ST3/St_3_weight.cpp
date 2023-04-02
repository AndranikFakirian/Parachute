#pragma once
#include "sortNum.cpp"
#include "../allincluded.cpp"
#include "../randomizer.cpp"
#include "../isnumber.cpp"
#include <cmath>

void weight_search()
{
    parachute** p=create();
    for (;;)
    {
        system("cls");
        Sleep(200);
        switch (randomize(3))
        {
        case 1:
            cout<<"Dial the interest value of the parachute system weight to search for parachute systems with the closest value"<<endl<<"of this parameter to the typed one."<<endl;
            break;
        case 2:
            cout<<"Enter the desired value of the parachute system weight. The Interactive Guide of Parachute Systems will help"<<endl<<"you find parachute systems with the closest value of that parameter."<<endl;
            break;
        case 3:
            cout<<"To search by the weight of parachute systems, type the interest value of this parameter."<<endl<<"The Interactive Guide of Parachute Systems will find you parachute systems with the closest value of that parameter."<<endl;
            break;
        }
        string a;
        cin>>a;
        Sleep(200);
        int Number=isNumber(a);
        if (Number==0)
        {
            switch (randomize(4))
            {
            case 1:
                cout<<"I thought that human is the only species with intelligence, besides quite developed. What about you?"<<endl<<"Pretty simple thinking for such a mighty intellect. Please, cease shaming your species dial what you wanted"<<endl<<"correctly next time."<<endl;
                break;
            case 2:
                cout<<"Why is this fool still breathing Interactive Guide\'s of Parachute Systems air? This is unacceptable!"<<endl<<"Write what you wanted the right way next time!"<<endl;
                break;
            case 3:
                cout<<"Hmm... it doesn\'t make any sense for Interactive Guide of Parachute Systems. Please enter into Interactive"<<endl<<"Guide of Parachute Systems position, type something more meaningful next time."<<endl;
                break;
            case 4:
                cout<<"Looking at you Interactive Guide of Parachute Systems realizes why some people share the idea of issuing human"<<endl<<"reproduction permits. Please, try again and enter correctly what you wanted."<<endl;
                break;
            }
        }
        else
        {
            if (Number==3)
            {
                a=fl(a);
            }
            float v=stof(a);
            system("cls");
            Sleep(200);
            parac_param <float>l[12];
            for (int i=0; i<12; i++)
            {
                l[i].Num=i;
                l[i].val=abs((p[i]->get_weight())-v);
            }
            combSort(l, 12);
            if (l[0].val<=5)
            {
                switch (randomize(3))
                {
                case 1:
                    cout<<"Here is a list of parachute systems with the closest value of weight to the dialed one:"<<endl;
                    break;
                case 2:
                    cout<<"Here it is. List of parachute systems with the closest value of weight to the entered one:"<<endl;
                    break;
                case 3:
                    cout<<"Here, as ordered. List of parachute systems with the closest value of weight to the typed one:"<<endl;
                    break;
                }
                for (int i=0; (i<3) && (l[i].val<=5); i++)
                {
                    Sleep(200);
                    cout<<i+1<<". "<<p[(l[i].Num)]->get_title()<<endl;
                    cout<<"   Weight: "<<p[(l[i].Num)]->get_weight()<<" kg"<<endl;
                }
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
                cin.get(x);
            }
            else
            {
                switch (randomize(1))
                {
                case 1:
                    cout<<"The dialed value of weight is too far from the values of this parameter for parachute systems, which are"<<endl<<"in the Interactive Guide\'s of Parachute Systems database."<<endl<<"Here is the parachute system with the closest value of that parameter:"<<endl;
                    break;
                case 2:
                    cout<<"The Interactive Guide of Parachute Systems doesn\'t have parachute systems with a sufficiently close weight"<<endl<<"value to the entered one."<<endl<<"Here is the parachute system with the most acceptably close value of that parameter:"<<endl;
                    break;
                case 3:
                    cout<<"You have typed a value of weight which is inadequately far from the values of this parameter of parachute"<<endl<<"systems, which is available in the database of the Interactive Guide to Parachute Systems."<<endl<<"Here is the parachute system with the most adequately close value of that parameter:"<<endl;
                    break;
                }
                Sleep(200);
                cout<<p[(l[0].Num)]->get_title()<<endl;
                cout<<"Weight: "<<p[(l[0].Num)]->get_weight()<<" kg"<<endl;
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
                cin.get(x);
            }
            delete[] l;
            break;
        }
        Sleep(5000);
    }
    del(p);
};
