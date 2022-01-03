#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int *ptr;

    while (i < 45545)
    {
        printf("jay Shree Ram\n");
        ptr = malloc(34444 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
       free(ptr);      // Without this we will encounter a situation of memory leak
    }
    return 0;
}
