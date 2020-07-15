#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int x;
    int y;
    struct node *next;
}Lnode,*LinkList;

int main()
{
    int n,i;
    LinkList head,p,rear;
    scanf("%d",&n);
    head = (LinkList)malloc(sizeof(Lnode));
    rear=p;
    head->next=NULL;
    for(i=0;i<n;i++)
    {
        p = (LinkList)malloc(sizeof(Lnode));
        scanf("%d",&p->x);
        scanf("%d",&p->y);
        p->next=rear->next;
        rear->next=p;
        rear=p;
    }
    printf("Hello world!\n");
    return 0;
}
