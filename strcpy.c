#include<stdio.h>
#include<string.h>

int main()
{
    char *st = "Aniket";
    char st2[45] = "Raj";
    strcpy(st2, st);
    printf("Now the st2 is %s", st2);
    return 0;
}
