// Create an array of 10 numbers.
// Verify using pointer arithmetic that ( ptr + 2) points to the third element while ptr is a pointer pointing to the first element of the array.

#include<stdio.h>

int main()
{
    int arr[10];
    // int *ptr = &arr[0];
    int *ptr = arr;
    ptr = ptr + 2;
    if ( ptr == &arr[2])
    {
        printf("These point to the same location in memory\n");
    }
    else
    {
        printf("These do not point to the same location in memory\n");
    }
    return 0;
}
