/*���˼�ָ���������һ��Ȥζ��ѧ�⣺���ˡ�Ů�˺�С���ܼ�n���ˣ�
��һ�ҷ�����Է���������cost���
ÿ�����˸���3���ÿ��Ů�˸���2���
ÿ��С������1���
������ٷ���̼������ˡ�Ů�˺�С�����м�����*/
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
