#include <stdio.h>

int myfunc()
{
    static int i = 0; // To observe property of static run once after removing static and once before removing.
    i++;
    return i;
}

int main()
{
    printf("Value: %d\n", myfunc());
    printf("Value: %d\n", myfunc());
    printf("Value: %d\n", myfunc());

    return 0;
}