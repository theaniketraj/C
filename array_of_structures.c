#include<stdio.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[0].salary = 100.45;
    strcpy(facebook[0].name, "Aniket");
    
    facebook[1].code = 101;
    facebook[1].salary = 90.45;
    strcpy(facebook[1].name, "Harry");

    facebook[2].code = 102;
    facebook[2].salary = 110.45;
    strcpy(facebook[2].name, "wtf");
    printf("Done");

    return 0;
}
