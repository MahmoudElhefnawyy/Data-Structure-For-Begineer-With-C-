#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
typedef int Type;
typedef struct nodeT{
    Type info;
    struct Nodet *left;
    struct Nodet *right;
}NodeT;
typedef NodeT *Tree;
void createTree(Tree *t);
int isTreeEmpty(Tree t);
int isTreeFull(Tree t);
void preOrder(Tree t,void (*pvisit)(Type*));
void inOrder(Tree t,void (*pvisit)(Type*));
void postOrder(Tree t,void (*pvisit)(Type*));
int TreeSize(Tree t);
int TreeHeight(Tree t);
void clearTree(Tree *t);
void InsertTree(Tree *t,Type item);
int DeleteTree(Tree *t,Type item);


#endif // TREE_H_INCLUDED
