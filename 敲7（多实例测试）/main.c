/*Description
输出7和7的倍数，还有包含7的数字例如（17，27，37...70，71，72，73...）
Input
首先输入一个整数t，表示有t组数据。
然后有t行，每行一个整数N。(N不大于30000)
Output
对于每组数据 ，输出从小到大排列的不大于N的与7有关的数字。
每组数据占一行，每个数字后面有一个空格；*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,t;
	int I;

	scanf("%d",&t);

	for(I=1;I<=t;I++)
	{

	    scanf("%d",&n);
		for(i=1;i<=n;i++)
		{

			if(i%7==0||i%10==7||i/10%10==7||i/100%10==7||i/1000%10==7||i/10000%10==7)
                printf("%d ",i);
		}
		printf("\n");
	}
return 0;
}
