#include <stdio.h>
#include <string.h>

union about
{
    char name[20], author[20], publisher[20];
    int edition;
    float price;
};

void main()
{
    union about book;

    // book.name[20] = "Let Us C";
    strcpy(book.name, "Let Us C");

    // book.author[20] = "Yashavant Kanetkar";
    strcpy(book.author, "Yashavant Kanetkar");

    // book.publisher[20] = "bpb";
    strcpy(book.publisher, "publisher = bpb");

    book.edition = 17;
    book.price = 330.50;

    printf("%d\n%0.2f\n", book.edition, book.price);
    puts(book.name);
    puts(book.author);
    puts(book.publisher);
}