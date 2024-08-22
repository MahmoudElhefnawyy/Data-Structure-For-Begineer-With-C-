#include <iostream>
#include"LinkedList.h"
#include"Node.h"
using namespace std;

int main()
{
    LinkedList l1;
    if (l1.isEmpty())
        cout << " linked List is empty\n";
    else
        cout << "no od itms in list "<<l1.Count()<<"\n";
    int value;
        cout << " enter item to insert in the list\n";

        cin >> value;

        l1.insertFirst(value);
        l1.Display();

        cout << "no od itms in list " << l1.Count() << "\n";
        cout << " enter item to search for in the list\n";
        cin >> value;
        if (l1.isFound(value))
            cout << " item is found\n";
        else
            cout << "item is not found\n";

}
