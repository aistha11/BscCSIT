//WAP that demonstrate the leftmost derivation for the grammar that accepts the language of palindrome

#include <stdio.h>
#include <string.h>
/*
SAMPLE GRAMMER
1. P->epsilon
2. P->0
3. P->1
4. P->0P0
5. P->1P1

*/
int accepted=0,i,c;
int IsAllTerminal(char cy[])
{

    for(i=0;cy[i]!='\0';i++)
        if(cy[i]=='P')
            return 0;

    return 1;


}
int TotalTerminals(char cy[])
{
    c=0;
    for(i=0;cy[i]!='\0';i++)
        if(cy[i]!='P')
            c++;
    printf("The Total Terminals are: %d\n",c);
    return c;
}
void leftmostProduction1(char ty[], char cy[])
{
    printf("1 ");
    int i=0;  //i for ty
    int j=0;  //j for cy

    for(  ;cy[j]!='\0';)
    {
        if(cy[j]!='P')
            ty[i++]=cy[j++];
        else
        {
            j++; break;
        }
    }
    for(   ;cy[j]!='\0';   )
        ty[i++]=cy[j++];

    ty[i]='\0';
}
void leftmostProduction2(char ty[], char cy[])
{
    printf("2 ");
    int i=0;  //i for ty
    int j=0;  //j for cy

    for(  ;cy[j]!='\0';)
    {
        if(cy[j]!='P')
            ty[i++]=cy[j++];
        else
        {
            ty[i++]='0';
            j++; break;
        }
    }
    for(   ;cy[j]!='\0';   )
        ty[i++]=cy[j++];

    ty[i]='\0';
}
void leftmostProduction3(char ty[], char cy[])
{
    printf("3 ");
    int i=0;  //i for ty
    int j=0;  //j for cy

    for(  ;cy[j]!='\0';)
    {
        if(cy[j]!='P')
            ty[i++]=cy[j++];
        else
        {
            ty[i++]='1';
            j++; break;
        }
    }
    for(   ;cy[j]!='\0';   )
        ty[i++]=cy[j++];

    ty[i]='\0';
}
void leftmostProduction4(char ty[], char cy[])
{
    printf("4 ");
    int i=0;  //i for ty
    int j=0;  //j for cy

    for(  ;cy[j]!='\0';)
    {
        if(cy[j]!='P')
            ty[i++]=cy[j++];
        else
        {
            ty[i++]='0';
            ty[i++]='P';
            ty[i++]='0';
            j++; break;
        }
    }
    for(   ;cy[j]!='\0';   )
        ty[i++]=cy[j++];

    ty[i]='\0';
}
void leftmostProduction5(char ty[], char cy[])
{
    printf("5 ");
    int i=0;  //i for ty
    int j=0;  //j for cy

    for(  ;cy[j]!='\0';)
    {
        if(cy[j]!='P')
            ty[i++]=cy[j++];
        else
        {
            ty[i++]='1';
            ty[i++]='P';
            ty[i++]='1';
            j++; break;
        }
    }
    for(   ;cy[j]!='\0';   )
        ty[i++]=cy[j++];

    ty[i]='\0';
}
void IsPalindrome (char inp[], char cy[])//cy=currentyield
{
   char ty[100];//tempyield

   if(IsAllTerminal(cy))
   {
       if(strcmp(inp,cy)==0)
       {
           accepted=1;
           return;
       }
       else
            return;
   }
if(strlen(inp)<TotalTerminals(cy))
    return;
leftmostProduction1(ty,cy);
IsPalindrome(inp,ty);
leftmostProduction2(ty,cy);
IsPalindrome(inp,ty);
leftmostProduction3(ty,cy);
IsPalindrome(inp,ty);
leftmostProduction4(ty,cy);
IsPalindrome(inp,ty);
leftmostProduction5(ty,cy);
IsPalindrome(inp,ty);


}
int main ()
{
   char input[50];
   printf("Enter the string:\n");
    scanf("%s",input);
   char currentyield[100];
   printf("Enter the production:\n");
    scanf("%s",currentyield);
   IsPalindrome (input,currentyield);
   if (accepted==1)
        printf("Input %s is palindrome.\n",input);
   else
        printf("Input %s is not palindrome.\n",input);
}
