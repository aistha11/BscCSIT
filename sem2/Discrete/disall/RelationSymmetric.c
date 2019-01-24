#include<stdio.h>
//void InputRelation(int R[][3]);
void DisplayRelation(int [][3]);
void IsSymmetric(int [][3]);

int main()
{
    int R[3][3]={
        1,0,1,
        0,1,1,
        1,1,0,};
    //InputRelation(R);

    DisplayRelation(R);
    IsSymmetric(R);
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
