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
    }
    ~node()
    {

    }

};
class queue
{
public:
    node* front;
    node* rear;
    queue()
    {
        front = rear = NULL;
    }
    bool isEmpty()
    {
        if (front == NULL)//&& rear==NULL)
            return true;
        else
            return false;
    }
    void  DeQueue()
    {
        int x = -1;

        if (isEmpty)
        {
            cout << " queue is empty \n";
        }


        else if (front == rear && rear != NULL)
        {
            delete front;
            front = rear = NULL;

        }
        else
        {
            node* delPtr = front;
            x = delPtr->data;
            front = front->next;
            delete delPtr;
        }

    }
    void enQueue(int value)
    {
        node* neNode = new node();
        neNode->data = value;
        if (isEmpty())
        {
            // neNode->next = NULL; by default
            front = neNode;
            rear = neNode;

        }
        else
        {
            //  neNode->next = NULL; by default
            rear->next = neNode;
            rear = neNode;
        }
    }
    void Display()
    {
        node* temp = front;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";

    }
    int get_front()
    {
        
        return front->data;
    }
    int get_rear()
    {

        return rear->data;
    }
    int count()
    {
        int counter = 0;
        node *temp = front;
        while (temp != NULL)
        {
            counter++;
            temp = temp->next;
        }
        return counter;
    }
    bool is_found(int item)
    {
        node* temp = front;
        bool found = false;
        while (temp != NULL)
        {
            if (temp->data == item)
            {
                found = true;
                return;
            }
            else
              temp = temp->next;
        }
        return found;
    }
    void clear()
    {
        while (!isEmpty)
        {
          DeQueue();
        }
    }
};
int main()
{
    int value;
    queue q1;
    for (int i = 0; i < 5; i++)
    {
        cout << "enter value to add to queue\n";
        cin >> value;
        q1.enQueue(value);

    }
    cout << "Queue items is \n";
    q1.Display();
   // q1.DeQueue();
    q1.Display();
   /* q1.get_front;
    q1.get_rear;*/
    cout<<q1.count()<<endl;
    q1.is_found(50);
}
