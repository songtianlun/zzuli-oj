/*商场夏季促销，购物500元以下，不打折；
购物500元（含）以上，95折；
购物1000元（含）以上，9折；
购物3000元（含）以上，85折；
购物5000元（含）以上，8折。
根据消费金额，确定用户实际需要支付的数目。*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int money;
    double pay;

    scanf("%d",&money);
    if(money<500)
        pay=money;
    else if(money>=500&&money<1000)
        pay=money*0.95;
    else if(money>=1000&&money<3000)
        pay=money*0.9;
    else if(money>=3000&&money<5000)
        pay=money*0.85;
    else if(money>=5000)
        pay=money*0.8;
    printf("%.2f\n",pay);
    return 0;
}
