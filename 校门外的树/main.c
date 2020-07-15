#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i,j,L,n,x,y,count;
    int a[10001];
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        for(i=0;i<10001;i++)
            a[i]=1;
       scanf("%d %d",&L,&n);
       for(i=1;i<=n;i++)
       {
           scanf("%d %d",&x,&y);
           for(j=x;j<=y;j++)
            a[j]=0;
       }
       for(i=0;i<=L;i++)
        if(a[i]==1)
        count++;
       printf("%d\n",count);
    }

    return 0;
}

/* my c
#include <stdio.h>
#include <stdlib.h>

void fun()
{
    int l,j,m,i,x[110],y[110];
    scanf("%d %d",&l,&m);
    l++;
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }
    for(i=0;i<m;i++)
        for(j=i+1;j<m;j++)
    {
        if(x[j]>x[i]&&x[j]<y[i])
        {
            x[j]=y[i]+1;
        }
        if(x[j]<x[i]&&y[j]>x[i])
            y[j]=x[i]-1;
    }
    for(i=0;i<m;i++)
    {
        l=l-(y[i]-x[i]+1);
    }
    printf("%d\n",l);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        fun();
    }
    return 0;
}
*/
