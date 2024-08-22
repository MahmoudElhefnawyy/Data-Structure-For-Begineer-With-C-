#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include"Node.h"
using namespace std;

class LinkedList
{
    public:
        Node*  Head;
        LinkedList();
        ~LinkedList();
        void Display();

        int Count();

        void insertFirst(int NewValue);

        bool isEmpty();

        bool isFound(int value);
        void insertBefore(int item, int newValue);
};

#endif // LINKEDLIST_H
