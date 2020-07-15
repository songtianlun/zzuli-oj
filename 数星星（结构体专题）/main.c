#include <stdio.h>
#include <stdlib.h>
struct star
{
    int x;
    int y;
};

int main()
{
    int i,n,j,sum;
    struct star a[320];
    scanf("%d",&n);
    sum=n;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i].x);
        scanf("%d",&a[i].y);
    }
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
    {
        if(a[i].x==a[j].x&&a[i].y==a[j].y)
            sum-=1;
    }
    printf("%d\n",sum);
    return 0;
}
