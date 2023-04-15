#include<stdio.h>

int main()
{
    char s[34];
    printf("Enter your name: ");
    gets(s);
    //puts(s);
    //scanf("%s", s);
    printf("Your name is %s", s);
    return 0;
}
