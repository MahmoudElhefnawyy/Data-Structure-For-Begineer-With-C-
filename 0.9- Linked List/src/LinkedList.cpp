#include "LinkedList.h"
#include"Node.h"
#include<iostream>
using namespace std;
LinkedList::LinkedList()
{
	Head=NULL;

}

LinkedList::~LinkedList()
{
}

void LinkedList::Display()
{
    {
        Node* ptr = Head;
        while (ptr != NULL)
        {
            cout << ptr->Data << " ";
            ptr = ptr->Next;
        }
        cout << "\n";
    }
}

int LinkedList::Count()
{

        Node* ptr = Head;
        int coun = 0;
        while (ptr != NULL)
        {
            coun++;
            ptr = ptr->Next;
        }
        return coun;

}

void LinkedList::insertFirst(int NewValue)
{
    Node* newNode;

    newNode->Data = NewValue;
    if (isEmpty())
    {


        newNode->Next = NULL;
        Head = newNode;
    }
    else
    {


        newNode->Next = Head;
        Head = newNode;
    }
}

bool LinkedList::isEmpty()
{

        return(Head == NULL);

}

bool LinkedList::isFound(int value)
{
    Node* ptr = Head;
    bool found = false;
    while (ptr != NULL)
    {

        if (ptr->Data == value)
        {
            found = true;

            break;
        }
        ptr = ptr->Next;

    }
    return found;
}

void LinkedList::insertBefore(int item, int newValue)
{

}
