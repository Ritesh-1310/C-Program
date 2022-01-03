/*
// # Structure is a user defined data type like int, char, float etc. 
// # Using structure allows us to combine data of different types together 
*/

#include <stdio.h>
#include <string.h>

struct book
{
    char *name, author[20], publisher[20];
    int edition;
    float price;
};

void main()
{
    struct book b1;

    // b1.name[20] = "Let Us C";
    // strcpy(b1.name, "Let Us C");
    b1.name= "Let Us C";

    // b1.author[20] = "Yashavant Kanetkar";
    strcpy(b1.author, "Yashavant Kanetkar");

    // b1.publisher[20] = "bpb";
    strcpy(b1.publisher, "publisher = bpb");

    b1.edition = 17;
    b1.price = 330.50;

    printf("%d\n%0.2f\n", b1.edition, b1.price);
    puts(b1.name);
    puts(b1.author);
    puts(b1.publisher);
}