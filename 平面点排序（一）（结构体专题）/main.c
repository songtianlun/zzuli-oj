#include <stdio.h>
#include <stdlib.h>
struct point
{
    int x;
    int y;
};

int main()
{
    int i,j,n;
    struct point a[120],m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i].x);
        scanf("%d",&a[i].y);
    }
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
    {
        if(a[i].x>a[j].x)
        {
            m=a[i];
            a[i]=a[j];
            a[j]=m;
        }
        else if(a[i].x==a[j].x)
            if(a[i].y>a[j].y)
        {
            m=a[i];
            a[i]=a[j];
            a[j]=m;
        }

    }
    for(i=0;i<n;i++)
    {
    printf("(%d,%d) ",a[i].x,a[i].y);
    }
    printf("\n");
    for(i=n-1;i>=0;i--)
    {
    printf("(%d,%d) ",a[i].x,a[i].y);
    }
    return 0;
}
