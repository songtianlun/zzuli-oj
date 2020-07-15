#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j,sum=0,*a;

    scanf("%d %d",&m,&n);
    a=(int*)malloc(n*sizeof(int));

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            if(i==0||i==m-1||j==0||j==n-1)
                sum+=a[j];
        }
    }


    printf("%d\n",sum);
    free(a);
    return 0;
}
