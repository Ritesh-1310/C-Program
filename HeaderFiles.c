#include <stdio.h>
#include "Daingling_Pointer.c"
#define PI 3.14159265358979
#define SQUARE(r) r*r

int main()
{
    float var = PI;
    int r = 4;
    int *ptr=functionDangling();
    printf("The value of pi is %f.\n", var);
    printf("The area of the circle is %f.\n", PI * SQUARE(r));
    return 0;
}