#include <stdio.h>
#include <stdlib.h>
#define M 1000
#define N 10

int main()
{
    int m,n,i,j;
    double average[N]={0},grade[M][N],sum;

    scanf("%d%d",&m,&n);

    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
        scanf("%lf",&grade[i][j]);
        average[j]+=grade[i][j];
        }
    }
    for(j=0;j<n;j++)
    {
        average[j]=average[j]/m;
        if(j==0)
        printf("%.2lf",average[j]);
        else
            printf(" %.2lf",average[j]);
    }
    return 0;
}
