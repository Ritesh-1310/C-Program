#include <stdio.h>

void main()
{
    struct date
    {
        int d, m, y;
    }day;
    
    day.d=19;
    day.m=02;
    day.y=2021;
    printf("%d/%d/%d", day.d, day.m, day.y);
}