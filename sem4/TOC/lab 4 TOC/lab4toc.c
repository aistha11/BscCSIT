#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int accepted=0;
char email[40];
void transition (int cs, int ci);
int main ()
{
    int q=0,i=0;
    printf("Enter your email: ");
    gets(email); //scanf("%s",&email);
    transition(q,i);
    if(accepted==1)
     printf("\nYour email is valid");
    else
     printf("\nYour email is not valid");
    return 0;
}
void transition (int cs, int ci)
{
    //printf("%c ",email[ci]);
    //printf("%d ",cs);
    if(cs==24 || cs==23)
        if(email[ci]=='\0')
            accepted=1;

    char ca=email[ci];
    ci++;
    if(cs==0 && isalpha(ca)) transition(1,ci);
    if(cs==1 && isalnum(ca)) transition(1,ci);
    if(cs==1 && ca=='@') transition(2,ci);
    if(cs==2 && ca=='g') transition(3,ci);
    if(cs==3 && ca=='m') transition(4,ci);
    if(cs==4 && ca=='a') transition(5,ci);
    if(cs==5 && ca=='i') transition(6,ci);
    if(cs==6 && ca=='l') transition(7,ci);
    if(cs==7 && ca=='.') transition(8,ci);
    if(cs==8 && ca=='c') transition(9,ci);
    if(cs==9 && ca=='o') transition(10,ci);
    if(cs==10 && ca=='m') transition(24,ci);
    if(cs==2 && ca=='c') transition(11,ci);
    if(cs==11 && ca=='d') transition(12,ci);
    if(cs==12 && ca=='c') transition(13,ci);
    if(cs==13 && ca=='s') transition(14,ci);
    if(cs==14 && ca=='i') transition(15,ci);
    if(cs==15 && ca=='t') transition(16,ci);
    if(cs==16 && ca=='.') transition(17,ci);
    if(cs==17 && ca=='e') transition(18,ci);
    if(cs==18 && ca=='d') transition(19,ci);
    if(cs==19 && ca=='u') transition(20,ci);
    if(cs==20 && ca=='.') transition(21,ci);
    if(cs==21 && ca=='n') transition(22,ci);
    if(cs==22 && ca=='p') transition(23,ci);

}
