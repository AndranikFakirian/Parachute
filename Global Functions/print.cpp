


void print(int i, parachute** l)
{
    cout<<boolalpha;
    cout<<"Area "<<l[i].area<<endl;
    cout<<"Weight "<<l[i].weight<<endl;
    cout<<"Decent speed "<<l[i].des_speed<<endl;
    cout<<"Min height "<<l[i].min_height<<endl;
    cout<<"Is main "<<l[i].is_main<<endl;
    if (i<9)
        cout<<"Forced only "<<l[i].forced_only<<endl;
    if ((i==3)||(i==4)||(i==6)||(i==8))
    {
        cout<<"Round time "<<l[i].round_time<<endl;
        cout<<"Speed "<<l[i].speed<<endl;
    }
    if (i==0)
        cout<<"Has extra safety device "<<l[i].has_extra_safety<<endl;
    if (i==11)
    {
        cout<<"Has safety device true"<<endl;
        cout<<"Has spring platform true"<<endl;
    }

}
