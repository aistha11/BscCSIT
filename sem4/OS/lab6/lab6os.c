#include <stdio.h>
#define MAX 100
int main ()
{
    int i,j,n,bt[MAX],wt[MAX],tat[MAX];
    float awt=0,atat=0;
    printf("Enter the number of process: ");
    scanf("%d",&n);
    printf("Enter the burst time of processs: \n");
    for (i=0;i<n;i++)
        scanf("%d",&bt[i]);
    for(i=0;i<n;i++)
    {
        wt[i]=0;
        tat[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
        tat[i]=wt[i]+bt[i];
        awt+=wt[i];
        atat+=tat[i];
    }
    awt=awt/n;
    atat=atat/n;
    printf("Process\tBT\tWt\tTAT\n");
    for (i=0;i<n;i++)
        printf("%d\t%d\t%d\t%d\n",i+1,bt[i],wt[i],tat[i]);
    printf("\nAverage Waiting time: %f",awt);
    printf("\nTotal Waiting time: %f",atat);
    return 0;
}
