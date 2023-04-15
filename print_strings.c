#include<stdio.h>

int main()
{
    // char str[] = "Aniket";
    char str[] = {'A', 'N', 'I', 'K', 'E', 'T', '\0'};
    char *ptr = str;
    while ( *ptr != '\0' )
    {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}