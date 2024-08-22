#include <stdio.h>
#include <stdlib.h>
#include"stack.h"
int main()
{
    int item;
    Stack s;
    createstack(&s);
        push(1,&s);
        push(2,&s);
        push(3,&s);
        push(4,&s);
   if(!isStackEmpty(s))
     item=pop(&s);
     printf("%d\n",item);

}




















