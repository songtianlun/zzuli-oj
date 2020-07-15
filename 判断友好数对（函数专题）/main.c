#include <stdio.h>
#include <stdlib.h>
int facsum (int n);


int main()
{
    int n,m,i,j,a,answer=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<n;i++)
    {
       a=facsum(i);
       if(facsum(a)==i&&i<a)
       {
           printf("%d %d\n",i,a);
           answer=1;
       }

    }
           if(answer==0)
        printf("No answer");
    return 0;
}

int facsum(int n)
{
    int i,sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum=sum+i;
    }
    return sum;
}
