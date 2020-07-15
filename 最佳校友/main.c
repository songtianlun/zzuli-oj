#include <stdio.h>
#include <stdlib.h>
#define N 100

int main()
{
    int i,n,student[N]={0},max=0,maxi;
    while(scanf("%d",&n),n>=0)
    {
        student[n]=student[n]+1;
    }
    for(i=0;i<100;i++)
    {
        if(student[i]>max)
        {
            max=student[i];
            maxi=i;
        }
    }
    printf("%d",maxi);
    for(i=maxi+1;i<100;i++)
    {
        if(student[i]==max)
        printf(" %d",i);
    }
    return 0;
}
