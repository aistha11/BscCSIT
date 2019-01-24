#include<stdio.h>
#include<conio.h>

struct dist
{
    int feet;
    int inch;
};
struct dist sum(struct dist,struct dist);
struct dist diff(struct dist,struct dist);
void main()
{

    struct dist d1;
    struct dist d2;
    struct dist s,d;
    clrscr ();
    printf ("Enter the distance d1:\n");
    scanf ("%d%d",&d1.feet,&d1.inch);
    printf ("Enter the distance d2:\n");
    scanf ("%d%d",&d2.feet,&d2.inch);
    s=sum(d1,d2);
    d=diff(d1,d2);
    printf("\n Sum is %d feet %d inch",s.feet,s.inch);
    printf("\n Difference is %d feet %d inch",d.feet,d.inch);
    getch();

}
struct dist sum(struct dist d1,struct dist d2)
{
    struct dist d3;
    d3.inch=d1.inch+d2.inch;
    if(d3.inch>=12)
    {
        d3.feet=d1.feet+d2.feet+1;
        d3.inch=d3.inch-12;
    }
    else
        d3.feet=d1.feet+d2.feet;
    return(d3);

}
struct dist diff(struct dist d1,struct dist d2)
{
    struct dist d3;
    d3.inch=d1.inch-d2.inch;
    d3.feet=d1.feet-d2.feet;

    return(d3);

}