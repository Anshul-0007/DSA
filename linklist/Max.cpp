#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[], int n)
{
    struct Node *t, *last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    
    for(int i = 1; i<n; i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

int Max(struct Node *p)
{
    int m = -32678;
    
    while(p)
    {
        if(p->data>m)
            m=p->data;
        p=p->next;
    }
    return m;
}

int RMax(struct Node *p)
{
    int x=0;
    if(p==0)
        return -32768;
    x=RMax(p->next);
    if(x>p->data)
        return x;
    else
        return p->data;
}

int main()
{
    int A[]={2,3,4,28,1,24,3,2};
    create(A,8);
    
    printf("Max is %d\n\n", RMax(first));
    return 0;
}
