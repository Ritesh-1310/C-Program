#include <stdio.h>
#include <string.h>
int main()
{
    int A[]={5, 6, 8, 4};
    int B[5];
    printf("%d\n", sizeof(A));
    printf("%lu\n", sizeof(B));
    printf("%d bytes\n", sizeof(int));

    char C[10]="RAM";
    printf("\n%d\n", sizeof(C));              
    printf("%d bytes\n", sizeof(char));      
    printf("%d", strlen(C));
    return 0;
}