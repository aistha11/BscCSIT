#include<stdio.h>
//void InputRelation(int R[][3]);
void DisplayRelation(int [][3]);
void IsReflexive(int R[][3]);
int main()
{
    int R[3][3]={
        1,1,1,
        1,1,1,
        1,0,0,};
    int i, j;

    //InputRelation(R);

    DisplayRelation(R);

    IsReflexive(R);
    IsSymmetric(R);
    IsTransitive(R);
}

void IsTransitive(int R[][3])
{
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                if(R[i][j]==1 && R[j][k]==1)
                {
                    if(R[i][k]==0)
                    {
                        printf("\nGiven relation is not transitive");
                        printf("\n%d%d%d",i,j,k);
                        return;
                    }
                }
            }
        }
    }
    printf("\nGiven relation is transitive");
}

void IsSymmetric(int R[][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(R[i][j]!=R[j][i])
            {
                printf("\nGiven relation is not symmetric");
                return;
            }
        }
    }
    printf("\nGiven relation is symmetric");
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
            scanf("%d", &R[i][j]);
        }
    }
}
*/
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
