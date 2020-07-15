#include <stdio.h>
#include <stdlib.h>
void swap( int *pa, int *pb);

int main()
{
    int i,j,num[10];
    for(i=0;i<4;i++)
        scanf("%d",&num[i]);
    for(i=0;i<3;i++)
        for(j=i+1;j<4;j++)
        {
            if(num[i]<num[j])
                swap(&num[i],&num[j]);
        }
        for(i=0;i<4;i++)
        {
            if(i==0)
                printf("%d",num[i]);
            else
                printf(" %d",num[i]);
        }
    return 0;
}

void swap(int *pa, int *pb)
{
int t;
t=*pa;
*pa=*pb;
*pb=t;
}
