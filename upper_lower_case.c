// 97 - 122 = a - z ASCII Values

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the character\n");
    scanf("%d", &n);
    
    if ( n >= 122 && n <= 97 )
    {
        printf("It is lowercase");
    }
    
    else
    {
        printf("It is uppercase");
    }
    
    return 0;
} 