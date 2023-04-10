#include<stdio.h>

// You gotta change radius and height of new circle and cylinder respectively for a new area.
int main()
{
    int radius = 3;
    float pi = 3.14;
    printf("The area of this circle is %f\n", pi*radius*radius);
    int height = 3;
    printf("Volume of this cylinder is %f\n", pi*radius*radius*height);
    return 0;
} 