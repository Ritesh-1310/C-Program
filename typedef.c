// typedef is used to give alias name; it is mostly used in case of long names, when we have to use too many times that long name. 
// so with help of typedef we give a short name to that long name after that we use that short name whenever we want.

// typedef <previous_name> <alias_name>

#include <stdio.h>

typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} std;

int main()
{
    // int *a, b;
 // typedef <previous_name> <alias_name>;
    typedef int* intPtr;
    intPtr a, b;
    int c = 89, d = 100;
    a = &c;
    b = &d;

    printf("Address of a is %d and value is %d\n", a, *a);
    printf("Address of b is %d and value is %d\n", b, *b);

    std s1, s2;
    s1.id = 56;
    s2.id = 66;
    printf("\nValue of s1's Id is %d\n", s1.id);
    printf("Value of s2's Id is %d\n", s2.id);

    // typedef <previous_name> <alias_name>;
    // typedef unsigned long ul;
    // typedef int integer;
    // ul l1, l2, l3;
    // integer a = 4;
    // printf("Value of a is %d", a);
    return 0;
}
