#include<stdio.h>

int main()
{
    int marks[4]; // Allocate space for 4 integers

    printf("Enter marks of student 1\n");
    scanf("%d", &marks[0]);
    printf("Enter marks of student 2\n");
    scanf("%d", &marks[1]);
    printf("Enter marks of student 3\n");
    scanf("%d", &marks[2]);
    printf("Enter marks of student 4\n");
    scanf("%d", &marks[3]);

    printf("The marks are as follows %d %d %d and %d", marks[0], marks[1], marks[2], marks[3]);
    return 0;
}