#include <stdio.h>
#include <conio.h>
#include <string.h>
//#include <stdlib.h>
#include <ctype.h>
void transition1 (int cs,int ci);
void transition2 (int cs,int ci);
int a1=0,a2=0;
char keyword[10];
char identifier[50];
int main ()
{
  //int i=0;
  printf("Enter the tokenizer: (keywords identifier)  ");
  scanf("%s %s",keyword,identifier);
  //gets(keyword);gets(identifier);
  transition1(0,0);
  transition2(0,0);
  if(a1==1 && a2==1)
        printf("The Tokenizer is Valid\n");
  else
        printf("The Tokenizer is InValid\n");
  return 0;
}
void transition1 (int cs,int ci)
{
    //printf("%c",keyword[ci]);
  if(cs==4 || cs==6 || cs==8 || cs==13  || cs==17)
    if (keyword[ci]=='\0')
        a1=1;
  char ca=keyword[ci];
  ci++;
  if(cs==0 && ca=='e') transition1(1,ci);
  if(cs==1 && ca=='l') transition1(2,ci);
  if(cs==2 && ca=='s') transition1(3,ci);
  if(cs==3 && ca=='e') transition1(4,ci);
  if(cs==0 && ca=='i') transition1(5,ci);
  if(cs==5 && ca=='f') transition1(6,ci);
  if(cs==6 && ca=='n') transition1(7,ci);
  if(cs==7 && ca=='t') transition1(8,ci);
  if(cs==0 && ca=='f') transition1(9,ci);
  if(cs==9 && ca=='l') transition1(10,ci);
  if(cs==10 && ca=='o') transition1(11,ci);
  if(cs==11 && ca=='a') transition1(12,ci);
  if(cs==12 && ca=='t') transition1(13,ci);
  if(cs==0 && ca=='v') transition1(14,ci);
  if(cs==14 && ca=='o') transition1(15,ci);
  if(cs==15 && ca=='i') transition1(16,ci);
  if(cs==16 && ca=='d') transition1(17,ci);
}
void transition2 (int cs,int ci)
{
    //printf("%c",identifier[ci]);
    if(cs==1 && identifier[ci]=='\0')
        a2=1;
    char cb=identifier[ci];
    ci++;
    if(cs==0 && (cb=='_' || isalpha(cb))) transition2(1,ci);
    if(cs==1 && (cb=='_' || isalnum(cb))) transition2(1,ci);
}
