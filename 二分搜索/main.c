#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num[100000+10];
    int i,m,mnum,mi;
    int low,high,mid,y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        mi=-1;
        scanf("%d",&mnum);
        low=0;
        high=n-1;

        while(low<=high)
        {
            mid=(low+high)/2;
            y=num[mid];
            if(y<mnum)
                low=mid+1;
            else if(y>mnum)
                high=mid-1;
            else
            {
                mi=mid;

                break;
            }
        }
    if(mi>=0)
        printf("%d\n",mi);
    else
        printf("Not found!\n");
    }

    return 0;
}
