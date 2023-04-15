#include<stdio.h>
#include<string.h>

int main()
{
    char st1[45] = "Aniket";
    char *st2 = "Ani";
    int val = strcmp(st1, st2);
    printf("Now the val is %d", val);
    return 0;
}
