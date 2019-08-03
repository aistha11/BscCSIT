//simulation of deadlock and detection algorothm (Bankers Algorithm)
//theory; 1) Claim Mattix (Need Matrix):   P1 0 1 0 0 1
                                        // P2 0 0 1 0 1
                                        // P3 0 0 0 0 1
                                        // P4 1 0 1 0 1
//2) Allocation Matrix:                    P1 1 0 1 1 0
                                        // P2 1 1 0 0 0
                                        // P3 0 0 0 1 0
                                        // P4 0 0 0 0 0
//3) Resource Vector: 2 1 1 2 1
//4) Availability Vector: 0 0 0 0 4


#include <stdio.h>
#include <conio.h>

int main ()
{
    int i,j,l,k=1,temp[6],tp=4,tr=5,m[10],sum=0,flag,found;
    int c[5][6]={{'\0','\0','\0','\0','\0','\0'},{'\0',0,1,0,0,1},{'\0',0,0,1,0,1},{'\0',0,0,0,0,1},{'\0',1,0,1,0,1}};
    int P[5][6]={{'\0','\0','\0','\0','\0','\0'},{'\0',1,0,1,1,0},{'\0',1,1,0,0,0},{'\0',0,0,0,1,0},{'\0',0,0,0,0,0}};
    int a[6]={'\0',0,0,0,0,1};

    //printf("Enter value for claim matrix:\n");
    for(i=1;i<=tp;i++)
    {
        for(j=1;j<=tr;j++)
        {
            printf(" C%d%d: ",i,j);
            //scanf("%d",&c[i][j]);
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
    //printf("Enter value for allocation matrix:\n");
    for(i=1;i<=tp;i++)
    {
        for(j=1;j<=tr;j++)
        {
            printf("P%d%d: ",i,j);
            //scanf("%d",&P[i][j]);
            printf("%d ",P[i][j]);
        }
        printf("\n");
    }
    //printf("Enter the availability vector:\n");
    for(i=1;i<=tr;i++)
    {
        //scanf("%d",&a[i]);
        temp[i]=a[i];
        printf("%d  ",temp[i]);
    }

    for(i=1;i<=tp;i++)
   {
        sum=0;
        for(j=1;j<=tr;j++)
            sum+=P[i][j];
        if(sum==0)
        {
            m[k]=1;
            k++;
        }
    }
    for(i=1;i<=tp;i++)
    {
        for(l=1;l<k;l++)
        {
            if(i!=m[l])
            {
                flag=1;
                for(j=1;j<tr;j++)
                {
                    if(c[i][j]<temp[j])
                    {
                        flag=0;break;
                    }
                }
                if(flag==1)
                {
                    m[k]=i;
                    k++;
                    for(j=1;j<tr;j++)
                        temp[j]+=P[i][j];
                }
            }
        }
    }
    printf("Deadlock Causing Process are: \n");
    for(j=1;j<=tp;j++)
    {
        found=0;
        for(i=1;i<k;i++)
        {
            if(j==m[i])
                found=1;
        }
        if(found==0)
            printf("%d\t",j);
        printf("\n");
    }
    return 0;
}
