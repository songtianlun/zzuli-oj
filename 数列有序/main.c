#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m,n,i,j;
	int a[1000];
	scanf("%d",&m);
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		if(n<=a[i])
			break;
	}
	for(j=0;j<i;j++)
		printf("%d ",a[j]);
	printf("%d",n);
	for(j=i;j<m;j++)
		printf(" %d",a[j]);
	printf("\n");
	return 0;
}
