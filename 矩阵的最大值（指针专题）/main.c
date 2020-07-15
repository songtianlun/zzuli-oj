#include <stdio.h>
#include <stdlib.h>
void FindMax(int p[][3], int m, int n, int *pRow, int *pCol);

int main()
{
    int i,j,a[2][3],x,y;
    int m=2,n=3;
        for(j=0;j<2;j++)
        for(i=0;i<3;i++)
        scanf("%d",&a[j][i]);
    FindMax(a,m,n,&x,&y);

    printf("%d %d %d\n",a[y][x],y,x);
    return 0;
}

FindMax(int p[][3], int m, int n, int *pRow, int *pCol)
    {
        int i,j,max=-1;
        for(j=0;j<m;j++)
            for(i=0;i<n;i++)
        {
            if(p[j][i]>max)
            {
                max=p[j][i];
                *pRow=i;
                *pCol=j;
            }
        }
    }
