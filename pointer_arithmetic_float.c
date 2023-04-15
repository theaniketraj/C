#include<stdio.h>

int main()
{
    float f = 34;
    float *ptr = &f;
    printf("The value of ptr is %f\n", ptr);
    ptr = ptr - 1;
    //ptr = ptr + 1;
    ptr++;
    //ptr++;
    printf("The value of ptr is %f\n", ptr);
    return 0;
    
}