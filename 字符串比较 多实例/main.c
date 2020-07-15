#include <stdio.h>
#include <string.h>
int main()
{
	char a[10000],b[10000];
	while(scanf("%s %s",a,b)!=EOF)
	{
		int lena,lenb,i,temp;
		lena=strlen(a);
		lenb=strlen(b);
		if(strcmp(a,b)==0)
			printf("NOn");
		else
		{
			if(lena>lenb)
				temp=lena;
			else
				temp=lenb;
			for(i=0;i<temp;i++)
			{
				if(a[i]==b[i])
					continue;
				else
				{
					if(a[i]>='a'&&a[i]<='z'&&b[i]>='a'&&b[i]<='z'||a[i]>='A'&&a[i]<='Z'&&b[i]>='A'&&b[i]<='Z')
					{
						if(a[i]<b[i])
						{
							printf("YESn");
							break;
						}
						else
						{
							printf("NOn");
							break;
						}
					}
					else if(a[i]>='a'&&a[i]<='z'&&b[i]>='A'&&b[i]<='Z')
					{
						if(a[i]-32<b[i])
						{
							printf("YESn");
							break;
						}
						else
						{
							printf("NOn");
							break;
						}
					}
					else if(a[i]>='A'&&a[i]<='Z'&&b[i]>='a'&&b[i]<='z')
					{
						if(a[i]+32<=b[i])
						{
							printf("YESn");
							break;
						}
						else
						{
							printf("NOn");
							break;
						}
					}
					else
					{
						if(a[i]<b[i])
						{
							printf("YESn");
							break;
						}
						else
						{
							printf("NOn");
							break;
						}
					}
				}
			}
		}
	}
	return 0;
}
