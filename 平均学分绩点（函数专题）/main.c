#include <stdio.h>
#include <stdlib.h>
int study(int grade);

int main()
{
    int i,n,credit,grade;
    double sumcredit=0,sumgrade=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&credit,&grade);
        sumgrade=study(grade)*credit+sumgrade;
        sumcredit=sumcredit+credit;
    }
    printf("%.1f\n",sumgrade/sumcredit);
    return 0;
}

int study(int grade)
{
    int i;
    if(grade>=60)
    i=(grade-50)/10;
    else
        i=0;
    return i;
}
