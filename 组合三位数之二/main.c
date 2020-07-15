#include<stdio.h>
int dedup(int a, int b, int c);

int main()
{
    int a,b,c,i;
    for(i=100;i<333;i++)
    {
        a=i;
        b=i*2;
        c=i*3;
        dedup(a,b,c);
    }
	return 0;
}

int dedup(int a, int b, int c)
{
    int i,j;
    int due[10];
    due[0]=a%10;
    due[1]=(a/10)%10;
    due[2]=a/100;
    due[3]=b%10;
    due[4]=(b/10)%10;
    due[5]=b/100;
    due[6]=c%10;
    due[7]=(c/10)%10;
    due[8]=c/100;
    for(i=0;i<9;i++)
        for(j=i+1;j<9;j++)
    {
        if(due[i]==due[j]||due[i]==0)
        {
            return 0;
        }
    }
    printf("%d %d %d\n",a,b,c);
    return 0;
}
