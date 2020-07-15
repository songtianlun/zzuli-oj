#include <stdio.h>
#include <stdlib.h>
#define N 100

int main()
{
    int a[N],b[N],n,m,i,j,answer=-1;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n;i++)
        if(a[i]==b[0])
        {
            answer=i;
        for(j=0;j<m&&i<n;j++,i++)
    {
            if(a[i]!=b[j])
            {
                answer=-1;
                break;
            }
    }
    if(n-answer<m)
        answer=-1;
        }
        if(answer!=-1)
    printf("%d\n",answer);
    else
        printf("No Answer\n");
    return 0;
}
