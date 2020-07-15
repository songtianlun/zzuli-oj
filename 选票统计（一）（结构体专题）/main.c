#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,votes[10];
    char names[10];
    scanf("%d",&n);
    for(i=0;i<6;i++)
        votes[i]=0;
    for(i=0;i<n;i++)
    {
        scanf("%s",names);
        if(names=='zhang')
            votes[0]+=1;
        else if(names=='wang')
            votes[1]+=1;
        else if(names=='zhao')
            votes[2]+=1;
        else if(names=='liu')
            votes[3]+=1;
        else
            votes[4]+=1;
    }
    printf("zhang %d\n",votes[0]);
    printf("wang %d\n",votes[1]);
    printf("zhao %d\n",votes[2]);
    printf("liu %d\n",votes[3]);
    printf("miao %d\n",votes[4]);
    return 0;
}
