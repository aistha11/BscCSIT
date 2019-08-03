//WAP that Implements the leftmost derivation using CFG

#include <stdio.h>
#include <string.h>
/*
SAMPLE GRAMMER
E-> E+E | E*E | (E) | I
I-> Ia | Ib | I0 | I1 | a | b
*/
int accepted=0,i,c;
int IsAllTerminal(char cy[])
{

    for(i=0;cy[i]!='\0';i++)
    {
        if(cy[i]=='E' || cy[i]=='I')
        {
            //printf("\nThere is not all Terminals.");
            return 0;
        }
    }
    printf("\nThere is all Terminals.");
    return 1;

}
int TotalTerminals(char cy[])
{
    c=0;
    for(i=0;i<strlen(cy);i++)
    {
        if(cy[i]!='E' || cy[i]!='I')
            c++;

    }
    printf("\nThe Total Terminals are: %d . ",c);
    return c;
}

void rightmostProduction1(char ty[], char cy[])
{
    printf("1 ");
    int i=0;  //i for ty
    int j=0;  //j for cy
    strrev(cy);
    printf("The reversed cy is %s",cy);
    for(  ;cy[j]!='\0';)
    {
        if(cy[j]!='E')
            ty[i++]=cy[j++];
        else
        {
            ty[i++]='E';
            ty[i++]='+';
            ty[i++]='E';
            j++; break;
        }
    }
    for(   ;cy[j]!='\0';   )
        ty[i++]=cy[j++];

    ty[i]='\0';
    strrev(ty);
    printf("The reversed ty is %s",ty);
}
void rightmostProduction2(char ty[], char cy[])
{
    printf("2 ");
    int i=0;  //i for ty
    int j=0;  //j for cy

    strrev(cy);
    printf("The reversed cy is %s",cy);
    for(  ;cy[j]!='\0';)
    {
        if(cy[j]!='E')
            ty[i++]=cy[j++];
        else
        {
            ty[i++]='E';
            ty[i++]='*';
            ty[i++]='E';
            j++; break;
        }
    }
    for(   ;cy[j]!='\0';   )
        ty[i++]=cy[j++];

    ty[i]='\0';
    strrev(ty);
    printf("The reversed ty is %s",ty);
}
void rightmostProduction3(char ty[], char cy[])
{
    printf("3 ");
    int i=0;  //i for ty
    int j=0;  //j for cy

    strrev(cy);
    printf("The reversed cy is %s",cy);
    for(  ;cy[j]!='\0';)
    {
        if(cy[j]!='E')
            ty[i++]=cy[j++];
        else
        {
            ty[i++]='(';
            ty[i++]='E';
            ty[i++]=')';
            j++; break;
        }
    }
    for(   ;cy[j]!='\0';   )
        ty[i++]=cy[j++];

    ty[i]='\0';
    strrev(ty);
    printf("The reversed ty is %s",ty);
}
void rightmostProduction4(char ty[], char cy[])
{
    printf("4 ");
    int i=0;  //i for ty
    int j=0;  //j for cy

    strrev(cy);
    printf("The reversed cy is %s",cy);
    for(  ;cy[j]!='\0';)
    {
        if(cy[j]!='E')
            ty[i++]=cy[j++];
        else
        {
            ty[i++]='I';
            j++; break;
        }
    }
    for(   ;cy[j]!='\0';   )
        ty[i++]=cy[j++];

    ty[i]='\0';
    strrev(ty);
    printf("The reversed ty is %s",ty);
}
void rightmostProduction5(char ty[], char cy[])
{
    printf("5 ");
    int i=0;  //i for ty
    int j=0;  //j for cy

    strrev(cy);
    printf("The reversed cy is %s",cy);
    for(  ;cy[j]!='\0';)
    {
        if(cy[j]!='I')
            ty[i++]=cy[j++];
        else
        {
            ty[i++]='I';
            ty[i++]='a';
            j++; break;
        }
    }
    for(   ;cy[j]!='\0';   )
        ty[i++]=cy[j++];

    ty[i]='\0';
    strrev(ty);
    printf("The reversed ty is %s",ty);
}
void rightmostProduction6(char ty[],char cy[])
{
    printf("6 ");
    int i=0;  //i for ty
    int j=0;  //j for cy

    strrev(cy);
    printf("The reversed cy is %s",cy);
    for(  ;cy[j]!='\0';)
    {
        if(cy[j]!='I')
            ty[i++]=cy[j++];
        else
        {
            ty[i++]='I';
            ty[i++]='b';
            j++; break;
        }
    }
    for(   ;cy[j]!='\0';   )
        ty[i++]=cy[j++];

    ty[i]='\0';
    strrev(ty);
    printf("The reversed ty is %s",ty);
}
void rightmostProduction7(char ty[],char cy[])
{
    printf("7 ");
    int i=0;  //i for ty
    int j=0;  //j for cy

    strrev(cy);
    printf("The reversed cy is %s",cy);
    for(  ;cy[j]!='\0';)
    {
        if(cy[j]!='I')
            ty[i++]=cy[j++];
        else
        {
            ty[i++]='I';
            ty[i++]='0';
            j++; break;
        }
    }
    for(   ;cy[j]!='\0';   )
        ty[i++]=cy[j++];

    ty[i]='\0';
    strrev(ty);
    printf("The reversed ty is %s",ty);
}
void rightmostProduction8(char ty[],char cy[])
{
    printf("8 ");
    int i=0;  //i for ty
    int j=0;  //j for cy

    strrev(cy);
    printf("The reversed cy is %s",cy);
    for(  ;cy[j]!='\0';)
    {
        if(cy[j]!='I')
            ty[i++]=cy[j++];
        else
        {
            ty[i++]='I';
            ty[i++]='1';
            j++; break;
        }
    }
    for(   ;cy[j]!='\0';   )
        ty[i++]=cy[j++];

    ty[i]='\0';
    strrev(ty);
    printf("The reversed ty is %s",ty);
}
void rightmostProduction9(char ty[],char cy[])
{
    printf("9 ");
    int i=0;  //i for ty
    int j=0;  //j for cy

    strrev(cy);
    printf("The reversed cy is %s",cy);
    for(  ;cy[j]!='\0';)
    {
        if(cy[j]!='I')
            ty[i++]=cy[j++];
        else
        {
            ty[i++]='a';
            j++; break;
        }
    }
    for(   ;cy[j]!='\0';   )
        ty[i++]=cy[j++];

    ty[i]='\0';
    strrev(ty);
    printf("The reversed ty is %s",ty);
}
void rightmostProduction10(char ty[],char cy[])
{
    printf("10 ");
    int i=0;  //i for ty
    int j=0;  //j for cy

    strrev(cy);
    printf("The reversed cy is %s",cy);
    for(  ;cy[j]!='\0';)
    {
        if(cy[j]!='I')
            ty[i++]=cy[j++];
        else
        {
            ty[i++]='b';
            j++; break;
        }
    }
    for(   ;cy[j]!='\0';   )
        ty[i++]=cy[j++];

    ty[i]='\0';
    strrev(ty);
    printf("The reversed ty is %s",ty);
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
rightmostProduction10(ty,cy);
IsPalindrome(inp,ty);
rightmostProduction9(ty,cy);
IsPalindrome(inp,ty);
rightmostProduction8(ty,cy);
IsPalindrome(inp,ty);
rightmostProduction7(ty,cy);
IsPalindrome(inp,ty);
rightmostProduction6(ty,cy);
IsPalindrome(inp,ty);
rightmostProduction5(ty,cy);
IsPalindrome(inp,ty);
rightmostProduction4(ty,cy);
IsPalindrome(inp,ty);
rightmostProduction3(ty,cy);
IsPalindrome(inp,ty);
rightmostProduction2(ty,cy);
IsPalindrome(inp,ty);
rightmostProduction1(ty,cy);
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
