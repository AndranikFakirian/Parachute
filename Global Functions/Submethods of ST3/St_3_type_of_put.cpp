#pragma once

void type_of_put_search()
{
    parachute** p=create();
    for (;;)
    {
        system("cls");
        Sleep(200);
        switch (randomize(3))
        {
        case 1:
            cout<<"Type the number of option with interested feature of parachute systems to search for appropriate ones:"<<endl;
            break;
        case 2:
            cout<<"Enter the number of variant with characteristic of parachute systems to find those that have such a"<<endl<<"characteristic."<<endl;
            break;
        case 3:
            cout<<"With what feature are you looking for parachute systems? Dial the number of appropriate option."<<endl;
            break;
        }
        cout<<"1. Puts into effect only automatically;"<<endl;
        cout<<"2. Puts into effect only manually;"<<endl;
        cout<<"3. Puts into effect both ways;"<<endl;
        string a;
        cin>>a;
        Sleep(200);
        if (isNumber(a)!=1)
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
            Sleep(3000);
        }
        else if ((stoi(a)>0)&&(stoi(a)<4))
        {
            system("cls");
            Sleep(200);
            switch (randomize(3))
            {
            case 1:
                cout<<"Note: Only the main parachute systems can be characterized by different ways of putting into effect."<<endl;
                break;
            case 2:
                cout<<"Note: Only the main parachute systems are characterized by different ways of actuation."<<endl;
                break;
            case 3:
                cout<<"Note: Reserve parachute systems cannot be characterized by various ways of putting into effect."<<endl;
                break;
            }
            Sleep(1000);
            if (stoi(a)==1)
            {
                switch (randomize(3))
                {
                case 1:
                    cout<<"Here is a list of parachute systems which put into effect only automatically:"<<endl;
                    break;
                case 2:
                    cout<<"Here it is. List of parachute systems that can be put into effect only automatically:"<<endl;
                    break;
                case 3:
                    cout<<"Here, as ordered. List of parachute systems which put into effect only automatically:"<<endl;
                    break;
                }
            }
            else if (stoi(a)==2)
            {
                switch (randomize(3))
                {
                case 1:
                    cout<<"Here is a list of parachute systems which put into effect only manually:"<<endl;
                    break;
                case 2:
                    cout<<"Here it is. List of parachute systems that can be put into effect only manually:"<<endl;
                    break;
                case 3:
                    cout<<"Here, as ordered. List of parachute systems which put into effect only manually:"<<endl;
                    break;
                }
            }
            else
            {
                switch (randomize(3))
                {
                case 1:
                    cout<<"Here is a list of parachute systems which put into effect both ways:"<<endl;
                    break;
                case 2:
                    cout<<"Here it is. List of parachute systems that can be put into effect both ways:"<<endl;
                    break;
                case 3:
                    cout<<"Here, as ordered. List of parachute systems which put into effect both ways:"<<endl;
                    break;
                }
            }
            int j=0;
            for (int i=0; i<12; i++)
            {
                if ((p[i]->get_forced_only())&&(stoi(a)==1)&&(p[i]->get_is_main()))
                {
                    Sleep(200);
                    j++;
                    cout<<j<<". "<<p[i]->get_title()<<";"<<endl;
                }
                else if ((p[i]->get_manual_only())&&(stoi(a)==2)&&(p[i]->get_is_main()))
                {
                    Sleep(200);
                    j++;
                    cout<<j<<". "<<p[i]->get_title()<<";"<<endl;
                }
                else if ((!((p[i]->get_forced_only())||(p[i]->get_manual_only())))&&(stoi(a)==3)&&(p[i]->get_is_main()))
                {
                    Sleep(200);
                    j++;
                    cout<<j<<". "<<p[i]->get_title()<<";"<<endl;
                }
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
        Sleep(2000);
    }
    del(p);
}
