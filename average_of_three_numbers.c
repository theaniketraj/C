#include<stdio.h>
float average ( int a, int b, int c );
int main()
{
    int a, b, c;
    
    printf("Enter the value of a\n");
    scanf("%d", &a);
    
    printf("Enter the value of b\n");
    scanf("%d", &b);
    
    printf("Enter the value of c\n");
    scanf("%d", &c);
    
    return 0;
}

float average ( int a, int b, int c)
{
    float result;
    result = ( a + b + c )/3;
    printf("The average of the numbers is %f", result);
    return result;
}
