/*给你一个简单的四则运算表达式，包含两个实数和一个运算符，请编程计算出结果
表达式的格式为：s1 op s2， s1和s2是两个实数，op表示的是运算符(+,-,*,/)，也可能是其他字符
如果运算符合法，输出表达式的值；若运算符不合法或进行除法运算时除数是0，则输出"Wrong input!"。最后结果小数点后保留两位。*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1,n2,key;
    char op;

    scanf("%lf %c %lf",&n1,&op,&n2);

    switch(op)
    {
    case '+':
        key=n1+n2;
        printf("%.2f\n",key);break;
    case '-':
        key=n1-n2;
        printf("%.2f\n",key);break;
    case '*':
        key=n1*n2;
        printf("%.2f\n",key);break;
    case '/':
        if(fabs(n2)>1e-10)//若分母不为0//
        {
        key=n1/n2;
        printf("%.2f\n",key);
        }
        else
            printf("Wrong input!\n");
        break;
    default:
        printf("Wrong input!\n");break;

    }
    return 0;
}
