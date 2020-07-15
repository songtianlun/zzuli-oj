#include <stdio.h>
#include <stdlib.h>
int flower(int i);

int main()
{
    int n,m,i,answer=0,j=0,y=0;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        answer=0;
        j=0;
        y=0;
    for(i=n;i<=m;i++)
    {
        answer=flower(i);
        if(answer==1)
        {
            if(j==1)
            {
                printf(" %d",i);
                y=1;
            }
            else
            {
                j=1;
                printf("%d",i);
                y=1;
            }
        }
    }
    if(y==1)
        printf("\n");
    else
    {
        printf("no\n");
    }
    }
    return 0;
}

int flower(int i)
{
    if((i/100)*(i/100)*(i/100)+(i%100/10)*(i%100/10)*(i%100/10)+(i%10)*(i%10)*(i%10)==i)
        return 1;
    else
        return 0;
}
