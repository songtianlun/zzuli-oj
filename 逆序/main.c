#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,num[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=n-1;i>=0;i--)
        printf("%4d",num[i]);
    return 0;
}

