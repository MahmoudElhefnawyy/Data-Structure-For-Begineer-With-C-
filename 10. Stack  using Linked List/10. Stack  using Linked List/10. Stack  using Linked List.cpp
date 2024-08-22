// 10. Stack  using Linked List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node* next;
    node() 
    {
        data = 0;
        next = NULL;
    }; 
    ~node() {
    };

};

class stack
{
public:
    stack()
    {
        top = NULL;
    }
    ~stack()
        {

        }

    node* top;
    bool isEmpty()
    {
        if (top == NULL)
        {
            return true;
        }
        else
            return false;
    }
    void push(int item)
      
    {
        node* newnode = new node();
        newnode->data = item;
        if (isEmpty)
          {
            cout << "empty stack\n";
            
            newnode->next = NULL;
            top = newnode;
        }
        else
        {
            newnode->next = top;
            top = newnode;
        }

    }
   
    void display()
    {
        node* temp;
        temp = top;
        while (temp != NULL)
        {
            cout << temp->data;
            temp = temp->next;
        }
        cout << "\n";

    }
    bool isFound(int item)
    {
        node* temp;
        temp = top;
        bool flag = 0;
        while (temp != NULL )
        {
            if (temp->data == item)
            {
                flag = 1;
               
            }
            else
            temp = temp->next;
        }
        return flag;
    }
    int  count()
    {
        node* temp;
        temp = top;
        int count = 0;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;

        }
        return count;

    }
    int peek()
    {
        return top->data;
        
    }
    int pop()
    {
        int value;
        value = top->data;

        node* delptr = top;
        top = top->next;
        delete delptr;
        return value;
    }
    bool isFull()
    {
        node* ptr = new node();
        if (ptr == NULL)
            cout << " the stack is full, cant add more items \n";
        
    }
     
};
int main()
{
    int item;
    stack st;

    for (int i = 0; i < 3; i++)
    {
        cout << " enter item to push\n";
        
        cin >> item;
        st.push(item);
         st.display();
    }
    cout << st.pop() << " was deleted from stack\n";
    st.display();
    cout << st.pop() << " was deleted from stack\n";
    st.display();

    cout << "enter item to search for\n";
    cin >> item;
    if (st.isFound(item))
        cout << "item is found\n";
    else
        cout << " item is not found\n";
    cout << st.count () << endl;
}
