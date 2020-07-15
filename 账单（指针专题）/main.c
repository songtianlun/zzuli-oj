#include<stdio.h>
#include<string.h>
void XX(int n){
    double f,s=0;char c[201],*p=c;
    while(n--){
        gets(c); p=strrchr(c,32);
        sscanf(p,"%lf",&f);s+=f;}
    printf("%.1f\n",s);}
int main(){
    int n,t;scanf("%d",&n);
    while(n--){
        scanf("%d",&t);getchar();
        XX(t);}}
