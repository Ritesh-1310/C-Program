#include <stdio.h>
void swap(int *p, int *q);
int main()
{
    int a=34, b=54;
    printf("a=%x, b=%x\n", &a, &b);
    
    swap(&a, &b);

    printf("a=%d, b=%d\n", a, b);
    return 0;
}

void swap(int *p, int *q)
{
    int temp;
    printf("p=%x, q=%x\n", &p, &q);
    printf("a=%d, b=%d\n", *p, *q);
    temp=*p;
    *p=*q;
    *q=temp;

}