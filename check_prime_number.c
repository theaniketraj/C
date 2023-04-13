// Prime Numbers = A prime number is a natural number greater than 1 that is not a product of two smaller natural numbers.
// Disclaimer : This is not the best method to solve the problem.

#include<stdio.h>

int main()

{
    int n = 45, i;
    for ( i = 2; i < 45; i++)
    {
        if ( n %i == 0)
        {
            printf("This is not a prime number");
            break;
        }
    }
  
    return 0;
} 