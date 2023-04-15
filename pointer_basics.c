#include<stdio.h>

int main()
{
    int i = 34;
    int *j = &i; // j will now store the address of i
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n", &i);
    printf("The value of i is %d\n", j);
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n", *(&j));
    return 0;
}
