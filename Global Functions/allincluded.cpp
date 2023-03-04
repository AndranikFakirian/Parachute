#include "../Classes/D_5.cpp"
#include "../Classes/D_6.cpp"
#include "../Classes/D_10.cpp"
#include "../Classes/D1_5U.cpp"
#include "../Classes/P1_U.cpp"
#include "../Classes/PLP_60.cpp"
#include "../Classes/PTL_72.cpp"
#include "../Classes/T_11.cpp"
#include "../Classes/UT_15.cpp"
#include "../Classes/Z_5.cpp"
#include "../Classes/Z_5_S4.cpp"
#include "../Classes/Z_6P.cpp"

parachute** create()
{
    parachute** p=new parachute*[12];
    p[0]=new D_5();
    p[1]=new D_6();
    p[2]=new D_10();
    p[3]=new D1_5U();
    p[4]=new P1_U();
    p[5]=new PLP_60();
    p[6]=new PTL_72();
    p[7]=new T_11();
    p[8]=new UT_15();
    p[9]=new Z_5();
    p[10]=new Z_5_S4();
    p[11]=new Z_6P();
    return p;
}
void del(parachute** p)
{
    for (int i=0; i<12; i++)
    {
        delete p[i];
    }
    delete [] p;
}
