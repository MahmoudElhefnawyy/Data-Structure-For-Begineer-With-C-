#include"stack.h"
void createstack(stack *s)
{
    s->top=-1;
}
void push(type item,stack *s)
{
    s->Entry[++s->top]=item;
}
