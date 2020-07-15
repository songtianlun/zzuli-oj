#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
    int i,j,k,m,p,n,a[N][N],b[N][N],c[N][N]={0};

    scanf("%d%d%d",&m,&p,&n);

    for(i=0;i<m;i++)
        for(j=0;j<p;j++)
        scanf("%d",&a[i][j]);

    for(i=0;i<p;i++)
        for(j=0;j<n;j++)
        scanf("%d",&b[i][j]);

    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
    {
        for(k=0;k<p;k++)
        c[i][j]+=a[i][k]*b[k][j];
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==0)
            printf("%d",c[i][j]);
            else
            printf(" %d",c[i][j]);
        }
    printf("\n");
    }
    return 0;
}
