#pragma once
template <typename T>
struct parac_param
{
    int Num;
    T val;
};
template <typename T>
void combSort (parac_param <T>*p, int n)
{
    int n0=n;
    for (;n0>0;)
    {
        float n01=n0/1.3;
        n0=int(n01);
        for (int i=0; i<n-n0; i++)
        {
            if (p[i].val>p[i+n0].val)
            {
                parac_param <T>d=p[i];
                p[i]=p[i+n0];
                p[i+n0]=d;
            }
        }
    }
}
