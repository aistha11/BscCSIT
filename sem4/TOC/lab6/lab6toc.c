//lab 6: WAP that implements a CFG to accept a language of palindrome.
#include <stdio.h>
#include <conio.h>
#include <string.h>
int accepted=0;
void palindromes (char input[],int si,int ei)
{
  if(si==ei) //for a last single alphabet ie __()__ or (_) or p=>0 1
  {
      printf("\nP => %c",input[si]);
       accepted=1;
  }
  else if ((ei-si)==1)// checks for ___()()___    1P1, 0P0
  {
      if(input[si]==input[ei]){
        printf("\nP => %cP%c",input[si],input[ei]);
        accepted=1;
      }
  }
  else if (input[si]==input[ei]) //checks the given (_)___(_) 1P1 0P0
    {
        printf("\nP => %cP%c",input[si],input[ei]);
        return (palindromes(input,si+1,ei-1));
    }
  else
    accepted=0;

}

int main()
{
    char input[50];//="0100";
    int si=0;
    //int ei=strlen(input)-1; this is incorrect because this should be run after the scan of input
    printf("\nEnter the language of palindrome: ");
    scanf("%s",&input);
    int ei=strlen(input)-1;
    palindromes(input,si,ei);
    if(accepted==0)
        printf("\nThe string is rejected\n");
    else
        printf("\nThe string is accepted\n");
    return 0;
}
