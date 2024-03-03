#include "TKTL_Math.h"


int IsPrime(int Number)
{
    if (Number <= 1)
        return 0;

    if (Number == 2 || Number == 3)
        return 1;

    if (Number % 2 == 0)
        return 0;

    for (int i = 3; i * i <= Number; i+=2)
        if (Number % i == 0)
            return 0;


    return 1;
}
