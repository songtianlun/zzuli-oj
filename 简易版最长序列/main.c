#include<stdio.h>
void fun()
{
    int i,j,n,max=0;
    int a[10000]={0},b[10000]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]++; //出现次数
        for(j=0;j<i;j++)
            if(a[i]==a[j]){b[j]++;b[i]=0;}
    }
    for(i=0;i<n;i++)
        if(b[i]>max)
			max=b[i]; //最大次数
    for(i=0;i<n;i++)
        if(b[i]==max)  //输出
            printf("%d\n",b[i]);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        fun();
    }
    return 0;
}
