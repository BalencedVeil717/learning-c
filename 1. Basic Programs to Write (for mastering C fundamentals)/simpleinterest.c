// Simple Interest Calculator: Input principal, rate, time and calculate interest.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int P, T, R, SI;
    printf("Enter principal amount : ");
    scanf("%d", &P);
    printf("Enter time (years) : ");
    scanf("%d", &T);
    printf("Enter rate of interest (per annum) : ");
    scanf("%d", &R);

    SI = (P * T * R) / 100;

    printf("Simple Interest = %d", SI);
    return 0;
}
