#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define Max 5
typedef int Type;
typedef struct node
{
    Type info;
    struct node *next;
} Node;
typedef struct stack
{
  Node *head;
}Stack;
void createstack(Stack *s);
int isStackEmpty(Stack s);
int isStackFull(Stack s);
void push(Type item,Stack *s);
Type pop(Stack *s);
Type peek(Stack s);
void print(Stack s);





#endif // STACK_H_INCLUDED
