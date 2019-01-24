#include<stdio.h>
#include<conio.h>
#include<string.h>
struct book
{
    int id;
    float price;
    char name[20];
};
void main()
{
    struct book b;
    clrscr ();
    printf("\n Enter book Id: ");
    scanf("%d",&b.id);
    printf("\n Enter book Name: ");
    scanf("%s",&b.name);
    printf("\n Enter book Price: ");
    scanf("%f",&b.price);
    printf("\n Id: %d\tName: %s\tPrice: %f",b.id,b.name,b.price);
    getch();
}