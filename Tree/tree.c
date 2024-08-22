#include"tree.h"
#include<stdlib.h>
void createTree(Tree *t)
{
    *t=NULL;
}
int isTreeEmpty(Tree t)
{
    return !t;
}
int isTreeFull(Tree t)
{
    return 0;
}
void preOrder(Tree t,void (*pvisit)(Type*))
{
    if(t)
    {
        (*pvisit)(&(t->info));
        preOrder( t->left,pvisit);
        preOrder( t->right,pvisit);
    }

}
void inOrder(Tree t,void(*pvisit)(Type*))
{
    if(t)
    {
        inOrder(t->left,pvisit);
        (*pvisit)(&(t->info));
        inOrder( t->right,pvisit);
    }
}
void postOrder(Tree t,void (*pvisit)(Type*))
{
    if(t)
    {
        postOrder( t->left,pvisit);
        postOrder( t->right,pvisit);
        (*pvisit)(&(t->info));
    }
}
int TreeSize(Tree t)
{
    if(!t)
        return 0;
    return 1+TreeSize(t->left)+TreeSize(t->right);
}
int TreeHeight(Tree t)
{
    if(!t)
        return 0;
    int a=TreeHeight(t->left);
    int b=TreeHeight(t->right);
    return a>b? a+1 : b+1;
}
void clearTree(Tree *t)
{
    if(*t)
    {
        clearTree(&(*t)->left);
        clearTree(&(*t)->right);
        free(*t);
        *t=NULL;
    }
}
void InsertTree(Tree *t,Type item)
{
    NodeT *p=(NodeT *)malloc(sizeof(NodeT));
    p->info=item;
    p->left=NULL;
    p->right=NULL;
    if (!(*t))
        *t= p;
    else
    {
        NodeT *pre,*cur;
        cur=*t;
        while(cur)
        {
            pre=cur;
            if(item<cur->info)
                cur=cur->left;
            else
                cur=cur->right;
        }
        if(item <pre->info)
            pre->left=p;
        else
            pre->right=p;
    }
}
void DeleteNode(Tree *pt)
{
    NodeT *cur=*pt;
    if(!(cur)->left)
        *pt=(cur)->right;
    else if(!(cur)->right)
        *pt=(cur)->left;
    else
    {
        cur=(cur)->left;
        NodeT *prev=NULL;
        while(cur->right)
        {
            prev=cur;
            cur=cur->right;
        }
        (*pt)->info=cur->info;
        if(prev)
            prev->right=cur->left;
        else
            (*pt)->left=cur->left;
    }
    free(cur);
}
int DeleteTree(Tree *t,Type item)
{
    int found=0;
    NodeT *cur=*t;
    NodeT *prev=NULL;
    while(cur && !(found=(item==cur->info)))
    {
        prev=cur;
        if(item<cur->info)
            cur=cur->left;
        else
            cur=cur->right;
    }
    if (found)
        {
            if(!prev)
                DeleteNode(t);
            else if((item< prev->info))
                DeleteNode(&prev->left);
            else
                DeleteNode(&prev->right);
        }
        return found;
}








