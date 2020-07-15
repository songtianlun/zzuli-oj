/*某公司规定，销售人员工资由基本工资和销售提成两部分组成，其中基本工资是1500元/月，销售提成规则如下：
销售额小于等于10000元时，按照5%提成；
销售额大于10000元但小于等于50000元时，超出10000部分按照3%提成；
销售额大于50000元时，超出50000部分按照2%提成。
编写程序，根据销售额计算员工收入。*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int money;
    double pay;

    scanf("%d",&money);
    if(money<=10000)
    pay=1500+money*0.05;
    else if(money>10000&&money<=50000)
    pay=2000+(money-10000)*0.03;
    else if(money>50000)
    pay=3200+(money-50000)*0.02;
    printf("%.2f\n",pay);
    return 0;
}
