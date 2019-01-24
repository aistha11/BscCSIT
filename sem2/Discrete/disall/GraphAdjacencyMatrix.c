#include<stdio.h>

void InputGraph(int [][10], int );
void DisplayGraph(int [][10], int );

int main()
{
    int G[10][10];
    int size;

    printf("Enter the number of vertices in Directed Graph(1 to 10):");
    scanf("%d", &size);

    InputGraph(G, size);
    DisplayGraph(G, size);
}

void InputGraph(int G[][10], int size)
{
    int i,j;

    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("\nIs there an edge between vertices v[%d] and v[%d] (1 for YES/0 for NO)?:",i+1,j+1);
            scanf("%d", &G[i][j]);
        }
    }
}
void DisplayGraph(int G[][10], int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
            printf("%4d", G[i][j]);
        printf("\n");
    }
}
