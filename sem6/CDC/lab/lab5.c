//Lab no 5: C- program to implement first of a given grammar

/*

A = B + a
B = ab
V = a

*/
#include <stdio.h>
#include <ctype.h>
void FIRST(char[], char);
void addToResultSet(char[], char);
int numOfProductions;
char productionSet[10][10];
int main()
{
    int i;
    char choice;
    char c;
    char result[20];
    printf("How many number of productions ? :");
    scanf(" %d", &numOfProductions);
    for (i = 0; i < numOfProductions; i++) //read production string e.g.: E=E+T
    {
        printf("Enter productions Number %d : ", i + 1);
        scanf(" %s", productionSet[i]);
    }
    do
    {
        printf("\n Find the FIRST of :");
        scanf(" %c", &c);
        FIRST(result, c); //Compute FIRST; Get Answer in 'result' array
        printf("\n FIRST(%c)= { ", c);
        for (i = 0; result[i] != '\0'; i++)
            printf(" %c ", result[i]); //Display result
        printf("}\n");
        printf("press 'y' to continue : ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
}
void FIRST(char *Result, char c)
{
    int i, j, k;
    char subResult[20];
    int foundEpsilon;
    subResult[0] = '\0';
    Result[0] = '\0';
    //If X is terminal, FIRST(X) = {X}
    if (!(isupper(c)))
    {
        addToResultSet(Result, c);
        return;
    }
    //If X is non terminal then read each production
    for (i = 0; i < numOfProductions; i++)
    {
        //Find production with X as LHS
        if (productionSet[i][0] == c)
        {
            if (productionSet[i][2] == '$')
                addToResultSet(Result, '$');
            //If X is a non-terminal, and X → Y1 Y2 … Yk is a production, then add a to FIRST(X)
            else
            {
                j = 2;
                while (productionSet[i][j] != '\0')
                {
                    foundEpsilon = 0;
                    FIRST(subResult, productionSet[i][j]);
                    for (k = 0; subResult[k] != '\0'; k++)
                        addToResultSet(Result, subResult[k]);
                    for (k = 0; subResult[k] != '\0'; k++)
                    {
                        if (subResult[k] == '$')
                        {
                            foundEpsilon = 1;
                            break;
                        }
                    }
                    //No e found, no need to check next element
                    if (!foundEpsilon)
                        break;
                    j++;
                }
            }
        }
    }
    return;
}
void addToResultSet(char Result[], char val)
{
    int k;
    for (k = 0; Result[k] != '\0'; k++)
        if (Result[k] == val)
            return;
    Result[k] = val;
    Result[k + 1] = '\0';
}

/*
Output:
How many numbers of productions? : 5
Enter productions Number 1: S=L=R
Enter productions Number 2: S=R
Enter productions Number 3: L=*R
Enter productions Number 4: L=a
Enter productions Number 5: R=L
Find the FIRST of: S
FIRST(S) = { * a }
Press 'y' to continue: y
Find the FIRST of: L
FIRST(L)= { * a }
Press 'y' to continue:
Find the FIRST of: a
FIRST(a)= { a }
Press 'y' to continue: y
Find the FIRST of: *R
FIRST(*R)= { * }
Press 'y' to continue:
*/
