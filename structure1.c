#include <stdio.h>
#include <conio.h>
#include <string.h>
struct book
{
    int bookid;
    char bookname[30];
    float price;
};
struct book input()
{
    struct book b;
    printf("Enter boook id,book name,book price");
    scanf("%d", &b.bookid);
    fflush(stdin);
    gets(b.bookname);
    // scanf("%d",&b.bookname);
    scanf("%f", &b.price);
    return (b);
}
void display(struct book b)
{
    printf("\n Book ID is %d\n Name of book is %s\n Price of book is %f", b.bookid, b.bookname, b.price);
}
void main()
{
    struct book b1;
    b1 = input();
    display(b1);
}