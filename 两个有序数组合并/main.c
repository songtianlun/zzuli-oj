#include <stdio.h>
#include <stdlib.h>
#define N 100000

int main()
{
    int n1,n2,i,j,k,a[N],b[N],c[2*N];
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&n2);
    for(j=0;j<n2;j++)
    {
        scanf("%d",&b[j]);
    }
    i=n1-1,j=0,k=0;
    while(j<n2&&i>=0)
    {
        if(a[i]>b[j])
        {
        c[k]=a[i];
        i-=1;
        k++;
        }
        else if(a[i]<b[j])
        {
            c[k]=b[j];
            j+=1;
            k++;
        }
        else
        {
            c[k]=a[i];
            i--;
            k++;
        }
    }
    while(i>=0)
        c[k++]=a[i--];
    while(j<n2)
        c[k++]=b[j++];
     for(i=0; i<k; i++)
    {
        if(i==0)
            printf("%d", c[i]);
        else
            printf(" %d", c[i]);

    }
    return 0;
}
