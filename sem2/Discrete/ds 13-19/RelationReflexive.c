#include<stdio.h>
//void InputRelation(int R[][3]);
void DisplayRelation(int [][3]);
void IsReflexive(int R[][3]);

int main()
{
    int R[3][3]={
        1,1,1,
        1,1,1,
        1,0,1};

    //InputRelation(R);

    DisplayRelation(R);

    IsReflexive(R);
    return 0;
}


void IsReflexive(int R[][3])
{
    int i,j;
    for(i=0;i<3;i++)
        if(R[i][i]==0)
        {
            printf("\nGiven relation is not reflexive");
            return;
        }
    printf("\nGiven relation is reflexive");
}
/*
void InputRelation(int R[][3])
{
    int i,j;
    printf("Enter the elements (3*3) of a relation R[0 or 1]:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter R%d%d: ",i,j);
            scanf("%d", &R[i][j]);
        }
    }
}*/
void DisplayRelation(int R[][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%4d", R[i][j]);
        printf("\n");
    }
}
