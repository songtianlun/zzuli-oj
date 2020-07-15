#include <stdio.h>
#include <stdlib.h>
#define ll 0.0225
int main()
{
   int n,c;
   double a,zong;
   scanf("%d%lf",&n,&a);
   zong = a;
   c = 1;
   while (n>c)
{
   zong = zong+zong*ll;
   c = c+1;
}
   zong = zong+zong*ll;
   printf("%.6f",zong);

   return 0;
}
