// Write a program to decrypt the string encrypted in encrypt_string problem.

#include<stdio.h>
void decrypt( char *c)
{
    char *ptr = c;
    while ( *ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main()
{
    char c[] = "Ibqqz!Dpejoh";
    decrypt(c);
    printf("Decypted string is: %s", c);
    return 0;
}
