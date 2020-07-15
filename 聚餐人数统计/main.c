/*马克思手稿中有这样一道趣味数学题：男人、女人和小孩总计n个人，
在一家饭店里吃饭，共花了cost先令，
每个男人各花3先令，每个女人各花2先令，
每个小孩各花1先令，
请用穷举法编程计算男人、女人和小孩各有几个。*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,w,c,n,cost,answer;
    answer=0;
    scanf("%d%d",&n,&cost);
    for(m=0;m<=cost/3;m++)
    {
        for(w=0;w<=cost/2;w++)
        {
            for(c=0;c<=cost;c++)
            {
                if(m+w+c==n&&3*m+2*w+c==cost)
                {
                    printf("%d %d %d\n",m,w,c);
                    answer=1;
                }

            }
        }
    }
    if(answer==0)
        printf("No answer");
    return 0;
}
