// Write a program with three functions :-
// 1. Good Morning function which prints "Good Morning"
// 1. Good Afternoon function which prints "Good Afternoon"
// 1. Good Night function which prints "Good Night".
// main() should call all of these in order 1->2->3.

#include<stdio.h>
void goodMorning();
void goodAfternoon();
void goodNight();

int main()
{
    goodMorning();
    goodAfternoon();
    goodNight();
    return 0;
}

void goodMorning()
{
    printf("Good Morning Guys\n");
}

void goodAfternoon()
{
    printf("Good Afternoon Guys\n");
}

void goodNight()
{
    printf("Good Night Guys\n");
}
