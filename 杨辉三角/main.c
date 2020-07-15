#include <stdio.h>
#include <stdlib.h>
#define N 30

int main()
{
    int i,j,n,a[N][N];
    scanf("%d",&n);
    a[0][0]=a[1][0]=a[1][1]=1;
    for(i=2;i<n;i++)
        a[i][0]=a[i][i]=1;
    for(i=2;i<n;i++)
    {
        for(j=1;j<i;j++)
        a[i][j]=a[i-1][j]+a[i-1][j-1];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0)
                printf("%d",a[i][j]);
            else
                printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
