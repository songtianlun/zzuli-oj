#include <stdio.h>
#include <stdlib.h>
#define N 11
int main()
{
    int a[N][N],answer=1;
    int i,n,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
        for(i=1;i<n;i++)
        for(j=0;j<i;j++)
    {
        if(a[i][j]!=0)
            answer=0;
    }
    if(answer==1)
        printf("YES");
    else
        printf("NO");
    return 0;
}
