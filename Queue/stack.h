#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define Max 10
typedef int type;
struct Stack {
    int top;
    type Entry[Max];
}stack;
void createstack(stack *s);

void push(type item,stack *s);

#endif // STACK_H_INCLUDED
