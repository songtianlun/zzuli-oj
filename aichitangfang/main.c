#include <stdio.h>
#include <stdlib.h>
#define N 1000
int main()
{
    int T,n,i,j,k,succe,p,sum;//到达
    int a[N],b[5];//a全部，b灶位，c排队
        b[0] = 0;
    scanf("%d",&T);
    while(T--)
    {
        for(i=0;i<3;i++)
        {
            b[i] = -1;
        }


        scanf("%d",&n);
        for (i=0;i<n;i++)
            a[i]=-1;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        sum = n;
        k = 0;
        succe=0;
        p = 0;//点餐
        for(i=0;succe<sum;)
        {//i time,succe 打上饭 j 灶位 k 人

           if(a[k]==i)
            {
                i++;
                p++;
                k++;

                for(j=0;j<3;j++)
                {
                    if (b[j]<5 && b[j]>=0)
                            b[j]++;
                    if (b[j]==5)
                        {
                            b[j]=-1;
                            succe++;
                        }
                }

                if (p)
                {
                    for(j=0;j<3;j++)
                    {
                        if (b[j]==-1)
                        {
                            b[j]=0;
                            p--;
                            if (p==0)
                                break;
                        }
                    }
                }
                printf("\n%d\n",succe);
            }
            else
            {
                i++;
                printf ("else%d\n", i);
                for(j=0;j<3;j++)
                {
                    if (b[j]<5 && b[j]>=0)
                        b[j]++;
                    if (b[j]==5)
                        {
                            b[j]=-1;
                            succe++;
                        }
                }
            }
        }
        printf("%d\n",i);
    }
    return 0;
}
/*
1
3
4 5 6

1
5
2 3 4 5 6

*/
