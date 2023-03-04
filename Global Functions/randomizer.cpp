#pragma once
#include <stdlib.h>
#include <time.h>

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
