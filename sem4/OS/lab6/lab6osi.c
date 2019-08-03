#include <stdio.h>
#define MAX 100
int main ()
{
    int i,j,n,bt[MAX],wt[MAX],tat[MAX],at[MAX],temp[MAX];
    float awt=0,atat=0;
    printf("Enter the number of process: ");
    scanf("%d",&n);
    printf("Enter the burst time of process: \n");
    for (i=0;i<n;i++)
        scanf("%d",&bt[i]);
    printf("Enter the average time of process: \n");
    for (i=0;i<n;i++)
        scanf("%d",&at[i]);
    temp[i]=0;
    for(i=0;i<n;i++)
    {
        wt[i]=0;
        temp[i+1]=temp[i]+bt[i];
        tat[i]=0;
        wt[i]=temp[i]-at[i];
        tat[i]=wt[i]+bt[i];
        awt+=wt[i];
        atat+=tat[i];
    }
    awt/=n;
    atat/=n;
    printf("Process\tBT\tAT\tWt\tTAT\n");
    for (i=0;i<n;i++)
        printf("%d\t%d\t%d\t%d\t%d\n",i+1,bt[i],at[i],wt[i],tat[i]);
    printf("\nAverage Waiting time: %f",awt);
    printf("\nTotal Waiting time: %f",atat);
    return 0;
}
