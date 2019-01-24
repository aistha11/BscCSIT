#include<stdio.h>
//void InputRelation(int R[][3]);
void DisplayRelation(int [][3]);
void IsTransitive(int R[][3]);
int main()
{
    int R[3][3]={
        0,1,1,
        0,0,1,
        0,0,0,};

    //InputRelation(R);

    DisplayRelation(R);
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
                        return;
                    }
                }
            }
        }
    }
    printf("\nGiven relation is transitive");
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
