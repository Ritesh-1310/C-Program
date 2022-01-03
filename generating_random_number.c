#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int a[10], i, j, temp, min, max;
    min = 0;
    max = min + 9;

    srand(time(0));
    for ( i = 0; i <= 9; i++){

        temp = rand() % 10 ;
        for ( j = 0; j <= i-1; j++){
            if (temp == a[j])
                break;
        }
        if (i == j)
            a[i] = temp;
        else
            i--;
    }
    for ( i = 0; i <= 9; i++)
        printf("%d  ", a[i]);
        
    printf("\n");
    return 0;
}