#include<stdio.h>

int main()
{
    char c = 34;
    char *ptr = &c;
    printf("The value of ptr is %u\n", ptr);
    ptr = ptr - 1;
    ptr = ptr + 1;
    ptr++;
    ptr++;
    printf("The value of ptr is %u\n", ptr);
    
    return 0;
}