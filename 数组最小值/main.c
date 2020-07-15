#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,num[1000],min=99999,nmin=1000;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        if(num[i]<min)
        {
            min=num[i];
            nmin=i;
        }
    }
    printf("%d %d",min,nmin);
    return 0;
}
