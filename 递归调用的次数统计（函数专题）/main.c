#include<stdio.h>
 int fib(int k);

 int main(void )
 {
     int n,a;
     scanf("%d", &n);
     a=fib(n);
     printf("%d\n", a);
     printf("递归调用了%d次",2*a-1);
     return 0;
 }

 int fib(int k)
 {
     if(k == 1 || k == 2)
         return 1;
     else
         return fib(k-1) + fib(k-2);
 }
