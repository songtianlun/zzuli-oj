/*����һ���ַ������Ȳ�����100����һ��������k��
�����е�Ӣ����ĸ���ܲ�������ܺ���ַ�������Ӣ����ĸ���䡣
����˼�룺��ÿ����ĸc��һ������k������������ĵ�k����ĸ���棬
�任��ʽ��c=c+k�������ĸΪz�����һ����ĸ��a��Ҳ������ĸ�ַ��γ�һ��Բ��*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char ch[100];
    int k,i,n,l;
    gets(ch);
    scanf("%d",&k);
    n=k%26;
    l=strlen(ch);
    for(i=0;i<l;i++)
    {
        if(ch[i]>='a'&&ch[i]<='z')
        {
            if(ch[i]+n<='z')
            ch[i]=ch[i]+n;
            else
            ch[i]=ch[i]+n-26;
        }
        if(ch[i]>='A'&&ch[i]<='Z')
        {
            if(ch[i]+n<='Z')
            ch[i]=ch[i]+n;
            else
            ch[i]=ch[i]+n-26;
        }

    }
    puts(ch);
    return 0;
}
