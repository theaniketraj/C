// Write a Program to find out whether a student is Pass or Fail.
// It requires total 40% and at least 33% in each subject to pass.
// Assume 3 Subjects and take marks as an input from the user.

#include<stdio.h>

int main()
{
    int physics, chemistry, maths;
    float total;
    
    printf("Enter Physics Marks\n");
    scanf("%d", &physics);

    printf("Enter Chemistry Marks\n");
    scanf("%d", &chemistry);

    printf("Enter Maths Marks\n");
    scanf("%d", &maths);

    total = ( physics + chemistry + maths)/3;

    if ( (total<40) || physics<33 || chemistry<33 || maths<33  )
    {
        printf("Your total percentage is %f and you're failed", total);
    }
    else
    {
        printf("Your total percentage is %f and you're passed", total);
    }

    return 0;
} 