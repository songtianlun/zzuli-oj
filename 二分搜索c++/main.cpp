#include<stdio.h>
int a[100000 +10];
int fi(int a[],int m,int x)
{
    int low = 0;
    int high = m-1;
    while(low <= high){
        int mid=(low + high)/2;
        int y=a[mid];
        if(y < x)
            low = mid +1;
        else if(y>x)
            high = mid -1;
        else
        return mid;
    }
return -1;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
    }
    int t;
    scanf("%d",&t);
    while(t--){
        int x;
        scanf("%d",&x);
        int k = fi(a,n,x);
        if(k==-1){
            printf("Not found!\n"); continue;  
        }
        else{
            printf("%d\n",k); continue;    
        }  
    }
return 0;
}</stdio.h>
