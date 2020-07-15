#include <stdio.h>
#include <stdlib.h>
struct money
{
    char name[32];
    int endgrade;
    int classgrade;
    char committee;
    char w;
    int paper;
};
int main()
{
    struct money a,b;
    int n,i,max=-1,sum=0,summax=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s ",a.name);
        scanf("%d ",&a.endgrade);
        scanf("%d ",&a.classgrade);
        scanf("%c ",&a.committee);
        scanf("%c ",&a.w);
        scanf("%d",&a.paper);
        sum=0;
        if((a.endgrade)>80&&(a.paper>=1))
            sum+=8000;

        if((a.endgrade>85)&&(a.classgrade>80))
            sum+=4000;

        if(a.endgrade>90)
            sum+=2000;

        if(a.endgrade>85&&a.w=='Y')
            sum+=1000;

        if(a.classgrade>=80&&a.committee!='N')
            sum+=850;

        summax=sum+summax;
        if(sum>max)
        {
            max=sum;
            b=a;
        }
    }
        printf("%s\n",b.name);
        printf("%d\n",max);
        printf("%d\n",summax);
    return 0;
}
