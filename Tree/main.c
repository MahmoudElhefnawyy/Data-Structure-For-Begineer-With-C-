#include <stdio.h>
#include <stdlib.h>
#include"tree.h"
void printItem(Tree t)
{
    while(t)
    {
        printf("%d\t",t->info);
    }
}
int main()
{
    Tree t;
    createTree(&t);
    InsertTree(&t,10);
    InsertTree(&t,20);
    InsertTree(&t,30);
    InsertTree(&t,40);
    InsertTree(&t,50);
    printf("inOrder :\n");
    inOrder(&t,printItem);
    DeleteTree(&t,40);
    printItem(t);
}
