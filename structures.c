#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    int a = 34;
    char b = 'g';
    float d = 234.3543;
    // employee e1;
    // e1.salary = 34.454; ---> won't work without employee structure

    struct employee e1;
    e1.code = 100;
    e1.salary = 34.454;
    // e1.name = "Aniket"; ---> won't work
    strcpy ( e1.name, "Aniket");

    printf("%d\n", e1.code);
    printf("%f\n", e1.salary);
    printf("%s\n", e1.name);
    
    return 0;
}
