#include <stdio.h>
#include <math.h>
void sort(int a[], int n, int (*cmp)());
int CmpAsc(int x, int y); /*按升序要求判断两元素是否逆序*/
int CmpDec(int x, int y); /*按降序要求判断两元素是否逆序*/
int CmpAbsAsc(int x, int y);  /*按绝对值升序要求判断两元素是否逆序*/

int main()
{
   int a[12];
   int slt,i,n;
 
 /*读入n和n个整数，存入数组a*/
   scanf("%d",&n);
   for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   /*读入用户的选择，存入slt*/
   scanf("%d",&slt);

    switch(slt)
   {
     case 1:   sort(a, n, CmpAsc); break;
     case 2:   sort(a, n, CmpDec); break;
     case 3:   sort(a, n, CmpAbsAsc);break;
   }
   /*输出排序后的数组*/
   for(i=0;i<n;i++)
	if(i==n-1)
	printf("%d",a[i]);
	else
	printf("%d ",a[i]);
   }
void sort(int a[], int n, int (*cmp)())
{
    int i,j,b;
    for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(cmp(a[i],a[j]))
			{
				t=a[i];a[i]=a[j];a[j]=t;
			}
		}
	}
 }

 /*对数组a排序，排序原则由cmp指定，若cmp为真，表示两元素逆序*/
 }
int CmpAsc(int x, int y)
{

 //如果x>y返回1，否则返回0；
     if(x>y)
        return 1;
    else
        return 0;
}
int CmpDec(int x, int y)
{
 //如果x<y返回1，否则返回0；
    if(x<y)
        return 1;
    else
        return 0;
 }
 
int CmpAbsAsc(int x, int y)
{
//如果abs(x)>abs(y)返回1，否则返回0
    if(abs(x)>abs(y))
	return 1;
	else if(abs(x)<abs(y))
	return 0;
	else
	{
		if(x>y)
		return 1;
		else
		return 0;
	}
}
