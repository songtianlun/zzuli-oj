#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
 int main()
 {
     int n,k,i,f;
     int * p;
     int * q;
     scanf("%d",&n);
     p=(int *)malloc(n*sizeof(int));
     for(i=0;i<n;i++)
     {
       scanf("%d",p+i);
     }
     scanf("%d",&k);
     f=k%n;
      q=(int *)realloc(p,(f+n)*sizeof(int));
    if(k>0)
    {
      for(i=n-1;i>=0;i--)
        *(q+i+f)=*(q+i);
      for(i=0;i<f;i++)
          *(q+i)=*(q+n-1+i+1);
    }

       for(i=0;i<n;i++)
     {

         if(i==n-1)
         {
           printf("%d",q[i]);
           break;
         }
       printf("%d ",q[i]);
     }

     return 0;

 }
