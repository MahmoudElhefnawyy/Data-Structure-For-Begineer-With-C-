#include"stack.h"
#include<stdlib.h>
void createstack(Stack *l)
{
    l->head=NULL;
}
int isStackEmpty(Stack l)
{
    return l.head==NULL;
}
int isStackFull(Stack l)
{
    return 0;
}
void push(Type item,Stack *l)
{
    Node *p=(Node*)malloc(sizeof(Node));
    p->info=item;
    p->next=l->head;
    l->head=p;
}
int pop(Stack *l)
{
        Type item;
        Node *q,*temp;
        item=l->head->info;
        temp=l->head;
        l->head=l->head->next;
        free(temp);
}
int peek(Stack l)
{
  return l.head->info;
}

void print(Stack l)
{
    while(!isStackEmpty(l))
    {
        int item=pop(&l);
        printf("%d\n",item);
    }
}

