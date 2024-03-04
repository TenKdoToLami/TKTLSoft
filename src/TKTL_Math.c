#include "TKTL_Math.h"


int IsPrime(int number)
{
    if (number <= 1)
        return 0;

    if (number == 2 || number == 3)
        return 1;

    if (number % 2 == 0)
        return 0;

    for (int i = 3; i * i <= number; i+=2)
        if (number % i == 0)
            return 0;

    return 1;
}
