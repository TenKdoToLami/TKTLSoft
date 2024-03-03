#include <stdio.h>
#include "TKTL_Math.h"

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1




int TestPrimes(int LowerBound, int UpperBound,const int *PrimeArray)
{

    const int Cases = UpperBound - LowerBound + 1;
    int Success = 0;
    int *Pointer = PrimeArray;

    printf("\nTesting IsPrime(n) for numbers between %d and %d\n", LowerBound, UpperBound);
    for (int i = LowerBound; i <= UpperBound; i++)
    {
        if (i == *Pointer)
        {
            if (IsPrime(i) == 1)
                Success++;
            else
                printf("Failed %d\n",*Pointer);
            Pointer++;
        }
        else
            if (IsPrime(i) == 0)
                Success++;
            else
                printf("Failed %d\n",i);
    }

    printf("%d out of %d tests passed (%f%%)\n", Success, Cases, 1.0*Success * 100 / Cases);
    return Success == Cases;
}



int main(int argc, char *argv[]) 
{


    /*
     *----------------------------------------------------------------
     */
{
    int TotalSuccesses = 0;
    const Primes1 [] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29,31, 37, 41, 43, 47, 53, 59, 61, 67, 71,73, 79, 83, 89, 97, 101};
    
    TotalSuccesses += TestPrimes(1,100,Primes1);

    const Primes2 [] =  {   101, 103, 107, 109, 113, 127, 131, 137, 139, 149,
                            151, 157, 163, 167, 173, 179, 181, 191, 193, 197,
                            199, 211, 223, 227, 229, 233, 239, 241, 251, 257,
                            263, 269, 271, 277, 281, 283, 293, 307, 311, 313,
                            317, 331, 337, 347, 349, 353, 359, 367, 373, 379,
                            383, 389, 397, 401, 409, 419, 421, 431, 433, 439,
                            443, 449, 457, 461, 463, 467, 479, 487, 491, 499,
                            503, 509, 521, 523, 541, 547, 557, 563, 569, 571,
                            577, 587, 593, 599, 601, 607, 613, 617, 619, 631,
                            641, 643, 647, 653, 659, 661, 673, 677, 683, 691,
                            701, 709, 719, 727, 733, 739, 743, 751, 757, 761,
                            769, 773, 787, 797, 809, 811, 821, 823, 827, 829,
                            839, 853, 857, 859, 863, 877, 881, 883, 887, 907,
                            911, 919, 929, 937, 941, 947, 953, 967, 971, 977,
                            983,  991, 997, 1009};
    TotalSuccesses += TestPrimes(100,1000,Primes2);

    const Primes3 [] = {    800011, 800029, 800053, 800057, 800077, 800083, 800089, 800113, 800117, 800119,
                            800123, 800131, 800143, 800159, 800161, 800171, 800209, 800213, 800221, 800231,
                            800237, 800243, 800281, 800287, 800291, 800311, 800329, 800333, 800351, 800357,
                            800399, 800407, 800417, 800419, 800441, 800447, 800473, 800477, 800483, 800497,
                            800509, 800519, 800521, 800533, 800537, 800539, 800549, 800557, 800573, 800587,
                            800593, 800599, 800621, 800623, 800647, 800651, 800659, 800663, 800669, 800677,
                            800687, 800693, 800707, 800711, 800729, 800731, 800741, 800743, 800759, 800773,
                            800783, 800801, 800861, 800873, 800879, 800897, 800903, 800909, 800923, 800953,
                            800959, 800971, 800977, 800993, 800999, 801001, 801007, 801011, 801019, 801037,
                            801061, 801077, 801079, 801103, 801107, 801127, 801137, 801179, 801187, 801197,
                            801217, 801247, 801277, 801289, 801293, 801301, 801331, 801337, 801341, 801349,
                            801371, 801379, 801403, 801407, 801419, 801421, 801461, 801469, 801487, 801503,
                            801517, 801539, 801551, 801557, 801569, 801571, 801607, 801611, 801617, 801631,
                            801641, 801677, 801683, 801701, 801707, 801709, 801733, 801761, 801791, 801809,
                            801811, 801817, 801833, 801841, 801859, 801883, 801947, 801949, 801959, 801973,
                            801989, 802007, 802019, 802027, 802031, 802037, 802073, 802103, 802121, 802127,
                            802129, 802133, 802141, 802147, 802159, 802163, 802177, 802181, 802183, 802189,
                            802231, 802253, 802279, 802283, 802297, 802331, 802339, 802357, 802387, 802421,
                            802441, 802453, 802463, 802471, 802499, 802511, 802523, 802531, 802573, 802583,
                            802589, 802597, 802603, 802609, 802643, 802649, 802651, 802661, 802667, 802709,
                            802721, 802729, 802733, 802751, 802759, 802777, 802783, 802787, 802793, 802799,
                            802811, 802829, 802831, 802873, 802909, 802913, 802933, 802951, 802969, 802979,
                            802987, 803027, 803041, 803053, 803057, 803059, 803087, 803093, 803119, 803141,
                            803171, 803189, 803207, 803227, 803237, 803251, 803269, 803273, 803287, 803311,
                            803323, 803333, 803347, 803359, 803389, 803393, 803399, 803417, 803441, 803443,
                            803447, 803449, 803461, 803479, 803483, 803497, 803501, 803513, 803519, 803549,
                            803587, 803591, 803609, 803611, 803623, 803629, 803651, 803659, 803669, 803687,
                            803717, 803729, 803731, 803741, 803749, 803813, 803819, 803849, 803857, 803867,
                            803893, 803897, 803911, 803921, 803927, 803939, 803963, 803977, 803987, 803989,
                            804007, 804017, 804031, 804043, 804059, 804073, 804077, 804091, 804107, 804113,
                            804119, 804127, 804157, 804161, 804179, 804191, 804197, 804203, 804211, 804239,
                            804259, 804281, 804283, 804313, 804317, 804329, 804337, 804341, 804367, 804371,
                            804383, 804409, 804443, 804449, 804473, 804493, 804497, 804511, 804521, 804523,
                            804541, 804553, 804571, 804577, 804581, 804589, 804607, 804611, 804613, 804619,
                            804653, 804689, 804697, 804703, 804709, 804743, 804751, 804757, 804761, 804767,
                            804803, 804823, 804829, 804833, 804847, 804857, 804877, 804889, 804893, 804901,
                            804913, 804919, 804929, 804941, 804943, 804983, 804989, 804997, 805019, 805027,
                            805031, 805033, 805037, 805061, 805067};
    TotalSuccesses += TestPrimes(800000,805067,Primes3);

    printf("\n -- %d / 3 --\n", TotalSuccesses);
}


    /*
     *----------------------------------------------------------------
     */


    return EXIT_SUCCESS;
}