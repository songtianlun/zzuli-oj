#include<stdio.h>
#define N 200
int main()
{
	char str[N];
	int abcd[N]={0};
	int x,i=0,j;
	int max;
	while((str[i]=getchar())!='\n')
    {
	if(str[i]>='A'&&str[i]<='Z')
	str[i]+=32;
	x=str[i];
	abcd[x]++;
	i++;
	}

	max=0;
	for(i=121;i>=97;i--)
	if(abcd[i]>=max)
	{
	    max=abcd[i];
	    j=i;
    }
	printf("%c",j);
	return 0;
}
