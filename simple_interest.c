#include<stdio.h>

// Enter a new principal, rate and year for a different data.

int main()
{
    int principal = 100, rate = 4, years = 1;
    int simpleInterest = ( principal*rate*years )/100;
    printf("The value of simple Interest is %d", simpleInterest);
    return 0;
} 