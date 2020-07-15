#include <stdio.h>
#include <stdlib.h>
#define N 100000
int main()
{
    int T,n,i,j,k,succe,p,sum;//到达
    int a[N],b[5];//a全部，b灶位，c排队
        b[0] = 0;
    scanf("%d",&T);
    while(T--)
    {
        for(i=0;i<4;i++)
        {
            b[i] = 0;
        }
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        sum = n;
        k = 0;
        p = 0;//点餐
        for(i=0,succe=0,j=0,k=0;succe<sum;i++)
        {//i time,succe 打上饭 j 灶位 k 人
            for(i=0;i<4;i++)
            {
                if(b[i]>=1)
                {
                    b[i]++;
                }
                if(b[i]==5)
                {
                    succe++;
                    b[i] = 0;
                }
            }
            if(j == 4)
                j = 0;
            if(p==1)
                for(j=0;j<5;j++)
                {
                    if(b[j]==0)
                    {
                        p=0;
                        b[j]=1;
                    }
                }
            if(a[k]==i)
                {
                    p++;
                    k++;
                }
        }
        printf("%d",i-1);
    }
    return 0;
}
